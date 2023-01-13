// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class TPS_COPY_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
	class USpringArmComponent* springArmComp;

	UPROPERTY(EditAnywhere)
	class UCameraComponent* cameraComp;

	// �������� ���̷�Ż�޽� �߰�
	UPROPERTY(EditAnywhere, Category = SniperMesh)
	class USkeletalMeshComponent* sniperComp;

	// ������ ���̷�Ż�޽� �߰�
	UPROPERTY(EditAnywhere, Category = RifleMesh)
	class USkeletalMeshComponent* rifleComp;

	void OnAxisHorizontal(float value);
	void OnAxisVertical(float value);
	void OnAxisLookUp(float value);
	void OnAxisTurnRight(float value);
	void OnActionJump();
	void OnActionZoom();
 	void OnActionCrouch();
 	void OnActionCrouchRelease();
	void OnActionFire();
	
	FVector direction;

	// �������� ��� ���ΰ�
	bool bUsingSniper = true;

	// �������۷� ����
	void ChangeToSniper();

	// �����÷� ����
	void ChangeToRifle();

	UPROPERTY(EditAnywhere, Category="Factory Setting")
	TSubclassOf<class APlayerBullet> bulletFactory;
	




};
