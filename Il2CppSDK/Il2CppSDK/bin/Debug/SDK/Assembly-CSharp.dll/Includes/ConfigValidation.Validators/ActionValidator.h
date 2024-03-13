#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ConfigValidation.Base/ValidateAttribute.h" 
namespace ConfigValidationValidators {

class ActionValidator : public ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "ActionValidator"));
	}

	template <typename T = bool> T& Tag() {
		return *(T*)((uintptr_t)this + 0x19);
	}

	template <typename T = bool> T get_Tag() {
		return ((T (*)(ActionValidator*))(Il2CppBase() + 0x18ACF38))(this);
	}
	template <typename T = void> T set_Tag(bool value) {
		return ((T (*)(ActionValidator*, bool))(Il2CppBase() + 0x18ACF40))(this, value);
	}

};

}
