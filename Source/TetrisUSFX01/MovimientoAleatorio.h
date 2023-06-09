// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MovimientoAleatorio.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMovimientoAleatorio : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRISUSFX01_API IMovimientoAleatorio
{
	GENERATED_BODY()


public:
	float DistanciaX;
	float DistanciaY;
	float DistanciaZ;
	float TiempoTranscurrido;
	float TiempoLimite;
};