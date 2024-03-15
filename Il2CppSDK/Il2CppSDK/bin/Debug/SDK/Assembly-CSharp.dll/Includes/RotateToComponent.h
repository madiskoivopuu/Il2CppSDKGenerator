#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotateToComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotateToComponent"));
	}

	template <typename R = float> R& Angle() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(RotateToComponent*, Il2CppObject*))(Il2CppBase() + 0x11A4D3C))(this, targetObject);
	}

};

