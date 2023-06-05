// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EscenarioShop.h"
#include "EscenarioShop1.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AEscenarioShop1 : public AEscenarioShop
{
	GENERATED_BODY()

public:
	//Concoct the selected potion
	virtual AEscenario* Confeccionar(FString EscenarioSKU) override;

};
