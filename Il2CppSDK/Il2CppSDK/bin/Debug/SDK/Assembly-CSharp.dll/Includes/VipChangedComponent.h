#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipChangedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipChangedComponent"));
	}

	template <typename R = VipBonusType> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

