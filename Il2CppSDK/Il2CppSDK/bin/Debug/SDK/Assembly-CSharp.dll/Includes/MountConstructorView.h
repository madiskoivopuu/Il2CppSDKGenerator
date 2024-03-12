#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountConstructorView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountConstructorView"));
	}

	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& nameLabel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& onSelect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& blueprint() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = Il2CppString*> T get_Blueprint() {
		return ((T (*)(MountConstructorView*))(Il2CppBase() + 0x1EAAA20))(this);
	}
	template <typename T = void> T Bind(uintptr_t icon, Il2CppString* name, void* onSelect) {
		return ((T (*)(MountConstructorView*, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x1EAAA28))(this, icon, name, onSelect);
	}
	template <typename T = void> T OnSelect(bool x) {
		return ((T (*)(MountConstructorView*, bool))(Il2CppBase() + 0x1EAAC48))(this, x);
	}

};

}
