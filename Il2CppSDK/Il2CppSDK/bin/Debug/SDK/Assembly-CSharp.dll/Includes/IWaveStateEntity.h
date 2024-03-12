#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWaveStateEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWaveStateEntity"));
	}


	template <typename T = uintptr_t> T get_waveState() {
		return ((T (*)(IWaveStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasWaveState() {
		return ((T (*)(IWaveStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddWaveState(int32_t newCount, int32_t newTotalCount, int64_t newStartTime) {
		return ((T (*)(IWaveStateEntity*, int32_t, int32_t, int64_t))(Il2CppBase() + 0x0))(this, newCount, newTotalCount, newStartTime);
	}
	template <typename T = void> T ReplaceWaveState(int32_t newCount, int32_t newTotalCount, int64_t newStartTime) {
		return ((T (*)(IWaveStateEntity*, int32_t, int32_t, int64_t))(Il2CppBase() + 0x0))(this, newCount, newTotalCount, newStartTime);
	}
	template <typename T = void> T RemoveWaveState() {
		return ((T (*)(IWaveStateEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
