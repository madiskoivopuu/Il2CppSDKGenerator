#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ConfigValidation.Base/ValidateAttribute.h" 
namespace ConfigValidationValidators {

class ItemValidator : public ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "ItemValidator"));
	}

	template <typename T = Nullable1EquipmentType*>*> T& currentEquipmentType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& Tag() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = bool> T get_Tag() {
		return ((T (*)(ItemValidator*))(Il2CppBase() + 0x14E0A24))(this);
	}
	template <typename T = void> T set_Tag(bool value) {
		return ((T (*)(ItemValidator*, bool))(Il2CppBase() + 0x14E0A2C))(this, value);
	}

};

}
