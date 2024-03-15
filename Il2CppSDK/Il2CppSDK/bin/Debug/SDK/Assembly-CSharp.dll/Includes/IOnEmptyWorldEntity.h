#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOnEmptyWorldEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOnEmptyWorldEntity"));
	}


	template <typename R = OnEmptyWorldComponent*> R get_onEmptyWorld() {
		return ((R (*)(IOnEmptyWorldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasOnEmptyWorld() {
		return ((R (*)(IOnEmptyWorldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddOnEmptyWorld(Nullable1bool>* newActive, bool newRestore, bool newDestroy) {
		return ((R (*)(IOnEmptyWorldEntity*, Nullable1bool>*, bool, bool))(Il2CppBase() + 0x0))(this, newActive, newRestore, newDestroy);
	}
	template <typename R = void> R ReplaceOnEmptyWorld(Nullable1bool>* newActive, bool newRestore, bool newDestroy) {
		return ((R (*)(IOnEmptyWorldEntity*, Nullable1bool>*, bool, bool))(Il2CppBase() + 0x0))(this, newActive, newRestore, newDestroy);
	}
	template <typename R = void> R RemoveOnEmptyWorld() {
		return ((R (*)(IOnEmptyWorldEntity*))(Il2CppBase() + 0x0))(this);
	}

};

