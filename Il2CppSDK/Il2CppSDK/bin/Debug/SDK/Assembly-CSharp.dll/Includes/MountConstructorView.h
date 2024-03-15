#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountConstructorView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountConstructorView"));
	}

	template <typename R = uintptr_t> R& icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& nameLabel() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Action1Il2CppString*>*& onSelect() {
		return *(Action1Il2CppString*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& blueprint() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = Il2CppString*> R get_Blueprint() {
		return ((R (*)(MountConstructorView*))(Il2CppBase() + 0x1EAAA20))(this);
	}
	template <typename R = void> R Bind(Icon* icon, Il2CppString* name, Action1Il2CppString*>* onSelect) {
		return ((R (*)(MountConstructorView*, Icon*, Il2CppString*, Action1Il2CppString*>*))(Il2CppBase() + 0x1EAAA28))(this, icon, name, onSelect);
	}
	template <typename R = void> R OnSelect(bool x) {
		return ((R (*)(MountConstructorView*, bool))(Il2CppBase() + 0x1EAAC48))(this, x);
	}

};

