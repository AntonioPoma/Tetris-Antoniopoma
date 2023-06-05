// Fill out your copyright notice in the Description page of Project Settings.


#include "IngenieroBlock.h"

// Sets default values
AIngenieroBlock::AIngenieroBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIngenieroBlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIngenieroBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIngenieroBlock::ConstruirBloque()
{
	ConstructorBlock->ContruirTamanoBloque();
	ConstructorBlock->ConstruirColorBloque();
	ConstructorBlock->ConstruirMaterial();
}

void AIngenieroBlock::SetConstructorBlock(AActor* Constructor)
{
	ConstructorBlock = Cast<IConstructorBlock>(Constructor);

}

ABlockGeneral* AIngenieroBlock::GetBlockGeneral()
{
	if (ConstructorBlock)
	{
		//Returns the Lodging of the Builder
		return ConstructorBlock->GetBlockGeneral();
	}
	else return nullptr;
}

