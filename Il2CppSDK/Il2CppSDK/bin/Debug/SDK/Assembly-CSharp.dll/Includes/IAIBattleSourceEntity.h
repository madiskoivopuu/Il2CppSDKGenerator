#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAIBattleSourceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAIBattleSourceEntity"));
	}


	template <typename R = AIBattleSourceComponent*> R get_aIBattleSource() {
		return ((R (*)(IAIBattleSourceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAIBattleSource() {
		return ((R (*)(IAIBattleSourceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAIBattleSource(int32_t newId) {
		return ((R (*)(IAIBattleSourceEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceAIBattleSource(int32_t newId) {
		return ((R (*)(IAIBattleSourceEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveAIBattleSource() {
		return ((R (*)(IAIBattleSourceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

