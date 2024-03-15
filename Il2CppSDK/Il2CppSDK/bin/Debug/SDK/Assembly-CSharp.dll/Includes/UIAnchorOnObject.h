#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIAnchorOnObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIAnchorOnObject"));
	}

	template <typename R = uintptr_t> R& target() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& targetViewport() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _rectTransform() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(UIAnchorOnObject*))(Il2CppBase() + 0x102E670))(this);
	}
	template <typename R = void> R LateUpdate() {
		return ((R (*)(UIAnchorOnObject*))(Il2CppBase() + 0x102E6CC))(this);
	}

};

