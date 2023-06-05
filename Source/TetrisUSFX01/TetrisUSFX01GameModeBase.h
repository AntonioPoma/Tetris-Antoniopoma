// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Block.h"
#include "Piece.h"
#include "TetrisUSFX01GameModeBase.generated.h"

UCLASS()
class TETRISUSFX01_API ATetrisUSFX01GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	ATetrisUSFX01GameModeBase();

	UFUNCTION()
	void DestroyActorFunction();

	virtual void Tick(float DeltaTime) override;
private:

	UPROPERTY()
	ABlock* SpawnedActor;
	APiece* SpawnedPiece;

	class APiece* Piece;

	float siguientePosicionZ;

};
