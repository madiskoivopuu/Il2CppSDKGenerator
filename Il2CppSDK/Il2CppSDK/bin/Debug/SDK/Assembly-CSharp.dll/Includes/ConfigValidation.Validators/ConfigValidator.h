#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ConfigValidation.Base/ValidateAttribute" 
namespace ConfigValidationValidators {

class ConfigValidator: ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "ConfigValidator"));
	}

	template <typename T = uintptr_t> T& ConfigType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T get_ConfigType() {
		return ((T (*)(ConfigValidator*))(Il2CppBase() + 0x15E3518))(this);
	}
	template <typename T = void> T set_ConfigType(uintptr_t value) {
		return ((T (*)(ConfigValidator*, uintptr_t))(Il2CppBase() + 0x15E3520))(this, value);
	}

};

}
