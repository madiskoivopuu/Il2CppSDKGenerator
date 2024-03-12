#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep" 

class LicenseLS: BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LicenseLS"));
	}

	template <typename T = uintptr_t> T& _licenseWindow() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = uintptr_t> T Start() {
		return ((T (*)(LicenseLS*))(Il2CppBase() + 0x142BF24))(this);
	}
	template <typename T = void> T ShowLicense() {
		return ((T (*)(LicenseLS*))(Il2CppBase() + 0x142BF9C))(this);
	}

};

}
