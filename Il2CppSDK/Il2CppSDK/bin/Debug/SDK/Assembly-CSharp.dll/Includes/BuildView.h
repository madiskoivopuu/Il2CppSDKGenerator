#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildView"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = BuildTypeButtonView*> R& BuildTypeButton() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = BuildTypeButtonView*> R& FurnitureButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& DebugButton() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& ItemContainer() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& NoFurnitureText() {
		return *(R*)((uintptr_t)this + 0x40);
	}


};

