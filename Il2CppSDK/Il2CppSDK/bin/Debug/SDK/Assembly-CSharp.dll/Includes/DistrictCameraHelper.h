#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DistrictCameraHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DistrictCameraHelper"));
	}

	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Animator() {
		return ((T (*)(DistrictCameraHelper*))(Il2CppBase() + 0x1302910))(this);
	}

};

