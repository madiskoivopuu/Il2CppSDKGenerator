#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IToPlayerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IToPlayerEntity"));
	}


	template <typename R = ToPlayerComponent*> R get_toPlayer() {
		return ((R (*)(IToPlayerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasToPlayer() {
		return ((R (*)(IToPlayerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddToPlayer(int64_t newId) {
		return ((R (*)(IToPlayerEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceToPlayer(int64_t newId) {
		return ((R (*)(IToPlayerEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveToPlayer() {
		return ((R (*)(IToPlayerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

