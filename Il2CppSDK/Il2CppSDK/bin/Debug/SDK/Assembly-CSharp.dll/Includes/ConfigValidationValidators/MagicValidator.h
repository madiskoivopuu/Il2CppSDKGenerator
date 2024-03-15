#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ValidateAttribute.h" 
namespace ConfigValidationValidators {

class MagicValidator : public ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "MagicValidator"));
	}

	template <typename R = bool> R& Tag() {
		return *(R*)((uintptr_t)this + 0x19);
	}

	template <typename R = bool> R get_Tag() {
		return ((R (*)(MagicValidator*))(Il2CppBase() + 0x1A47768))(this);
	}
	template <typename R = void> R set_Tag(bool value) {
		return ((R (*)(MagicValidator*, bool))(Il2CppBase() + 0x1A47770))(this, value);
	}

};

}
