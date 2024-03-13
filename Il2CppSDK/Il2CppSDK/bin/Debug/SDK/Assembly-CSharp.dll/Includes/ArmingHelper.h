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
	template <typename T = Il2CppList<ArmingSlotInfo*>*> static T& _data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _dataByEquipment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Nullable1int32_t>*> static T ToSlotIndex(EquipmentType* equipmentType) {
		return ((T (*)(void *, EquipmentType*))(Il2CppBase() + 0x1A51C08))(0, equipmentType);
	}
	template <typename T = bool> static T IsCosmetic(EquipmentType* equipmentType) {
		return ((T (*)(void *, EquipmentType*))(Il2CppBase() + 0x1A51CDC))(0, equipmentType);
	}
	template <typename T = bool> static T IsCosmetic_1(int32_t slotIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1A51D84))(0, slotIndex);
	}
	template <typename T = ArmingSlotInfo*> static T GetArmingSlotInfo(int32_t slotIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1A51DF8))(0, slotIndex);
	}
	template <typename T = Il2CppString*> static T GetLocalizationKey(EquipmentType* equipmentType) {
		return ((T (*)(void *, EquipmentType*))(Il2CppBase() + 0x1A5643C))(0, equipmentType);
	}
	template <typename T = float> static T GetArmingPower(GameEntity* entity, ICommonContexts* world, bool checkActiveConditions) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, bool))(Il2CppBase() + 0x1A5651C))(0, entity, world, checkActiveConditions);
	}
	template <typename T = int32_t> static T GetSlotCountFromMount(GameEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1A56798))(0, entity, world);
	}
	template <typename T = float> static T GetArmingPetPower(GameEntity* entity, ICommonContexts* world, bool checkActiveConditions) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, bool))(Il2CppBase() + 0x1A56908))(0, entity, world, checkActiveConditions);
	}
	template <typename T = float> static T GetArmingMountPower(GameEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1A56A50))(0, entity, world);
	}
	template <typename T = float> static T GetArmingRunesPower(GameEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1A566E4))(0, entity, world);
	}
	template <typename T = float> static T GetPowerFromRunes(ICommonContexts* world, Il2CppArray<uintptr_t>* runes) {
		return ((T (*)(void *, ICommonContexts*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A56BC0))(0, world, runes);
	}
	template <typename T = Il2CppString*> static T GetDefaultWeapon(GameDataEntity* entityData) {
		return ((T (*)(void *, GameDataEntity*))(Il2CppBase() + 0x1A56D20))(0, entityData);
	}
	template <typename T = Il2CppString*> static T GetDefaultItemName(GameDataEntity* entityData, int32_t slotIndex) {
		return ((T (*)(void *, GameDataEntity*, int32_t))(Il2CppBase() + 0x1A56D6C))(0, entityData, slotIndex);
	}
	template <typename T = Il2CppString*> static T GetArmingItemName(GameEntity* entity, int32_t slotIndex) {
		return ((T (*)(void *, GameEntity*, int32_t))(Il2CppBase() + 0x1A56E28))(0, entity, slotIndex);
	}
	template <typename T = ItemEntity*> static T GetShowItem(GameEntity* entity, ICommonContexts* world, int32_t slotIndex) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, int32_t))(Il2CppBase() + 0x1A56EC4))(0, entity, world, slotIndex);
	}
	template <typename T = void> static T ArmingCopyTo(GameEntity* fromEntity, GameEntity* toEntity, bool ifNeed) {
		return ((T (*)(void *, GameEntity*, GameEntity*, bool))(Il2CppBase() + 0x1A56FBC))(0, fromEntity, toEntity, ifNeed);
	}
	template <typename T = void> static T ClearArming(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1A57158))(0, entity);
	}
	template <typename T = bool> static T ReplaceArmingItemName(GameEntity* entity, int32_t slotIndex, Il2CppString* newName, bool ifNeed) {
		return ((T (*)(void *, GameEntity*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x1A57064))(0, entity, slotIndex, newName, ifNeed);
	}
	template <typename T = bool> static T CanPutTo(EquipmentType* equipmentType, int32_t index) {
		return ((T (*)(void *, EquipmentType*, int32_t))(Il2CppBase() + 0x1A572EC))(0, equipmentType, index);
	}

};

