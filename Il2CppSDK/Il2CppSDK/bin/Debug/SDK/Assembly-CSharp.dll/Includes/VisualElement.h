#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VisualElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VisualElement"));
	}

	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& SearchNotification() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = uintptr_t> R& BasicNotification() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& TimerContainer() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& TimerText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x28);
	}


};

