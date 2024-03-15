#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingHelper"));
	}

	template <typename R = Il2CppArray<int32_t>*> static R& CosmeticSlotIndexes() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Il2CppList<ArmingSlotInfo*>*& _data() {
		return *(Il2CppList<ArmingSlotInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = Il2CppArray<ArmingSlotInfo*>*> static R& _dataByEquipment() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	 static Nullable1int32_t>* ToSlotIndex(EquipmentType* equipmentType) {
		return ((Nullable1int32_t>* (*)(void *, EquipmentType*))(Il2CppBase() + 0x1A51C08))(0, equipmentType);
	}
	template <typename R = bool> static R IsCosmetic(EquipmentType* equipmentType) {
		return ((R (*)(void *, EquipmentType*))(Il2CppBase() + 0x1A51CDC))(0, equipmentType);
	}
	template <typename R = bool> static R IsCosmetic_1(int32_t slotIndex) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1A51D84))(0, slotIndex);
	}
	template <typename R = ArmingSlotInfo*> static R GetArmingSlotInfo(int32_t slotIndex) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1A51DF8))(0, slotIndex);
	}
	template <typename R = Il2CppString*> static R GetLocalizationKey(EquipmentType* equipmentType) {
		return ((R (*)(void *, EquipmentType*))(Il2CppBase() + 0x1A5643C))(0, equipmentType);
	}
	template <typename R = float> static R GetArmingPower(GameEntity* entity, ICommonContexts* world, bool checkActiveConditions) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, bool))(Il2CppBase() + 0x1A5651C))(0, entity, world, checkActiveConditions);
	}
	template <typename R = int32_t> static R GetSlotCountFromMount(GameEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1A56798))(0, entity, world);
	}
	template <typename R = float> static R GetArmingPetPower(GameEntity* entity, ICommonContexts* world, bool checkActiveConditions) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, bool))(Il2CppBase() + 0x1A56908))(0, entity, world, checkActiveConditions);
	}
	template <typename R = float> static R GetArmingMountPower(GameEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1A56A50))(0, entity, world);
	}
	template <typename R = float> static R GetArmingRunesPower(GameEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1A566E4))(0, entity, world);
	}
	template <typename R = float> static R GetPowerFromRunes(ICommonContexts* world, Il2CppArray<Il2CppString*>* runes) {
		return ((R (*)(void *, ICommonContexts*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A56BC0))(0, world, runes);
	}
	template <typename R = Il2CppString*> static R GetDefaultWeapon(GameDataEntity* entityData) {
		return ((R (*)(void *, GameDataEntity*))(Il2CppBase() + 0x1A56D20))(0, entityData);
	}
	template <typename R = Il2CppString*> static R GetDefaultItemName(GameDataEntity* entityData, int32_t slotIndex) {
		return ((R (*)(void *, GameDataEntity*, int32_t))(Il2CppBase() + 0x1A56D6C))(0, entityData, slotIndex);
	}
	template <typename R = Il2CppString*> static R GetArmingItemName(GameEntity* entity, int32_t slotIndex) {
		return ((R (*)(void *, GameEntity*, int32_t))(Il2CppBase() + 0x1A56E28))(0, entity, slotIndex);
	}
	template <typename R = ItemEntity*> static R GetShowItem(GameEntity* entity, ICommonContexts* world, int32_t slotIndex) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, int32_t))(Il2CppBase() + 0x1A56EC4))(0, entity, world, slotIndex);
	}
	template <typename R = void> static R ArmingCopyTo(GameEntity* fromEntity, GameEntity* toEntity, bool ifNeed) {
		return ((R (*)(void *, GameEntity*, GameEntity*, bool))(Il2CppBase() + 0x1A56FBC))(0, fromEntity, toEntity, ifNeed);
	}
	template <typename R = void> static R ClearArming(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1A57158))(0, entity);
	}
	template <typename R = bool> static R ReplaceArmingItemName(GameEntity* entity, int32_t slotIndex, Il2CppString* newName, bool ifNeed) {
		return ((R (*)(void *, GameEntity*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x1A57064))(0, entity, slotIndex, newName, ifNeed);
	}
	template <typename R = bool> static R CanPutTo(EquipmentType* equipmentType, int32_t index) {
		return ((R (*)(void *, EquipmentType*, int32_t))(Il2CppBase() + 0x1A572EC))(0, equipmentType, index);
	}

};

