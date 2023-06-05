// Fill out your copyright notice in the Description page of Project Settings.


#include "Escenario1.h"


void AEscenario1::BeginPlay()
{
	Super::BeginPlay();
	//Set the ingredients
	NombreEscenario = "Escenario1";
	Estructura = "Solida";
	Posicion = "Principal";
	Material.Add("Hierro");

}

void AEscenario1::Elaborar()
{
	//Log the brewing type
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando el escenario"));

}
