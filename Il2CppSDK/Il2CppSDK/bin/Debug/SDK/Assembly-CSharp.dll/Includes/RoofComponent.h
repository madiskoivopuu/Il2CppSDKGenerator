#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoofComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoofComponent"));
	}

	template <typename R = int32_t> R& Index() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

