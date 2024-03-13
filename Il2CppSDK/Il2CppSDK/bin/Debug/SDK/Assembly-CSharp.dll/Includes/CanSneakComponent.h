#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CanSneakComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CanSneakComponent"));
	}

	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(CanSneakComponent*, Il2CppObject*))(Il2CppBase() + 0x15B61AC))(this, target);
	}

};

