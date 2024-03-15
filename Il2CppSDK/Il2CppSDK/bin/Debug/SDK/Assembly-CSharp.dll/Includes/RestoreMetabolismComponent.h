#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RestoreMetabolismComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RestoreMetabolismComponent"));
	}

	template <typename R = float> R& Thirst() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Hunger() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(RestoreMetabolismComponent*, Il2CppObject*))(Il2CppBase() + 0x119D4A4))(this, target);
	}

};

