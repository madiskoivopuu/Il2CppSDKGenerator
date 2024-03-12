#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIAnchorOnObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIAnchorOnObject"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& targetViewport() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _rectTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIAnchorOnObject*))(Il2CppBase() + 0x102E670))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(UIAnchorOnObject*))(Il2CppBase() + 0x102E6CC))(this);
	}

};

}
