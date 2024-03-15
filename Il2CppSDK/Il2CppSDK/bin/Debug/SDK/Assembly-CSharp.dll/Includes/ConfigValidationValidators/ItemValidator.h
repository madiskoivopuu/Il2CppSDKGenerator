#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ValidateAttribute.h" 
namespace ConfigValidationValidators {

class ItemValidator : public ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "ItemValidator"));
	}

	 Nullable1<EquipmentType>*& currentEquipmentType() {
		return *(Nullable1<EquipmentType>**)((uintptr_t)this + 0x1C);
	}
	template <typename R = bool> R& Tag() {
		return *(R*)((uintptr_t)this + 0x24);
	}

	template <typename R = bool> R get_Tag() {
		return ((R (*)(ItemValidator*))(Il2CppBase() + 0x14E0A24))(this);
	}
	template <typename R = void> R set_Tag(bool value) {
		return ((R (*)(ItemValidator*, bool))(Il2CppBase() + 0x14E0A2C))(this, value);
	}

};

}
