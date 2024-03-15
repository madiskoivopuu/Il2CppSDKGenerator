#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RadiusComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RadiusComponent"));
	}

	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(RadiusComponent*, Il2CppObject*))(Il2CppBase() + 0x170D064))(this, targetObject);
	}

};

