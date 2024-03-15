#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlueprintAndRecipeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintAndRecipeHelper"));
	}


	 static ValueTuple2bool, Il2CppString*>* CheckUnlocked(BlueprintEntity* blueprintEntity, ICommonContexts* world, GameEntity* player, TrophyRoadEntity* currentStep) {
		return ((ValueTuple2bool, Il2CppString*>* (*)(void *, BlueprintEntity*, ICommonContexts*, GameEntity*, TrophyRoadEntity*))(Il2CppBase() + 0x16BBDB8))(0, blueprintEntity, world, player, currentStep);
	}

};

