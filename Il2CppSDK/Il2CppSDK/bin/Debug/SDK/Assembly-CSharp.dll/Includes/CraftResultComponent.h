#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftResultComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftResultComponent"));
	}

	template <typename R = Il2CppString*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

