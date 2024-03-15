#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnGroundHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnGroundHelper"));
	}

	template <typename R = float> R& _yOffset() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R LateUpdate() {
		return ((R (*)(OnGroundHelper*))(Il2CppBase() + 0x11DC8D0))(this);
	}

};

