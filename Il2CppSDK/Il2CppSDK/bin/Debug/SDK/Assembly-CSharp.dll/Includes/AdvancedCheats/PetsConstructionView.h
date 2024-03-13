#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../AdvancedCheats/CustomTabContentView.h" 
namespace AdvancedCheats {

class PetsConstructionView : public CustomTabContentView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "PetsConstructionView"));
	}

	template <typename T = uintptr_t> T& _addPetButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _grades() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _expSlider() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<PetCheatItem*>*> T& _petItems() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<PetCheatItem*>*> T& _skill1Items() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<PetCheatItem*>*> T& _skill2Items() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<PetCheatItem*>*> T& _skill3Items() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _inited() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& _selectedBlueprint() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& _selectedSkill1() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& _selectedSkill2() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& _selectedSkill3() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PetsConstructionView*))(Il2CppBase() + 0x16F147C))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(PetsConstructionView*))(Il2CppBase() + 0x16F1518))(this);
	}
	template <typename T = void> T OnAddPetButtonClicked() {
		return ((T (*)(PetsConstructionView*))(Il2CppBase() + 0x16F1BBC))(this);
	}
	template <typename T = ItemEntity*> T GetCurrentPet() {
		return ((T (*)(PetsConstructionView*))(Il2CppBase() + 0x16F1CA8))(this);
	}
	template <typename T = void> T PetItemOnOnClick(Il2CppString* petBlueprint) {
		return ((T (*)(PetsConstructionView*, Il2CppString*))(Il2CppBase() + 0x16F1A34))(this, petBlueprint);
	}
	template <typename T = void> T InitSkills(Il2CppList<PetCheatItem*>* items, int32_t slotIndex) {
		return ((T (*)(PetsConstructionView*, Il2CppList<PetCheatItem*>*, int32_t))(Il2CppBase() + 0x16F1ED4))(this, items, slotIndex);
	}
	template <typename T = void> T OnSkillClicked(int32_t skillSlot, Il2CppString* skillBlueprint) {
		return ((T (*)(PetsConstructionView*, int32_t, Il2CppString*))(Il2CppBase() + 0x16F235C))(this, skillSlot, skillBlueprint);
	}

};

}
