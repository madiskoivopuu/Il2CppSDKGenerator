#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RestoreMetabolismComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RestoreMetabolismComponent"));
	}

	template <typename T = float> T& Thirst() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Hunger() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(RestoreMetabolismComponent*, uintptr_t))(Il2CppBase() + 0x119D4A4))(this, target);
	}

};

}
