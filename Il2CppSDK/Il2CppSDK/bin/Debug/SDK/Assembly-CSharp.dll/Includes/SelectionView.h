#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SelectionView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectionView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _renderers() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _normalColor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _selectionColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Select() {
		return ((T (*)(SelectionView*))(Il2CppBase() + 0x13625EC))(this);
	}
	template <typename T = void> T Deselect() {
		return ((T (*)(SelectionView*))(Il2CppBase() + 0x13625F0))(this);
	}

};

}
