#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOnEmptyWorldEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOnEmptyWorldEntity"));
	}


	template <typename T = uintptr_t> T get_onEmptyWorld() {
		return ((T (*)(IOnEmptyWorldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasOnEmptyWorld() {
		return ((T (*)(IOnEmptyWorldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddOnEmptyWorld(void* newActive, bool newRestore, bool newDestroy) {
		return ((T (*)(IOnEmptyWorldEntity*, void*, bool, bool))(Il2CppBase() + 0x0))(this, newActive, newRestore, newDestroy);
	}
	template <typename T = void> T ReplaceOnEmptyWorld(void* newActive, bool newRestore, bool newDestroy) {
		return ((T (*)(IOnEmptyWorldEntity*, void*, bool, bool))(Il2CppBase() + 0x0))(this, newActive, newRestore, newDestroy);
	}
	template <typename T = void> T RemoveOnEmptyWorld() {
		return ((T (*)(IOnEmptyWorldEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
