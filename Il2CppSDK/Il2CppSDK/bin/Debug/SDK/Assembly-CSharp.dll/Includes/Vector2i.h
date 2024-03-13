#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Vector2i
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Vector2i"));
	}

	template <typename T = int32_t> T& X() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Y() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

