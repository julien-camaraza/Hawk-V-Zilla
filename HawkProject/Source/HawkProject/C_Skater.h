// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "C_Skater.generated.h"

UCLASS()
class HAWKPROJECT_API AC_Skater : public APawn
{
	GENERATED_BODY()


	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;

public:
	// Sets default values for this pawn's properties
	AC_Skater();

	// Root Component
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class USceneComponent* root;

	FVector force;
	FVector currentVelocity; 
	
	//Creates main public variables to be filled in by blueprints
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent* physicsCapsule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UStaticMeshComponent* skateboardMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class USkeletalMeshComponent* characterMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UCapsuleComponent* hitboxCapsule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
	float steeringRate = .25;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
	float moveRightSave = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
	float moveForward = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
	float speed = 1000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	bool accelerating = false;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
