#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStatueEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStatueEntity"));
	}


	template <typename T = uintptr_t> T get_statue() {
		return ((T (*)(IStatueEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasStatue() {
		return ((T (*)(IStatueEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddStatue(int32_t newMinLevel, Il2CppString* newActiveEffect, Il2CppString* newCanActivateEffect, Il2CppString* newCooldownEffect) {
		return ((T (*)(IStatueEntity*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newMinLevel, newActiveEffect, newCanActivateEffect, newCooldownEffect);
	}
	template <typename T = void> T ReplaceStatue(int32_t newMinLevel, Il2CppString* newActiveEffect, Il2CppString* newCanActivateEffect, Il2CppString* newCooldownEffect) {
		return ((T (*)(IStatueEntity*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newMinLevel, newActiveEffect, newCanActivateEffect, newCooldownEffect);
	}
	template <typename T = void> T RemoveStatue() {
		return ((T (*)(IStatueEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
