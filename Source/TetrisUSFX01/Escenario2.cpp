// Fill out your copyright notice in the Description page of Project Settings.


#include "Escenario2.h"


void AEscenario2::BeginPlay()
{
	Super::BeginPlay();
	//Set the ingredients
	NombreEscenario = "Escenario 2";
	Estructura = "Gelatinosa";
	Posicion = "Secundaria";
	//Add the herbs
	Material.Add("Hierro");
	Material.Add("Oro");

}

void AEscenario2::Elaborar()
{
	//Log the brewing type
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando escenario 2"));

}
