#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWaveItemEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWaveItemEntity"));
	}


	template <typename T = uintptr_t> T get_waveItem() {
		return ((T (*)(IWaveItemEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasWaveItem() {
		return ((T (*)(IWaveItemEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddWaveItem(Il2CppString* newEventName, int32_t newWaveIndex) {
		return ((T (*)(IWaveItemEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newEventName, newWaveIndex);
	}
	template <typename T = void> T ReplaceWaveItem(Il2CppString* newEventName, int32_t newWaveIndex) {
		return ((T (*)(IWaveItemEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newEventName, newWaveIndex);
	}
	template <typename T = void> T RemoveWaveItem() {
		return ((T (*)(IWaveItemEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
