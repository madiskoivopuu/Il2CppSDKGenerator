#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIFXScale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIFXScale"));
	}

	template <typename R = uintptr_t> R& effectSize() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& effectRect() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(UIFXScale*))(Il2CppBase() + 0x102F704))(this);
	}

};

