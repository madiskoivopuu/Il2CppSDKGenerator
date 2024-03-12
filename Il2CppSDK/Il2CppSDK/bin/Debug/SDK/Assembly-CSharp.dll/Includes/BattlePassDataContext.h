#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext`1" 

class BattlePassDataContext: DataContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassDataContext"));
	}

	template <typename T = Il2CppString*> static T& WithType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& _showInHudBattlePasses() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(BattlePassDataContext*))(Il2CppBase() + 0x16750C0))(this);
	}
	template <typename T = uintptr_t> T GetEntityWithCurrencyType(uintptr_t type) {
		return ((T (*)(BattlePassDataContext*, uintptr_t))(Il2CppBase() + 0x1675440))(this, type);
	}
	template <typename T = uintptr_t> T GetActiveShowInHudBattlePasses(uintptr_t world) {
		return ((T (*)(BattlePassDataContext*, uintptr_t))(Il2CppBase() + 0x167551C))(this, world);
	}

};

}
