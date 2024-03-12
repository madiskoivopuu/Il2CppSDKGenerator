#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBattleIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBattleIdEntity"));
	}


	template <typename T = uintptr_t> T get_battleId() {
		return ((T (*)(IBattleIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBattleId() {
		return ((T (*)(IBattleIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBattleId(int32_t newId) {
		return ((T (*)(IBattleIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceBattleId(int32_t newId) {
		return ((T (*)(IBattleIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveBattleId() {
		return ((T (*)(IBattleIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
