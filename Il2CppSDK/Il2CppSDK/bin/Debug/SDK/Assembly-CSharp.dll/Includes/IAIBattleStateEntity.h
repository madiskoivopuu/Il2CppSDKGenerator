#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAIBattleStateEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAIBattleStateEntity"));
	}


	template <typename T = AIBattleStateComponent*> T get_aIBattleState() {
		return ((T (*)(IAIBattleStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAIBattleState() {
		return ((T (*)(IAIBattleStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAIBattleState(int32_t newPhaseIndex, int64_t newStartTime) {
		return ((T (*)(IAIBattleStateEntity*, int32_t, int64_t))(Il2CppBase() + 0x0))(this, newPhaseIndex, newStartTime);
	}
	template <typename T = void> T ReplaceAIBattleState(int32_t newPhaseIndex, int64_t newStartTime) {
		return ((T (*)(IAIBattleStateEntity*, int32_t, int64_t))(Il2CppBase() + 0x0))(this, newPhaseIndex, newStartTime);
	}
	template <typename T = void> T RemoveAIBattleState() {
		return ((T (*)(IAIBattleStateEntity*))(Il2CppBase() + 0x0))(this);
	}

};

