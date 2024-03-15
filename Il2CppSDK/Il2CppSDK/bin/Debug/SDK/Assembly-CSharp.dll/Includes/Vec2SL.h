#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Vec2SL
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Vec2SL"));
	}

	template <typename R = float> R& X() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& Y() {
		return *(R*)((uintptr_t)this + 0x4);
	}


};

