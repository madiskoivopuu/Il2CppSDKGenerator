#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFromPlayerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFromPlayerEntity"));
	}


	template <typename R = FromPlayerComponent*> R get_fromPlayer() {
		return ((R (*)(IFromPlayerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasFromPlayer() {
		return ((R (*)(IFromPlayerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddFromPlayer(int64_t newId) {
		return ((R (*)(IFromPlayerEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceFromPlayer(int64_t newId) {
		return ((R (*)(IFromPlayerEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveFromPlayer() {
		return ((R (*)(IFromPlayerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

