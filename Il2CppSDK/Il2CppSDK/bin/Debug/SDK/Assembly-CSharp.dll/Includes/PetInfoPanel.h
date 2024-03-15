#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetInfoPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetInfoPanel"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _name() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _statText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<ItemView*>*> R& _petSkills() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = HUDPetExperienceInfo*> R& _petExperience() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = TooltipProxy*> R& _tooltipProxy() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Show(UIWindow* window, IInventoryItem* pet) {
		return ((R (*)(PetInfoPanel*, UIWindow*, IInventoryItem*))(Il2CppBase() + 0x11ECD70))(this, window, pet);
	}

};

