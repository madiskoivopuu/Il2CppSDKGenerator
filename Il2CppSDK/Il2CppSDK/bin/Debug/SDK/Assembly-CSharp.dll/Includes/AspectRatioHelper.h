#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AspectRatioHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AspectRatioHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Variants() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(AspectRatioHelper*))(Il2CppBase() + 0x1A592B8))(this);
	}

};

