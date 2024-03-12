#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IScoutEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IScoutEntity"));
	}


	template <typename T = uintptr_t> T get_scout() {
		return ((T (*)(IScoutEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasScout() {
		return ((T (*)(IScoutEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddScout(int32_t newMinLevel, float newTax, Il2CppArray<uintptr_t>* newItems, Il2CppString* newCanActivateEffect, Il2CppString* newActiveEffect, Il2CppString* newCooldownEffect) {
		return ((T (*)(IScoutEntity*, int32_t, float, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newMinLevel, newTax, newItems, newCanActivateEffect, newActiveEffect, newCooldownEffect);
	}
	template <typename T = void> T ReplaceScout(int32_t newMinLevel, float newTax, Il2CppArray<uintptr_t>* newItems, Il2CppString* newCanActivateEffect, Il2CppString* newActiveEffect, Il2CppString* newCooldownEffect) {
		return ((T (*)(IScoutEntity*, int32_t, float, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newMinLevel, newTax, newItems, newCanActivateEffect, newActiveEffect, newCooldownEffect);
	}
	template <typename T = void> T RemoveScout() {
		return ((T (*)(IScoutEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
