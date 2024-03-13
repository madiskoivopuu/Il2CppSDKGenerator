#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetInfoPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetInfoPanel"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _statText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _petSkills() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = HUDPetExperienceInfo*> T& _petExperience() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = TooltipProxy*> T& _tooltipProxy() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Show(UIWindow* window, IInventoryItem* pet) {
		return ((T (*)(PetInfoPanel*, UIWindow*, IInventoryItem*))(Il2CppBase() + 0x11ECD70))(this, window, pet);
	}

};

