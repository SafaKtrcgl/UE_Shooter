// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FirstPersonShooterGameModeBase.h"
#include "KillThemAllGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPERSONSHOOTER_API AKillThemAllGameMode : public AFirstPersonShooterGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled) override;
};
