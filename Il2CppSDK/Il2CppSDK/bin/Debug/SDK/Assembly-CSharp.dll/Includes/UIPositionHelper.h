#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIPositionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPositionHelper"));
	}

	template <typename R = bool> R& X2() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<DeviceUIVariant*>*> R& Variants() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Start() {
		return ((R (*)(UIPositionHelper*))(Il2CppBase() + 0x152F004))(this);
	}

};

