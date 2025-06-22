// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_12025Character.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"// para mapear el boton de la bomba
#include "InputAction.h"// para mapear el boton de la bomba
#include "Bomba.h"//bomba
#include "BombaBlanco.h"//bomba blanca
#include "BombaNegro.h"//bomba negra


DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ABomberMan_12025Character

ABomberMan_12025Character::ABomberMan_12025Character()
{
	// Crear InputAction para Bomba Blanca
	ColocarBombaBlancas = NewObject<UInputAction>(this, TEXT("ColocarBombaBlanca"));
	if (ColocarBombaBlancas)
	{
		ColocarBombaBlancas->ValueType = EInputActionValueType::Boolean;
	}

	// Crear InputAction para Bomba Negra
	ColocarBombaNegras = NewObject<UInputAction>(this, TEXT("ColocarBombaNegra"));
	if (ColocarBombaNegras)
	{
		ColocarBombaNegras->ValueType = EInputActionValueType::Boolean;
	}

	// Clases por defecto (si no usas Blueprint)
	ClaseBombaBlanca = ABombaBlanco::StaticClass();
	ClaseBombaNegra = ABombaNegro::StaticClass();


	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void ABomberMan_12025Character::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		if (ULocalPlayer* LocalPlayer = PC->GetLocalPlayer())
		{
			if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
			{
				// Guardar el contexto para evitar GC
				BombaMappingContext = NewObject<UInputMappingContext>(this);

				BombaMappingContext->MapKey(ColocarBombaBlancas, EKeys::E);
				BombaMappingContext->MapKey(ColocarBombaNegras, EKeys::T);

				// Agregar contexto con prioridad más alta (ejemplo 1)
				Subsystem->AddMappingContext(BombaMappingContext, 10);
			}
		}
	}

}

void ABomberMan_12025Character::ColocarBombaBlanca()
{
	if (ClaseBombaBlanca)
	{
		FVector Pos = GetActorLocation();
		Pos.Z = 0.0f;
		GetWorld()->SpawnActor<ABomba>(ClaseBombaBlanca, Pos, FRotator::ZeroRotator);
	}
}

void ABomberMan_12025Character::ColocarBombaNegra()
{
	if (ClaseBombaNegra)
	{
		FVector Pos = GetActorLocation();
		Pos.Z = 0.0f;
		ABomba* BombaNegra = GetWorld()->SpawnActor<ABomba>(ClaseBombaNegra, Pos, FRotator::ZeroRotator);
		
	}
}

float ABomberMan_12025Character::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	// Reducir salud del personaje
	Health -= DamageAmount;

	// Si la salud llega a 0 o menos, el personaje "muere"
	if (Health <= 0)
	{
		// Realiza acciones adicionales como muerte o reinicio de juego
		// Mostrar mensaje en pantalla
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("¡Has muerto!"));
		}
	}

	// Retornar el daño aplicado
	return DamageAmount;
}

//////////////////////////////////////////////////////////////////////////
// Input

void ABomberMan_12025Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABomberMan_12025Character::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABomberMan_12025Character::Look);
		// Colocar Bomba Blanca
		EnhancedInputComponent->BindAction(ColocarBombaBlancas, ETriggerEvent::Started, this, &ABomberMan_12025Character::ColocarBombaBlanca);

		// Colocar Bomba Negra
		EnhancedInputComponent->BindAction(ColocarBombaNegras, ETriggerEvent::Started, this, &ABomberMan_12025Character::ColocarBombaNegra);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ABomberMan_12025Character::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ABomberMan_12025Character::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}