#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFromPlayerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFromPlayerEntity"));
	}


	template <typename T = uintptr_t> T get_fromPlayer() {
		return ((T (*)(IFromPlayerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasFromPlayer() {
		return ((T (*)(IFromPlayerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddFromPlayer(int64_t newId) {
		return ((T (*)(IFromPlayerEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceFromPlayer(int64_t newId) {
		return ((T (*)(IFromPlayerEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveFromPlayer() {
		return ((T (*)(IFromPlayerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
