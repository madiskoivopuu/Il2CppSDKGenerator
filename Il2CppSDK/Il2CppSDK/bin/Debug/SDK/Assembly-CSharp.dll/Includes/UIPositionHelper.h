#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIPositionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPositionHelper"));
	}

	template <typename T = bool> T& X2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Variants() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIPositionHelper*))(Il2CppBase() + 0x152F004))(this);
	}

};

