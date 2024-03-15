#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyPlayerKillEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyPlayerKillEntity"));
	}


	template <typename R = ApplyPlayerKillComponent*> R get_applyPlayerKill() {
		return ((R (*)(IApplyPlayerKillEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyPlayerKill() {
		return ((R (*)(IApplyPlayerKillEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyPlayerKill(bool newValue) {
		return ((R (*)(IApplyPlayerKillEntity*, bool))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceApplyPlayerKill(bool newValue) {
		return ((R (*)(IApplyPlayerKillEntity*, bool))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveApplyPlayerKill() {
		return ((R (*)(IApplyPlayerKillEntity*))(Il2CppBase() + 0x0))(this);
	}

};

