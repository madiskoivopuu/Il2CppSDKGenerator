#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAlvesWavesBadgesT1Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAlvesWavesBadgesT1Entity"));
	}


	template <typename R = AlvesWavesBadgesT1Component*> R get_alvesWavesBadgesT1() {
		return ((R (*)(IAlvesWavesBadgesT1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT1() {
		return ((R (*)(IAlvesWavesBadgesT1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT1(int32_t newCount) {
		return ((R (*)(IAlvesWavesBadgesT1Entity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT1(int32_t newCount) {
		return ((R (*)(IAlvesWavesBadgesT1Entity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT1() {
		return ((R (*)(IAlvesWavesBadgesT1Entity*))(Il2CppBase() + 0x0))(this);
	}

};

