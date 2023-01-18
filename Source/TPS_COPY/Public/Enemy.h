// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS()
class TPS_COPY_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHp = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentHp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RightBeforeHp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector StartTrace;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector EndTrace;
	
	UFUNCTION(BlueprintCallable)
	void Attack();

	UPROPERTY(EditAnywhere)
	class ATCharacter* target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool InRange = false;
};
