#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAlvesWavesBadgesT3Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAlvesWavesBadgesT3Entity"));
	}


	template <typename R = AlvesWavesBadgesT3Component*> R get_alvesWavesBadgesT3() {
		return ((R (*)(IAlvesWavesBadgesT3Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT3() {
		return ((R (*)(IAlvesWavesBadgesT3Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT3(int32_t newCount) {
		return ((R (*)(IAlvesWavesBadgesT3Entity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT3(int32_t newCount) {
		return ((R (*)(IAlvesWavesBadgesT3Entity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT3() {
		return ((R (*)(IAlvesWavesBadgesT3Entity*))(Il2CppBase() + 0x0))(this);
	}

};

