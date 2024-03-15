#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmorComponent"));
	}

	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ArmorComponent*, Il2CppObject*))(Il2CppBase() + 0x1A59128))(this, targetObject);
	}

};

