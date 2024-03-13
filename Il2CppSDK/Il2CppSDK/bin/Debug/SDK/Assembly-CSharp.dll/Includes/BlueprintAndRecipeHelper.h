#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlueprintAndRecipeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintAndRecipeHelper"));
	}


	template <typename T = ValueTuple2bool, Il2CppString*>*> static T CheckUnlocked(BlueprintEntity* blueprintEntity, ICommonContexts* world, GameEntity* player, TrophyRoadEntity* currentStep) {
		return ((T (*)(void *, BlueprintEntity*, ICommonContexts*, GameEntity*, TrophyRoadEntity*))(Il2CppBase() + 0x16BBDB8))(0, blueprintEntity, world, player, currentStep);
	}

};

