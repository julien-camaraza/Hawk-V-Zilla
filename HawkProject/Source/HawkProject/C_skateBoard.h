// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "C_skateBoard.generated.h"

/**
 * 
 */
UCLASS()
class HAWKPROJECT_API AC_skateBoard : public AWheeledVehicle
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;


public:
	// Constructor
	//AC_skateBoard();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class USkeletalMeshComponent* characterMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UCapsuleComponent* hitboxCapsule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	bool accelerating = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
