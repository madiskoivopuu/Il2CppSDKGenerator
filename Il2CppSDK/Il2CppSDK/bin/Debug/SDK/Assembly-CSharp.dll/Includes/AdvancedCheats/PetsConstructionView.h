#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../CustomTabContentView.h" 
namespace AdvancedCheats {

class PetsConstructionView : public CustomTabContentView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "PetsConstructionView"));
	}

	template <typename R = uintptr_t> R& _addPetButton() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _grades() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _expSlider() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Il2CppList<AdvancedCheats::PetCheatItem*>*& _petItems() {
		return *(Il2CppList<AdvancedCheats::PetCheatItem*>**)((uintptr_t)this + 0x30);
	}
	 Il2CppList<AdvancedCheats::PetCheatItem*>*& _skill1Items() {
		return *(Il2CppList<AdvancedCheats::PetCheatItem*>**)((uintptr_t)this + 0x38);
	}
	 Il2CppList<AdvancedCheats::PetCheatItem*>*& _skill2Items() {
		return *(Il2CppList<AdvancedCheats::PetCheatItem*>**)((uintptr_t)this + 0x40);
	}
	 Il2CppList<AdvancedCheats::PetCheatItem*>*& _skill3Items() {
		return *(Il2CppList<AdvancedCheats::PetCheatItem*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = bool> R& _inited() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& _selectedBlueprint() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& _selectedSkill1() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& _selectedSkill2() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& _selectedSkill3() {
		return *(R*)((uintptr_t)this + 0x70);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(PetsConstructionView*))(Il2CppBase() + 0x16F147C))(this);
	}
	template <typename R = void> R Show() {
		return ((R (*)(PetsConstructionView*))(Il2CppBase() + 0x16F1518))(this);
	}
	template <typename R = void> R OnAddPetButtonClicked() {
		return ((R (*)(PetsConstructionView*))(Il2CppBase() + 0x16F1BBC))(this);
	}
	template <typename R = ItemEntity*> R GetCurrentPet() {
		return ((R (*)(PetsConstructionView*))(Il2CppBase() + 0x16F1CA8))(this);
	}
	template <typename R = void> R PetItemOnOnClick(Il2CppString* petBlueprint) {
		return ((R (*)(PetsConstructionView*, Il2CppString*))(Il2CppBase() + 0x16F1A34))(this, petBlueprint);
	}
	template <typename R = void> R InitSkills(Il2CppList<AdvancedCheats::PetCheatItem*>* items, int32_t slotIndex) {
		return ((R (*)(PetsConstructionView*, Il2CppList<AdvancedCheats::PetCheatItem*>*, int32_t))(Il2CppBase() + 0x16F1ED4))(this, items, slotIndex);
	}
	template <typename R = void> R OnSkillClicked(int32_t skillSlot, Il2CppString* skillBlueprint) {
		return ((R (*)(PetsConstructionView*, int32_t, Il2CppString*))(Il2CppBase() + 0x16F235C))(this, skillSlot, skillBlueprint);
	}

};

}
