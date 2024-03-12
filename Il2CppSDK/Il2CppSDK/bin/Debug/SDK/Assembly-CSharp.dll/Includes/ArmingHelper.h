#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& CosmeticSlotIndexes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& _data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _dataByEquipment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void*> static T ToSlotIndex(uintptr_t equipmentType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A51C08))(0, equipmentType);
	}
	template <typename T = bool> static T IsCosmetic(uintptr_t equipmentType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A51CDC))(0, equipmentType);
	}
	template <typename T = bool> static T IsCosmetic_1(int32_t slotIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1A51D84))(0, slotIndex);
	}
	template <typename T = uintptr_t> static T GetArmingSlotInfo(int32_t slotIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1A51DF8))(0, slotIndex);
	}
	template <typename T = Il2CppString*> static T GetLocalizationKey(uintptr_t equipmentType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A5643C))(0, equipmentType);
	}
	template <typename T = float> static T GetArmingPower(uintptr_t entity, uintptr_t world, bool checkActiveConditions) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1A5651C))(0, entity, world, checkActiveConditions);
	}
	template <typename T = int32_t> static T GetSlotCountFromMount(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A56798))(0, entity, world);
	}
	template <typename T = float> static T GetArmingPetPower(uintptr_t entity, uintptr_t world, bool checkActiveConditions) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1A56908))(0, entity, world, checkActiveConditions);
	}
	template <typename T = float> static T GetArmingMountPower(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A56A50))(0, entity, world);
	}
	template <typename T = float> static T GetArmingRunesPower(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A566E4))(0, entity, world);
	}
	template <typename T = float> static T GetPowerFromRunes(uintptr_t world, Il2CppArray<uintptr_t>* runes) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A56BC0))(0, world, runes);
	}
	template <typename T = Il2CppString*> static T GetDefaultWeapon(uintptr_t entityData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A56D20))(0, entityData);
	}
	template <typename T = Il2CppString*> static T GetDefaultItemName(uintptr_t entityData, int32_t slotIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1A56D6C))(0, entityData, slotIndex);
	}
	template <typename T = Il2CppString*> static T GetArmingItemName(uintptr_t entity, int32_t slotIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1A56E28))(0, entity, slotIndex);
	}
	template <typename T = uintptr_t> static T GetShowItem(uintptr_t entity, uintptr_t world, int32_t slotIndex) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A56EC4))(0, entity, world, slotIndex);
	}
	template <typename T = void> static T ArmingCopyTo(uintptr_t fromEntity, uintptr_t toEntity, bool ifNeed) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1A56FBC))(0, fromEntity, toEntity, ifNeed);
	}
	template <typename T = void> static T ClearArming(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A57158))(0, entity);
	}
	template <typename T = bool> static T ReplaceArmingItemName(uintptr_t entity, int32_t slotIndex, Il2CppString* newName, bool ifNeed) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x1A57064))(0, entity, slotIndex, newName, ifNeed);
	}
	template <typename T = bool> static T CanPutTo(uintptr_t equipmentType, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1A572EC))(0, equipmentType, index);
	}

};

}
