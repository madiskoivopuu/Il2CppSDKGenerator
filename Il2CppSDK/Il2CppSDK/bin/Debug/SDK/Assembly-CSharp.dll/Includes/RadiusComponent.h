#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RadiusComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RadiusComponent"));
	}

	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(RadiusComponent*, Il2CppObject*))(Il2CppBase() + 0x170D064))(this, targetObject);
	}

};

