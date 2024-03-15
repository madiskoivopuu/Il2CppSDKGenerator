#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DialogPopupView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogPopupView"));
	}

	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Text() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = TextImageMonoBehaviour*> R& Item() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& ButtonYes() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& ButtonNo() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& ButtonClose() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& ButtonYesCoinImage() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& ButtonYesCoinText() {
		return *(R*)((uintptr_t)this + 0x50);
	}


};

