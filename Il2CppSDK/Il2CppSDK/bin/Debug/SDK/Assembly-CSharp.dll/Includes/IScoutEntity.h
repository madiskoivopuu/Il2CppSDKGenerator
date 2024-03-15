#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IScoutEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IScoutEntity"));
	}


	template <typename R = ScoutComponent*> R get_scout() {
		return ((R (*)(IScoutEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasScout() {
		return ((R (*)(IScoutEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddScout(int32_t newMinLevel, float newTax, Il2CppArray<Item*>* newItems, Il2CppString* newCanActivateEffect, Il2CppString* newActiveEffect, Il2CppString* newCooldownEffect) {
		return ((R (*)(IScoutEntity*, int32_t, float, Il2CppArray<Item*>*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newMinLevel, newTax, newItems, newCanActivateEffect, newActiveEffect, newCooldownEffect);
	}
	template <typename R = void> R ReplaceScout(int32_t newMinLevel, float newTax, Il2CppArray<Item*>* newItems, Il2CppString* newCanActivateEffect, Il2CppString* newActiveEffect, Il2CppString* newCooldownEffect) {
		return ((R (*)(IScoutEntity*, int32_t, float, Il2CppArray<Item*>*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newMinLevel, newTax, newItems, newCanActivateEffect, newActiveEffect, newCooldownEffect);
	}
	template <typename R = void> R RemoveScout() {
		return ((R (*)(IScoutEntity*))(Il2CppBase() + 0x0))(this);
	}

};

