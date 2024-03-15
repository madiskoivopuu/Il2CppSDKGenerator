#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeviceVariant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeviceVariant"));
	}

	template <typename R = OurDeviceGeneration*> R& iOSDevice() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& AspectRatio() {
		return *(R*)((uintptr_t)this + 0x14);
	}


};

