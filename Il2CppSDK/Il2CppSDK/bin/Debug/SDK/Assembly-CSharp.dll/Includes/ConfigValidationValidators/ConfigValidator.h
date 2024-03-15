#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ValidateAttribute.h" 
namespace ConfigValidationValidators {

class ConfigValidator : public ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "ConfigValidator"));
	}

	template <typename R = ConfigType*> R& ConfigType() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = ConfigType*> R get_ConfigType() {
		return ((R (*)(ConfigValidator*))(Il2CppBase() + 0x15E3518))(this);
	}
	template <typename R = void> R set_ConfigType(ConfigType* value) {
		return ((R (*)(ConfigValidator*, ConfigType*))(Il2CppBase() + 0x15E3520))(this, value);
	}

};

}
