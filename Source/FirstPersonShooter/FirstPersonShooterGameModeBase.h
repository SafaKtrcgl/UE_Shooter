// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FirstPersonShooterGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPERSONSHOOTER_API AFirstPersonShooterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled);
};
