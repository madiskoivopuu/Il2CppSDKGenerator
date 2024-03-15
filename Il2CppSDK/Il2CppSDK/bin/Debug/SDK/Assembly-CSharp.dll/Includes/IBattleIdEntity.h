#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBattleIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBattleIdEntity"));
	}


	template <typename R = BattleIdComponent*> R get_battleId() {
		return ((R (*)(IBattleIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBattleId() {
		return ((R (*)(IBattleIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBattleId(int32_t newId) {
		return ((R (*)(IBattleIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceBattleId(int32_t newId) {
		return ((R (*)(IBattleIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveBattleId() {
		return ((R (*)(IBattleIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

