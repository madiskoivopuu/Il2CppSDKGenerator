#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemHelper"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> static R& _romanNumerals() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<int32_t>*> static R& _numerals() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R& _romanCache() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename R = Il2CppString*> static R ToRomanNumeral(int32_t number) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x14C8F38))(0, number);
	}
	template <typename R = float> static R GetPower(Il2CppString* name, ICommonContexts* contexts) {
		return ((R (*)(void *, Il2CppString*, ICommonContexts*))(Il2CppBase() + 0x14C955C))(0, name, contexts);
	}
	template <typename R = float> static R GetPower_1(ItemEntity* item) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x14C9664))(0, item);
	}
	template <typename R = float> static R GetAddPlayerClassProgress(ItemEntity* itemEntity, PlayerClassProgress* progressType, PlayerClassType* classType) {
		return ((R (*)(void *, ItemEntity*, PlayerClassProgress*, PlayerClassType*))(Il2CppBase() + 0x14C96B8))(0, itemEntity, progressType, classType);
	}
	template <typename R = ItemEntity*> static R ToItemEntity(Il2CppString* itemName, ICommonContexts* world) {
		return ((R (*)(void *, Il2CppString*, ICommonContexts*))(Il2CppBase() + 0x14C9760))(0, itemName, world);
	}
	template <typename R = bool> static R ShowNotActive(ItemEntity* item, ICommonContexts* world, GameEntity* actor) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x14C982C))(0, item, world, actor);
	}
	template <typename R = bool> static R ShowNotActive_1(InventorySlotEntity* slot, ICommonContexts* world, GameEntity* actor) {
		return ((R (*)(void *, InventorySlotEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x14C9A48))(0, slot, world, actor);
	}
	template <typename R = bool> static R HasGradeUpToItem(ItemEntity* itemEntity) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x14C9B34))(0, itemEntity);
	}
	template <typename R = bool> static R IsCostume(ItemEntity* itemEntity) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x14C9B90))(0, itemEntity);
	}
	template <typename R = bool> static R IsDefaultAvailable(ItemEntity* itemEntity) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x14C9BE0))(0, itemEntity);
	}
	template <typename R = bool> static R IsCosmeticAvailable(ItemEntity* itemEntity, AccountEntity* account) {
		return ((R (*)(void *, ItemEntity*, AccountEntity*))(Il2CppBase() + 0x14C9C30))(0, itemEntity, account);
	}
	template <typename R = bool> static R IsCosmeticAvailable_1(ItemEntity* itemEntity, Il2CppDictionary<Il2CppString*, bool>* availableCosmetics) {
		return ((R (*)(void *, ItemEntity*, Il2CppDictionary<Il2CppString*, bool>*))(Il2CppBase() + 0x14C9CD8))(0, itemEntity, availableCosmetics);
	}
	template <typename R = bool> static R IsCosmeticNew(ItemEntity* itemEntity, Il2CppDictionary<Il2CppString*, bool>* availableCosmetics) {
		return ((R (*)(void *, ItemEntity*, Il2CppDictionary<Il2CppString*, bool>*))(Il2CppBase() + 0x14C9DA4))(0, itemEntity, availableCosmetics);
	}
	template <typename R = EquipmentType*> static R GetEquipmentType(ItemEntity* itemEntity) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x14C9E68))(0, itemEntity);
	}
	template <typename R = bool> static R IsClassAvailable(ItemEntity* classEntity, int64_t playerId, ICommonContexts* contexts) {
		return ((R (*)(void *, ItemEntity*, int64_t, ICommonContexts*))(Il2CppBase() + 0x14C9EB4))(0, classEntity, playerId, contexts);
	}
	template <typename R = bool> static R CanProgressClass(ItemEntity* classEntity, int64_t playerId, ICommonContexts* contexts, PlayerClassProgress* progressType) {
		return ((R (*)(void *, ItemEntity*, int64_t, ICommonContexts*, PlayerClassProgress*))(Il2CppBase() + 0x14C9FD8))(0, classEntity, playerId, contexts, progressType);
	}
	template <typename R = bool> static R IsFirstClass(ItemEntity* classEntity) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x14CA114))(0, classEntity);
	}
	 static ValueTuple3bool, int32_t, int32_t>* IsInfinityBattlePassStep(ItemEntity* bpEntity, int32_t currentCurrencyValue) {
		return ((ValueTuple3bool, int32_t, int32_t>* (*)(void *, ItemEntity*, int32_t))(Il2CppBase() + 0x14CA190))(0, bpEntity, currentCurrencyValue);
	}
	template <typename R = bool> static R CheckActive(ItemEntity* itemEntity, GameEntity* actor, ICommonContexts* contexts) {
		return ((R (*)(void *, ItemEntity*, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x14CA2D4))(0, itemEntity, actor, contexts);
	}
	template <typename R = ItemEntity*> static R GetItem(IItemEntity* entity, ICommonContexts* contexts) {
		return ((R (*)(void *, IItemEntity*, ICommonContexts*))(Il2CppBase() + 0x14CA4D8))(0, entity, contexts);
	}
	template <typename R = int32_t> static R GetStackCount(ItemDataContext* context, Il2CppString* name, InventorySlotEntity* slot) {
		return ((R (*)(void *, ItemDataContext*, Il2CppString*, InventorySlotEntity*))(Il2CppBase() + 0x14CA6B0))(0, context, name, slot);
	}
	template <typename R = int32_t> static R GetStackCountInSlot(ItemEntity* item, InventorySlotEntity* slot) {
		return ((R (*)(void *, ItemEntity*, InventorySlotEntity*))(Il2CppBase() + 0x14CA790))(0, item, slot);
	}
	template <typename R = Rarity*> static R GetRarity(IRarityEntity* rarityEntity, Rarity* defaultRarity) {
		return ((R (*)(void *, IRarityEntity*, Rarity*))(Il2CppBase() + 0x14CA80C))(0, rarityEntity, defaultRarity);
	}
	template <typename R = float> static R GetMaxDurability(ItemDataContext* context, Il2CppString* name) {
		return ((R (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CA938))(0, context, name);
	}
	template <typename R = int32_t> static R GetSlotCount(ItemDataContext* context, Il2CppString* name) {
		return ((R (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CA994))(0, context, name);
	}
	template <typename R = int32_t> static R GetGrade(IGradeEntity* gradeEntity, int32_t defaultValue) {
		return ((R (*)(void *, IGradeEntity*, int32_t))(Il2CppBase() + 0x14CA9F4))(0, gradeEntity, defaultValue);
	}
	template <typename R = int32_t> static R GetMaxGrade(ItemEntity* gradeEntity, int32_t defaultValue) {
		return ((R (*)(void *, ItemEntity*, int32_t))(Il2CppBase() + 0x14CAB20))(0, gradeEntity, defaultValue);
	}
	template <typename R = void> static R FillEquipMagics(ItemEntity* item, ICommonContexts* world, Il2CppList<MagicDataEntity*>* buffer, Predicate1MagicDataEntity*>* predicate) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*, Il2CppList<MagicDataEntity*>*, Predicate1MagicDataEntity*>*))(Il2CppBase() + 0x14CAB6C))(0, item, world, buffer, predicate);
	}
	template <typename R = bool> static R CanPutTo(ItemEntity* item, int32_t inventoryIndex) {
		return ((R (*)(void *, ItemEntity*, int32_t))(Il2CppBase() + 0x14CAE60))(0, item, inventoryIndex);
	}
	template <typename R = bool> static R CanUserInteractWithInventorySlot(GameEntity* user, int32_t inventoryIndex) {
		return ((R (*)(void *, GameEntity*, int32_t))(Il2CppBase() + 0x14CAF34))(0, user, inventoryIndex);
	}
	template <typename R = bool> static R CanPutToPocket(ItemDataContext* context, Il2CppString* name) {
		return ((R (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CAFA8))(0, context, name);
	}
	template <typename R = Il2CppString*> static R GetDescriptionCaption(ICommonContexts* world, Il2CppString* name) {
		return ((R (*)(void *, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x14CB074))(0, world, name);
	}
	template <typename R = Il2CppString*> static R GetDescriptionCaption_1(ItemEntity* entity) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x14CB18C))(0, entity);
	}
	template <typename R = Il2CppString*> static R GetDescriptionText(ItemEntity* entity) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x14CB28C))(0, entity);
	}
	template <typename R = float> static R GetWeaponDamage(GameEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x14CB30C))(0, entity, world);
	}
	template <typename R = float> static R GetWeaponSneakDamage(GameEntity* entity, ICommonContexts* world, bool pvp) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, bool))(Il2CppBase() + 0x14CB46C))(0, entity, world, pvp);
	}
	template <typename R = float> static R GetAttackPerSecond(ItemEntity* itemEntity, ActionDataContext* actionsData) {
		return ((R (*)(void *, ItemEntity*, ActionDataContext*))(Il2CppBase() + 0x14CB5C8))(0, itemEntity, actionsData);
	}
	template <typename R = float> static R GetWeaponDPS(GameEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x14CB69C))(0, entity, world);
	}
	template <typename R = float> static R GetWeaponAttackPerSecond(GameEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x14CB8C4))(0, entity, world);
	}
	template <typename R = bool> static R HasInstanceEffect(ItemDataContext* context, Il2CppString* name) {
		return ((R (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CBAD4))(0, context, name);
	}
	template <typename R = Il2CppString*> static R GetInstantEffectSelf(ItemDataContext* context, Il2CppString* name) {
		return ((R (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CBB4C))(0, context, name);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R GetInstantEffectTarget(ItemDataContext* context, Il2CppString* name) {
		return ((R (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CBBD0))(0, context, name);
	}
	template <typename R = Il2CppString*> static R GetInstantEffectTrail(ItemDataContext* context, Il2CppString* name) {
		return ((R (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CBC54))(0, context, name);
	}
	template <typename R = float> static R GetAuraRadius(ItemDataContext* context, Il2CppString* name) {
		return ((R (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CBCD8))(0, context, name);
	}
	template <typename R = bool> static R IsSkillShot(ItemEntity* item) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x14CBD6C))(0, item);
	}
	template <typename R = ItemEntity*> static R GetNextSkill(ItemDataContext* context, ItemEntity* skill, int32_t level) {
		return ((R (*)(void *, ItemDataContext*, ItemEntity*, int32_t))(Il2CppBase() + 0x14CBDC4))(0, context, skill, level);
	}
	template <typename R = Il2CppString*> static R GetNextSkillName(ItemDataContext* context, Il2CppString* skillName, int32_t level) {
		return ((R (*)(void *, ItemDataContext*, Il2CppString*, int32_t))(Il2CppBase() + 0x14CBEEC))(0, context, skillName, level);
	}
	template <typename R = bool> static R IsCurrency(ItemDataContext* context, Il2CppString* name) {
		return ((R (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CBFB4))(0, context, name);
	}
	template <typename R = bool> static R IsDropable(ItemDataContext* context, Il2CppString* name) {
		return ((R (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CC060))(0, context, name);
	}
	template <typename R = int64_t> static R GetShieldSeconds(ItemDataContext* context, Il2CppString* itemName) {
		return ((R (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CC0A4))(0, context, itemName);
	}

};

