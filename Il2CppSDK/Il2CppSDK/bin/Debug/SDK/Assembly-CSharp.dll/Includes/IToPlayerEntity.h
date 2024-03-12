#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IToPlayerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IToPlayerEntity"));
	}


	template <typename T = uintptr_t> T get_toPlayer() {
		return ((T (*)(IToPlayerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasToPlayer() {
		return ((T (*)(IToPlayerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddToPlayer(int64_t newId) {
		return ((T (*)(IToPlayerEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceToPlayer(int64_t newId) {
		return ((T (*)(IToPlayerEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveToPlayer() {
		return ((T (*)(IToPlayerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
