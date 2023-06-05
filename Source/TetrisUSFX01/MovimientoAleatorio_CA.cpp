// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoAleatorio_CA.h"

// Sets default values for this component's properties
UMovimientoAleatorio_CA::UMovimientoAleatorio_CA()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMovimientoAleatorio_CA::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMovimientoAleatorio_CA::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

