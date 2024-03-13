#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotateToTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotateToTargetComponent"));
	}

	template <typename T = RotateToTargetType*> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(RotateToTargetComponent*, Il2CppObject*))(Il2CppBase() + 0x11A4DD8))(this, target);
	}

};

