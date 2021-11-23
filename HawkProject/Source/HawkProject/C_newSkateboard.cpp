// Fill out your copyright notice in the Description page of Project Settings.


#include "C_newSkateboard.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"

AC_newSkateboard::AC_newSkateboard()
{
	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	//CameraBoom->SetupAttachment(characterMesh);

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	//Creates character skeleton
	characterMesh = CreateDefaultSubobject<USkeletalMeshComponent>("characterMesh");

	hitboxCapsule = CreateDefaultSubobject<UCapsuleComponent>("hitboxCapsule");
	hitboxCapsule->SetupAttachment(characterMesh);
}
