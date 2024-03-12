#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAlvesWavesBadgesT1Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAlvesWavesBadgesT1Entity"));
	}


	template <typename T = uintptr_t> T get_alvesWavesBadgesT1() {
		return ((T (*)(IAlvesWavesBadgesT1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT1() {
		return ((T (*)(IAlvesWavesBadgesT1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT1(int32_t newCount) {
		return ((T (*)(IAlvesWavesBadgesT1Entity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT1(int32_t newCount) {
		return ((T (*)(IAlvesWavesBadgesT1Entity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT1() {
		return ((T (*)(IAlvesWavesBadgesT1Entity*))(Il2CppBase() + 0x0))(this);
	}

};

}
