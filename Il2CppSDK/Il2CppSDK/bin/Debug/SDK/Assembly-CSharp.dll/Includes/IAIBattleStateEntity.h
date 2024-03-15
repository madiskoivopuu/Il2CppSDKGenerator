#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAIBattleStateEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAIBattleStateEntity"));
	}


	template <typename R = AIBattleStateComponent*> R get_aIBattleState() {
		return ((R (*)(IAIBattleStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAIBattleState() {
		return ((R (*)(IAIBattleStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAIBattleState(int32_t newPhaseIndex, int64_t newStartTime) {
		return ((R (*)(IAIBattleStateEntity*, int32_t, int64_t))(Il2CppBase() + 0x0))(this, newPhaseIndex, newStartTime);
	}
	template <typename R = void> R ReplaceAIBattleState(int32_t newPhaseIndex, int64_t newStartTime) {
		return ((R (*)(IAIBattleStateEntity*, int32_t, int64_t))(Il2CppBase() + 0x0))(this, newPhaseIndex, newStartTime);
	}
	template <typename R = void> R RemoveAIBattleState() {
		return ((R (*)(IAIBattleStateEntity*))(Il2CppBase() + 0x0))(this);
	}

};

