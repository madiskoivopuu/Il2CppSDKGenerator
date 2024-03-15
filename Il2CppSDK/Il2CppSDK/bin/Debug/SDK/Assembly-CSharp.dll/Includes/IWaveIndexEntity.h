#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWaveIndexEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWaveIndexEntity"));
	}


	template <typename R = WaveIndexComponent*> R get_waveIndex() {
		return ((R (*)(IWaveIndexEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasWaveIndex() {
		return ((R (*)(IWaveIndexEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddWaveIndex(int32_t newIndex, int32_t newWavesCount) {
		return ((R (*)(IWaveIndexEntity*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, newIndex, newWavesCount);
	}
	template <typename R = void> R ReplaceWaveIndex(int32_t newIndex, int32_t newWavesCount) {
		return ((R (*)(IWaveIndexEntity*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, newIndex, newWavesCount);
	}
	template <typename R = void> R RemoveWaveIndex() {
		return ((R (*)(IWaveIndexEntity*))(Il2CppBase() + 0x0))(this);
	}

};

