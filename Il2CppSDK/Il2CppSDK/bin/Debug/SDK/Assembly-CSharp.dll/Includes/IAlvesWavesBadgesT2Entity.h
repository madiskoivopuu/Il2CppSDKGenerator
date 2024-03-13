#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAlvesWavesBadgesT2Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAlvesWavesBadgesT2Entity"));
	}


	template <typename T = AlvesWavesBadgesT2Component*> T get_alvesWavesBadgesT2() {
		return ((T (*)(IAlvesWavesBadgesT2Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT2() {
		return ((T (*)(IAlvesWavesBadgesT2Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT2(int32_t newCount) {
		return ((T (*)(IAlvesWavesBadgesT2Entity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT2(int32_t newCount) {
		return ((T (*)(IAlvesWavesBadgesT2Entity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT2() {
		return ((T (*)(IAlvesWavesBadgesT2Entity*))(Il2CppBase() + 0x0))(this);
	}

};

