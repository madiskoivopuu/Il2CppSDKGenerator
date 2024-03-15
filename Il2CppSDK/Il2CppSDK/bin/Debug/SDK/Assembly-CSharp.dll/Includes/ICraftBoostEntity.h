#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICraftBoostEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICraftBoostEntity"));
	}


	template <typename R = CraftBoostComponent*> R get_craftBoost() {
		return ((R (*)(ICraftBoostEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCraftBoost() {
		return ((R (*)(ICraftBoostEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCraftBoost(Il2CppList<ConditionBoost*>* newList) {
		return ((R (*)(ICraftBoostEntity*, Il2CppList<ConditionBoost*>*))(Il2CppBase() + 0x0))(this, newList);
	}
	template <typename R = void> R ReplaceCraftBoost(Il2CppList<ConditionBoost*>* newList) {
		return ((R (*)(ICraftBoostEntity*, Il2CppList<ConditionBoost*>*))(Il2CppBase() + 0x0))(this, newList);
	}
	template <typename R = void> R RemoveCraftBoost() {
		return ((R (*)(ICraftBoostEntity*))(Il2CppBase() + 0x0))(this);
	}

};

