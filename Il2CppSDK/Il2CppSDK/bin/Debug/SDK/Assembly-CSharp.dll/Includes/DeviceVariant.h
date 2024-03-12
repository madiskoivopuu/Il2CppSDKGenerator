#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeviceVariant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeviceVariant"));
	}

	template <typename T = uintptr_t> T& iOSDevice() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& AspectRatio() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
