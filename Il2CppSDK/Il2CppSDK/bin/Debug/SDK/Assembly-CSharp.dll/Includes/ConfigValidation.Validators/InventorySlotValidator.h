#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ConfigValidation.Base/ValidateAttribute" 
namespace ConfigValidationValidators {

class InventorySlotValidator: ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "InventorySlotValidator"));
	}

	template <typename T = bool> T& Tag() {
		return *(T*)((uintptr_t)this + 0x19);
	}

	template <typename T = bool> T get_Tag() {
		return ((T (*)(InventorySlotValidator*))(Il2CppBase() + 0x123EE50))(this);
	}
	template <typename T = void> T set_Tag(bool value) {
		return ((T (*)(InventorySlotValidator*, bool))(Il2CppBase() + 0x123EE58))(this, value);
	}

};

}
