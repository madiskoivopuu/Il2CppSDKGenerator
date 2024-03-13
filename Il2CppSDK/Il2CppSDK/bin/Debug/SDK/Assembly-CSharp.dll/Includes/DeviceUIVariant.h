#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeviceUIVariant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeviceUIVariant"));
	}

	template <typename T = OurDeviceGeneration*> T& iOSDevice() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& XDelta() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

