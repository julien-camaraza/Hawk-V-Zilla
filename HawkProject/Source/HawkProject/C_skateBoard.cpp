// Fill out your copyright notice in the Description page of Project Settings.


#include "C_skateBoard.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
/*
AC_skateBoard::AC_skateBoard()
{
	//Creates character skeleton
	//characterMesh = CreateDefaultSubobject<USkeletalMeshComponent>("characterMesh");

	// Create a camera boom (pulls in towards the player if there is a collision)
	//CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	//CameraBoom->SetupAttachment(characterMesh);

	// Create a follow camera
	//FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	//FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	// Create character hitbox
	//hitboxCapsule = CreateDefaultSubobject<UCapsuleComponent>("hitboxCapsule");
	//hitboxCapsule->SetupAttachment(characterMesh);

} */

void AC_skateBoard::BeginPlay()
{
}

void AC_skateBoard::Tick(float DeltaTime)
{
}
