#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyPlayerKillEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyPlayerKillEntity"));
	}


	template <typename T = uintptr_t> T get_applyPlayerKill() {
		return ((T (*)(IApplyPlayerKillEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasApplyPlayerKill() {
		return ((T (*)(IApplyPlayerKillEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddApplyPlayerKill(bool newValue) {
		return ((T (*)(IApplyPlayerKillEntity*, bool))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceApplyPlayerKill(bool newValue) {
		return ((T (*)(IApplyPlayerKillEntity*, bool))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveApplyPlayerKill() {
		return ((T (*)(IApplyPlayerKillEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
