#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmorComponent"));
	}

	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(ArmorComponent*, Il2CppObject*))(Il2CppBase() + 0x1A59128))(this, targetObject);
	}

};

