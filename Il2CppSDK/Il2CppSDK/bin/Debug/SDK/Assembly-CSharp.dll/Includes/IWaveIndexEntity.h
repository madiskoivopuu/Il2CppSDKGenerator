#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWaveIndexEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWaveIndexEntity"));
	}


	template <typename T = WaveIndexComponent*> T get_waveIndex() {
		return ((T (*)(IWaveIndexEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasWaveIndex() {
		return ((T (*)(IWaveIndexEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddWaveIndex(int32_t newIndex, int32_t newWavesCount) {
		return ((T (*)(IWaveIndexEntity*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, newIndex, newWavesCount);
	}
	template <typename T = void> T ReplaceWaveIndex(int32_t newIndex, int32_t newWavesCount) {
		return ((T (*)(IWaveIndexEntity*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, newIndex, newWavesCount);
	}
	template <typename T = void> T RemoveWaveIndex() {
		return ((T (*)(IWaveIndexEntity*))(Il2CppBase() + 0x0))(this);
	}

};

