#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DistrictCameraHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DistrictCameraHelper"));
	}

	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = uintptr_t> R get_Animator() {
		return ((R (*)(DistrictCameraHelper*))(Il2CppBase() + 0x1302910))(this);
	}

};

