#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassEventWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassEventWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowEventBattlePass(uintptr_t manager, uintptr_t dialogueEntity, uintptr_t currencyType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1677C10))(0, manager, dialogueEntity, currencyType);
	}

};

}
