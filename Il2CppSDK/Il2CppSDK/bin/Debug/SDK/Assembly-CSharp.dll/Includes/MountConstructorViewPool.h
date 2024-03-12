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
	template <typename T = uintptr_t> T& prefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& pool() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& blueprint() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& OnSelected() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = Il2CppString*> T get_Blueprint() {
		return ((T (*)(MountConstructorViewPool*))(Il2CppBase() + 0x1EAACC4))(this);
	}
	template <typename T = void> T add_OnSelected(void* value) {
		return ((T (*)(MountConstructorViewPool*, void*))(Il2CppBase() + 0x1EAACCC))(this, value);
	}
	template <typename T = void> T remove_OnSelected(void* value) {
		return ((T (*)(MountConstructorViewPool*, void*))(Il2CppBase() + 0x1EAAD6C))(this, value);
	}
	template <typename T = void> T Bind(Il2CppList<uintptr_t>* data) {
		return ((T (*)(MountConstructorViewPool*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1EAAE0C))(this, data);
	}
	template <typename T = void> T OnSelect(Il2CppString* selected) {
		return ((T (*)(MountConstructorViewPool*, Il2CppString*))(Il2CppBase() + 0x1EAB0A4))(this, selected);
	}

};

}
