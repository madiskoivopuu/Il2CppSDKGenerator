#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class LicenseLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LicenseLS"));
	}

	template <typename R = LicenseWindow*> R& _licenseWindow() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = uintptr_t> R Start() {
		return ((R (*)(LicenseLS*))(Il2CppBase() + 0x142BF24))(this);
	}
	template <typename R = void> R ShowLicense() {
		return ((R (*)(LicenseLS*))(Il2CppBase() + 0x142BF9C))(this);
	}

};

