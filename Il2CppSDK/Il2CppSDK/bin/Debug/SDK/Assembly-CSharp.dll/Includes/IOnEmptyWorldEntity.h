#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOnEmptyWorldEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOnEmptyWorldEntity"));
	}


	template <typename T = OnEmptyWorldComponent*> T get_onEmptyWorld() {
		return ((T (*)(IOnEmptyWorldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasOnEmptyWorld() {
		return ((T (*)(IOnEmptyWorldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddOnEmptyWorld(Nullable1bool>* newActive, bool newRestore, bool newDestroy) {
		return ((T (*)(IOnEmptyWorldEntity*, Nullable1bool>*, bool, bool))(Il2CppBase() + 0x0))(this, newActive, newRestore, newDestroy);
	}
	template <typename T = void> T ReplaceOnEmptyWorld(Nullable1bool>* newActive, bool newRestore, bool newDestroy) {
		return ((T (*)(IOnEmptyWorldEntity*, Nullable1bool>*, bool, bool))(Il2CppBase() + 0x0))(this, newActive, newRestore, newDestroy);
	}
	template <typename T = void> T RemoveOnEmptyWorld() {
		return ((T (*)(IOnEmptyWorldEntity*))(Il2CppBase() + 0x0))(this);
	}

};

