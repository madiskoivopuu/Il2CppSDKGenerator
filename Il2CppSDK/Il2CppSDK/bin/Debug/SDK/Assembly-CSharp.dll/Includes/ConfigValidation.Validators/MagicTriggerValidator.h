#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ConfigValidation.Base/ValidateAttribute" 
namespace ConfigValidationValidators {

class MagicTriggerValidator: ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "MagicTriggerValidator"));
	}

	template <typename T = bool> T& Tag() {
		return *(T*)((uintptr_t)this + 0x19);
	}

	template <typename T = bool> T get_Tag() {
		return ((T (*)(MagicTriggerValidator*))(Il2CppBase() + 0x1A47748))(this);
	}
	template <typename T = void> T set_Tag(bool value) {
		return ((T (*)(MagicTriggerValidator*, bool))(Il2CppBase() + 0x1A47750))(this, value);
	}

};

}
