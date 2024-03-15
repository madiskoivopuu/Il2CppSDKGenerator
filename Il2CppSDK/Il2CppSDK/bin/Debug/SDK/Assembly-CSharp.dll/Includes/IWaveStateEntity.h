#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWaveStateEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWaveStateEntity"));
	}


	template <typename R = WaveStateComponent*> R get_waveState() {
		return ((R (*)(IWaveStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasWaveState() {
		return ((R (*)(IWaveStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddWaveState(int32_t newCount, int32_t newTotalCount, int64_t newStartTime) {
		return ((R (*)(IWaveStateEntity*, int32_t, int32_t, int64_t))(Il2CppBase() + 0x0))(this, newCount, newTotalCount, newStartTime);
	}
	template <typename R = void> R ReplaceWaveState(int32_t newCount, int32_t newTotalCount, int64_t newStartTime) {
		return ((R (*)(IWaveStateEntity*, int32_t, int32_t, int64_t))(Il2CppBase() + 0x0))(this, newCount, newTotalCount, newStartTime);
	}
	template <typename R = void> R RemoveWaveState() {
		return ((R (*)(IWaveStateEntity*))(Il2CppBase() + 0x0))(this);
	}

};

