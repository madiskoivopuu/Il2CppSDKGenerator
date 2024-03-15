#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CoverRadiusComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoverRadiusComponent"));
	}

	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(CoverRadiusComponent*, Il2CppObject*))(Il2CppBase() + 0x1341134))(this, targetObject);
	}

};

