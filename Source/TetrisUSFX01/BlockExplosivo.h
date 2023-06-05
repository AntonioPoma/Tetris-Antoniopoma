// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "BlockGeneral.h"
#include "ConstructorBlock.h"
#include "BlockExplosivo.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API ABlockExplosivo : public ABlock, public IConstructorBlock
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



private:
	UPROPERTY(VisibleAnywhere, Category = "El Bloque general")
		class ABlockGeneral* BlockGeneral;

public:
	//Create the Swimming Pool
	virtual void ContruirTamanoBloque() override;
	//Create the Lobby Area
	virtual void ConstruirColorBloque() override;
	//Create the Restaurants
	virtual void ConstruirMaterial() override;

	//Returns the Lodging
	virtual class ABlockGeneral* GetBlockGeneral() override;


public:
	UPROPERTY(EditAnywhere, Category = "Materiales")
		class UMaterialInterface* Material1;
};
