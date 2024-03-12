#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoofComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoofComponent"));
	}

	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
