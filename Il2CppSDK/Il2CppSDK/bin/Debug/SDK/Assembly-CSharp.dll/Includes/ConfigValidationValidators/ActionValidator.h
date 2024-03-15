#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ValidateAttribute.h" 
namespace ConfigValidationValidators {

class ActionValidator : public ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "ActionValidator"));
	}

	template <typename R = bool> R& Tag() {
		return *(R*)((uintptr_t)this + 0x19);
	}

	template <typename R = bool> R get_Tag() {
		return ((R (*)(ActionValidator*))(Il2CppBase() + 0x18ACF38))(this);
	}
	template <typename R = void> R set_Tag(bool value) {
		return ((R (*)(ActionValidator*, bool))(Il2CppBase() + 0x18ACF40))(this, value);
	}

};

}
