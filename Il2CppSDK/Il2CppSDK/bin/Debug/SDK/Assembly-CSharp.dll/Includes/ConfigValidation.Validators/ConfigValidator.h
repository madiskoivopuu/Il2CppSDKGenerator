#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ConfigValidation.Base/ValidateAttribute.h" 
namespace ConfigValidationValidators {

class ConfigValidator : public ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "ConfigValidator"));
	}

	template <typename T = ConfigType*> T& ConfigType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = ConfigType*> T get_ConfigType() {
		return ((T (*)(ConfigValidator*))(Il2CppBase() + 0x15E3518))(this);
	}
	template <typename T = void> T set_ConfigType(ConfigType* value) {
		return ((T (*)(ConfigValidator*, ConfigType*))(Il2CppBase() + 0x15E3520))(this, value);
	}

};

}
