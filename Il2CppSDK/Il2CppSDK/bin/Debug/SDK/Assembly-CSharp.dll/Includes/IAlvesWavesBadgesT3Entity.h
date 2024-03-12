#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAlvesWavesBadgesT3Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAlvesWavesBadgesT3Entity"));
	}


	template <typename T = uintptr_t> T get_alvesWavesBadgesT3() {
		return ((T (*)(IAlvesWavesBadgesT3Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT3() {
		return ((T (*)(IAlvesWavesBadgesT3Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT3(int32_t newCount) {
		return ((T (*)(IAlvesWavesBadgesT3Entity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT3(int32_t newCount) {
		return ((T (*)(IAlvesWavesBadgesT3Entity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT3() {
		return ((T (*)(IAlvesWavesBadgesT3Entity*))(Il2CppBase() + 0x0))(this);
	}

};

}
