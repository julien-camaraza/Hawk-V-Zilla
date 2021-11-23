// Fill out your copyright notice in the Description page of Project Settings.

#include "C_Skater.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AC_Skater::AC_Skater()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	
	root = CreateDefaultSubobject<USceneComponent>("root");
	root->SetupAttachment(RootComponent);

	//Creates skateboard mesh
	skateboardMesh = CreateDefaultSubobject<UStaticMeshComponent>("skateboardMesh");
	skateboardMesh->SetupAttachment(RootComponent);

	//Creates character skeleton
	characterMesh = CreateDefaultSubobject<USkeletalMeshComponent>("characterMesh");
	characterMesh->SetupAttachment(skateboardMesh);

	// Create capsule component that will drive physics calculations
	physicsCapsule = CreateDefaultSubobject<UCapsuleComponent>("physicsCapsule");
	physicsCapsule->SetupAttachment(skateboardMesh);

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(characterMesh);

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	// Create character hitbox
	hitboxCapsule = CreateDefaultSubobject<UCapsuleComponent>("hitboxCapsule");
	hitboxCapsule->SetupAttachment(characterMesh);

	

}

// Called when the game starts or when spawned
void AC_Skater::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AC_Skater::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//Get the physics capsule location and move the skateboard (and it's children) to it.
	FVector capsuleLocation = physicsCapsule->GetComponentLocation();
	skateboardMesh->SetWorldLocation(capsuleLocation);

	//Rotate the physics capsule on input
	skateboardMesh->AddRelativeRotation(FRotator(0.f, (steeringRate * moveRightSave), 0.f).Quaternion());
	FRotator boardCurrentRotation = skateboardMesh->GetComponentRotation();
	FRotator capsuleCurrentRotation = physicsCapsule->GetComponentRotation();
	//physicsCapsule->SetWorldRotation(FRotator(capsuleCurrentRotation.Roll, boardCurrentRotation.Yaw, capsuleCurrentRotation.Pitch));
	physicsCapsule->AddRelativeRotation(FRotator(0.0, (steeringRate * moveRightSave), 0.f).Quaternion());

	// When the player inputs forwards or backwards, add force the to physics cylinder
	force = (moveForward * speed) * (skateboardMesh->GetForwardVector());
	currentVelocity = physicsCapsule->GetComponentVelocity();

	// If player presses forward, add force. 
	if ((moveForward * speed) > 0)
	{
		if ((abs(currentVelocity.X)) + (abs(currentVelocity.Y)) + (abs(currentVelocity.Z)) < 10000)
		{
			physicsCapsule->AddForce(force);
		}

	}
	// If they press backwards, come to a slow stop.
	else if ((moveForward * speed)<= 0)
	{
		
		if ((currentVelocity.X + currentVelocity.Y + currentVelocity.Z) > 0)
		{
			physicsCapsule->AddForce(force/5);
		}
		
	}
	else
	{
		if ((steeringRate * moveRightSave) > 0)
		{
			physicsCapsule->AddForce(force * .25);
		} 
	}


}

// Called to bind functionality to input
void AC_Skater::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

