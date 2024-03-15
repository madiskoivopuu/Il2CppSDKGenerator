#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AspectRatioHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AspectRatioHelper"));
	}

	template <typename R = Il2CppArray<DeviceVariant*>*> R& Variants() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Start() {
		return ((R (*)(AspectRatioHelper*))(Il2CppBase() + 0x1A592B8))(this);
	}

};

