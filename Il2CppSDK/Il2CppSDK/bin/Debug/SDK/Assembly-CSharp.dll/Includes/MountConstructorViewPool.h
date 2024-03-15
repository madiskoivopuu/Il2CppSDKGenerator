#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountConstructorViewPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountConstructorViewPool"));
	}

	template <typename R = uintptr_t> R& toggleGroup() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = MountConstructorView*> R& prefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& root() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Il2CppList<MountConstructorView*>*& pool() {
		return *(Il2CppList<MountConstructorView*>**)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& blueprint() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Action1Il2CppString*>*& OnSelected() {
		return *(Action1Il2CppString*>**)((uintptr_t)this + 0x40);
	}

	template <typename R = Il2CppString*> R get_Blueprint() {
		return ((R (*)(MountConstructorViewPool*))(Il2CppBase() + 0x1EAACC4))(this);
	}
	template <typename R = void> R add_OnSelected(Action1Il2CppString*>* value) {
		return ((R (*)(MountConstructorViewPool*, Action1Il2CppString*>*))(Il2CppBase() + 0x1EAACCC))(this, value);
	}
	template <typename R = void> R remove_OnSelected(Action1Il2CppString*>* value) {
		return ((R (*)(MountConstructorViewPool*, Action1Il2CppString*>*))(Il2CppBase() + 0x1EAAD6C))(this, value);
	}
	template <typename R = void> R Bind(Il2CppList<Data*>* data) {
		return ((R (*)(MountConstructorViewPool*, Il2CppList<Data*>*))(Il2CppBase() + 0x1EAAE0C))(this, data);
	}
	template <typename R = void> R OnSelect(Il2CppString* selected) {
		return ((R (*)(MountConstructorViewPool*, Il2CppString*))(Il2CppBase() + 0x1EAB0A4))(this, selected);
	}

};

