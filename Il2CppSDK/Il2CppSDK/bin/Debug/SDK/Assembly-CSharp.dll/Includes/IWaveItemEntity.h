#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWaveItemEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWaveItemEntity"));
	}


	template <typename R = WaveItemComponent*> R get_waveItem() {
		return ((R (*)(IWaveItemEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasWaveItem() {
		return ((R (*)(IWaveItemEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddWaveItem(Il2CppString* newEventName, int32_t newWaveIndex) {
		return ((R (*)(IWaveItemEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newEventName, newWaveIndex);
	}
	template <typename R = void> R ReplaceWaveItem(Il2CppString* newEventName, int32_t newWaveIndex) {
		return ((R (*)(IWaveItemEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newEventName, newWaveIndex);
	}
	template <typename R = void> R RemoveWaveItem() {
		return ((R (*)(IWaveItemEntity*))(Il2CppBase() + 0x0))(this);
	}

};

