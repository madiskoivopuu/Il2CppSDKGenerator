#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep" 

class DeviceCopabalityLS: BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeviceCopabalityLS"));
	}

	template <typename T = uintptr_t> T& _deviceWarningWindow() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = uintptr_t> T Start() {
		return ((T (*)(DeviceCopabalityLS*))(Il2CppBase() + 0xEC2520))(this);
	}
	template <typename T = void> T CheckDeviceCopabality() {
		return ((T (*)(DeviceCopabalityLS*))(Il2CppBase() + 0xEC2598))(this);
	}

};

}
