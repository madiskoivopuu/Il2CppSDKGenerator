#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrentRoofComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrentRoofComponent"));
	}

	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

