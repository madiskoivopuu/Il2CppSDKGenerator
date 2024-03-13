#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAIBattleSourceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAIBattleSourceEntity"));
	}


	template <typename T = AIBattleSourceComponent*> T get_aIBattleSource() {
		return ((T (*)(IAIBattleSourceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAIBattleSource() {
		return ((T (*)(IAIBattleSourceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAIBattleSource(int32_t newId) {
		return ((T (*)(IAIBattleSourceEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceAIBattleSource(int32_t newId) {
		return ((T (*)(IAIBattleSourceEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveAIBattleSource() {
		return ((T (*)(IAIBattleSourceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

