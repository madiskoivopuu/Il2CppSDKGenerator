#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlacingView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlacingView"));
	}

	template <typename R = PlacingHint*> R& PlacingHint() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& ConfirmButton() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& RotateButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& CancelButton() {
		return *(R*)((uintptr_t)this + 0x30);
	}


};

