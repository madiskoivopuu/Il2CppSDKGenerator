#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAlvesWavesBadgesT2Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAlvesWavesBadgesT2Entity"));
	}


	template <typename R = AlvesWavesBadgesT2Component*> R get_alvesWavesBadgesT2() {
		return ((R (*)(IAlvesWavesBadgesT2Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT2() {
		return ((R (*)(IAlvesWavesBadgesT2Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT2(int32_t newCount) {
		return ((R (*)(IAlvesWavesBadgesT2Entity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT2(int32_t newCount) {
		return ((R (*)(IAlvesWavesBadgesT2Entity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT2() {
		return ((R (*)(IAlvesWavesBadgesT2Entity*))(Il2CppBase() + 0x0))(this);
	}

};

