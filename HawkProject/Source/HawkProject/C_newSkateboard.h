// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "C_newSkateboard.generated.h"

/**
 * 
 */
UCLASS()
class HAWKPROJECT_API AC_newSkateboard : public AWheeledVehicle
{
	GENERATED_BODY()
	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:
	AC_newSkateboard();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class USkeletalMeshComponent* characterMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UCapsuleComponent* hitboxCapsule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	bool accelerating = false;

};
