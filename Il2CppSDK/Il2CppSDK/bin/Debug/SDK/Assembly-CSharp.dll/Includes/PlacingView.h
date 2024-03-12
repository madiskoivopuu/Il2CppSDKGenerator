#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlacingView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlacingView"));
	}

	template <typename T = uintptr_t> T& PlacingHint() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ConfirmButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& RotateButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& CancelButton() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}
