// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"
#include "BattleTank.h"



ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank> (GetPawn());
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Playercontroller begin play"));

	ATank* tank = GetControlledTank();

	if (tank)
	{
		UE_LOG(LogTemp, Warning, TEXT("We have a tank named: %s"), *tank->GetName());
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("no tank"));
	}

}
