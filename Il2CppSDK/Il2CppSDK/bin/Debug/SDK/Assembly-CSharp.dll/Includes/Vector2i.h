#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Vector2i
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Vector2i"));
	}

	template <typename R = int32_t> R& X() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Y() {
		return *(R*)((uintptr_t)this + 0x4);
	}


};

