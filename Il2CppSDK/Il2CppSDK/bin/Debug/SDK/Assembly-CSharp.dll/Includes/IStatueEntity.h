#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStatueEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStatueEntity"));
	}


	template <typename R = StatueComponent*> R get_statue() {
		return ((R (*)(IStatueEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasStatue() {
		return ((R (*)(IStatueEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddStatue(int32_t newMinLevel, Il2CppString* newActiveEffect, Il2CppString* newCanActivateEffect, Il2CppString* newCooldownEffect) {
		return ((R (*)(IStatueEntity*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newMinLevel, newActiveEffect, newCanActivateEffect, newCooldownEffect);
	}
	template <typename R = void> R ReplaceStatue(int32_t newMinLevel, Il2CppString* newActiveEffect, Il2CppString* newCanActivateEffect, Il2CppString* newCooldownEffect) {
		return ((R (*)(IStatueEntity*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newMinLevel, newActiveEffect, newCanActivateEffect, newCooldownEffect);
	}
	template <typename R = void> R RemoveStatue() {
		return ((R (*)(IStatueEntity*))(Il2CppBase() + 0x0))(this);
	}

};

