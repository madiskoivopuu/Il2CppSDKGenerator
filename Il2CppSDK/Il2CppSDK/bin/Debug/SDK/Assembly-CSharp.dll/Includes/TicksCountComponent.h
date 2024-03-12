#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TicksCountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TicksCountComponent"));
	}

	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
