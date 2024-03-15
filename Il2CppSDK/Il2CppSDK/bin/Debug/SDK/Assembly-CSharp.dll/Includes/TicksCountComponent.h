#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TicksCountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TicksCountComponent"));
	}

	template <typename R = int32_t> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

