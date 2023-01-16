// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnim.h"
#include "PlayerCharacter.h"

void UPlayerAnim::NativeUpdateAnimation(float DeltaSeconds) {

	// �÷��̾��� �̵� �ӵ��� ������ speed�� �Ҵ��ϰ� �ʹ�.
	// ���� �� ������
	auto ownerPawn = TryGetPawnOwner();
	// �÷��̾�� ĳ����
	auto player = Cast<APlayerCharacter>(ownerPawn);

	if (player != nullptr)
	{
		// �̵� �ӵ��� �ʿ�
		FVector velocity = player->GetVelocity();
		// �÷��̾��� ���� ���Ͱ� �ʿ�
		FVector forwardVector = player->GetActorForwardVector();
		// speed�� �� �Ҵ��ϱ�
		speed = FVector::DotProduct(forwardVector, velocity);
	}

}
