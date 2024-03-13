#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICraftBoostEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICraftBoostEntity"));
	}


	template <typename T = CraftBoostComponent*> T get_craftBoost() {
		return ((T (*)(ICraftBoostEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCraftBoost() {
		return ((T (*)(ICraftBoostEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCraftBoost(Il2CppList<ConditionBoost*>* newList) {
		return ((T (*)(ICraftBoostEntity*, Il2CppList<ConditionBoost*>*))(Il2CppBase() + 0x0))(this, newList);
	}
	template <typename T = void> T ReplaceCraftBoost(Il2CppList<ConditionBoost*>* newList) {
		return ((T (*)(ICraftBoostEntity*, Il2CppList<ConditionBoost*>*))(Il2CppBase() + 0x0))(this, newList);
	}
	template <typename T = void> T RemoveCraftBoost() {
		return ((T (*)(ICraftBoostEntity*))(Il2CppBase() + 0x0))(this);
	}

};

