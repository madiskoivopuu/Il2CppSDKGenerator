#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrentRoofComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrentRoofComponent"));
	}

	template <typename R = int32_t> R& Index() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

