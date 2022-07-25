// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	PrintLogs();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyActor::PrintLogs()
{
	UE_LOG(LogTemp, Display, TEXT("Display Unreal!"));
	UE_LOG(LogTemp, Warning, TEXT("Warning Unreal!"));
	UE_LOG(LogTemp, Error, TEXT("Error Unreal!"));

	FDateTime dt = FDateTime().Now().GetDate();
}