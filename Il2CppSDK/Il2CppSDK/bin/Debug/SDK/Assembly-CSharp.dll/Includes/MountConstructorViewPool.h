#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountConstructorViewPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountConstructorViewPool"));
	}

	template <typename T = uintptr_t> T& toggleGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = MountConstructorView*> T& prefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<MountConstructorView*>*> T& pool() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& blueprint() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Action1Il2CppString*>*> T& OnSelected() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = Il2CppString*> T get_Blueprint() {
		return ((T (*)(MountConstructorViewPool*))(Il2CppBase() + 0x1EAACC4))(this);
	}
	template <typename T = void> T add_OnSelected(Action1Il2CppString*>* value) {
		return ((T (*)(MountConstructorViewPool*, Action1Il2CppString*>*))(Il2CppBase() + 0x1EAACCC))(this, value);
	}
	template <typename T = void> T remove_OnSelected(Action1Il2CppString*>* value) {
		return ((T (*)(MountConstructorViewPool*, Action1Il2CppString*>*))(Il2CppBase() + 0x1EAAD6C))(this, value);
	}
	template <typename T = void> T Bind(Il2CppList<Data*>* data) {
		return ((T (*)(MountConstructorViewPool*, Il2CppList<Data*>*))(Il2CppBase() + 0x1EAAE0C))(this, data);
	}
	template <typename T = void> T OnSelect(Il2CppString* selected) {
		return ((T (*)(MountConstructorViewPool*, Il2CppString*))(Il2CppBase() + 0x1EAB0A4))(this, selected);
	}

};

