#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SelectionView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectionView"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _renderers() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _normalColor() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _selectionColor() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Select() {
		return ((R (*)(SelectionView*))(Il2CppBase() + 0x13625EC))(this);
	}
	template <typename R = void> R Deselect() {
		return ((R (*)(SelectionView*))(Il2CppBase() + 0x13625F0))(this);
	}

};

