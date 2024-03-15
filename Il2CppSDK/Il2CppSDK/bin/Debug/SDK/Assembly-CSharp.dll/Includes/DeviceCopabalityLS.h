#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class DeviceCopabalityLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeviceCopabalityLS"));
	}

	template <typename R = DeviceWarningWindow*> R& _deviceWarningWindow() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = uintptr_t> R Start() {
		return ((R (*)(DeviceCopabalityLS*))(Il2CppBase() + 0xEC2520))(this);
	}
	template <typename R = void> R CheckDeviceCopabality() {
		return ((R (*)(DeviceCopabalityLS*))(Il2CppBase() + 0xEC2598))(this);
	}

};

