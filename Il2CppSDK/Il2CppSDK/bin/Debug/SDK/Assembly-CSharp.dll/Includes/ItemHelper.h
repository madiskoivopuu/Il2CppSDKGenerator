#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& _romanNumerals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _numerals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _romanCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> static T ToRomanNumeral(int32_t number) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x14C8F38))(0, number);
	}
	template <typename T = float> static T GetPower(Il2CppString* name, ICommonContexts* contexts) {
		return ((T (*)(void *, Il2CppString*, ICommonContexts*))(Il2CppBase() + 0x14C955C))(0, name, contexts);
	}
	template <typename T = float> static T GetPower_1(ItemEntity* item) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x14C9664))(0, item);
	}
	template <typename T = float> static T GetAddPlayerClassProgress(ItemEntity* itemEntity, PlayerClassProgress* progressType, PlayerClassType* classType) {
		return ((T (*)(void *, ItemEntity*, PlayerClassProgress*, PlayerClassType*))(Il2CppBase() + 0x14C96B8))(0, itemEntity, progressType, classType);
	}
	template <typename T = ItemEntity*> static T ToItemEntity(Il2CppString* itemName, ICommonContexts* world) {
		return ((T (*)(void *, Il2CppString*, ICommonContexts*))(Il2CppBase() + 0x14C9760))(0, itemName, world);
	}
	template <typename T = bool> static T ShowNotActive(ItemEntity* item, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x14C982C))(0, item, world, actor);
	}
	template <typename T = bool> static T ShowNotActive_1(InventorySlotEntity* slot, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, InventorySlotEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x14C9A48))(0, slot, world, actor);
	}
	template <typename T = bool> static T HasGradeUpToItem(ItemEntity* itemEntity) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x14C9B34))(0, itemEntity);
	}
	template <typename T = bool> static T IsCostume(ItemEntity* itemEntity) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x14C9B90))(0, itemEntity);
	}
	template <typename T = bool> static T IsDefaultAvailable(ItemEntity* itemEntity) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x14C9BE0))(0, itemEntity);
	}
	template <typename T = bool> static T IsCosmeticAvailable(ItemEntity* itemEntity, AccountEntity* account) {
		return ((T (*)(void *, ItemEntity*, AccountEntity*))(Il2CppBase() + 0x14C9C30))(0, itemEntity, account);
	}
	template <typename T = bool> static T IsCosmeticAvailable_1(ItemEntity* itemEntity, Il2CppDictionary<Il2CppString*, bool>* availableCosmetics) {
		return ((T (*)(void *, ItemEntity*, Il2CppDictionary<Il2CppString*, bool>*))(Il2CppBase() + 0x14C9CD8))(0, itemEntity, availableCosmetics);
	}
	template <typename T = bool> static T IsCosmeticNew(ItemEntity* itemEntity, Il2CppDictionary<Il2CppString*, bool>* availableCosmetics) {
		return ((T (*)(void *, ItemEntity*, Il2CppDictionary<Il2CppString*, bool>*))(Il2CppBase() + 0x14C9DA4))(0, itemEntity, availableCosmetics);
	}
	template <typename T = EquipmentType*> static T GetEquipmentType(ItemEntity* itemEntity) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x14C9E68))(0, itemEntity);
	}
	template <typename T = bool> static T IsClassAvailable(ItemEntity* classEntity, int64_t playerId, ICommonContexts* contexts) {
		return ((T (*)(void *, ItemEntity*, int64_t, ICommonContexts*))(Il2CppBase() + 0x14C9EB4))(0, classEntity, playerId, contexts);
	}
	template <typename T = bool> static T CanProgressClass(ItemEntity* classEntity, int64_t playerId, ICommonContexts* contexts, PlayerClassProgress* progressType) {
		return ((T (*)(void *, ItemEntity*, int64_t, ICommonContexts*, PlayerClassProgress*))(Il2CppBase() + 0x14C9FD8))(0, classEntity, playerId, contexts, progressType);
	}
	template <typename T = bool> static T IsFirstClass(ItemEntity* classEntity) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x14CA114))(0, classEntity);
	}
	template <typename T = ValueTuple3bool, int32_t, int32_t>*> static T IsInfinityBattlePassStep(ItemEntity* bpEntity, int32_t currentCurrencyValue) {
		return ((T (*)(void *, ItemEntity*, int32_t))(Il2CppBase() + 0x14CA190))(0, bpEntity, currentCurrencyValue);
	}
	template <typename T = bool> static T CheckActive(ItemEntity* itemEntity, GameEntity* actor, ICommonContexts* contexts) {
		return ((T (*)(void *, ItemEntity*, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x14CA2D4))(0, itemEntity, actor, contexts);
	}
	template <typename T = ItemEntity*> static T GetItem(IItemEntity* entity, ICommonContexts* contexts) {
		return ((T (*)(void *, IItemEntity*, ICommonContexts*))(Il2CppBase() + 0x14CA4D8))(0, entity, contexts);
	}
	template <typename T = int32_t> static T GetStackCount(ItemDataContext* context, Il2CppString* name, InventorySlotEntity* slot) {
		return ((T (*)(void *, ItemDataContext*, Il2CppString*, InventorySlotEntity*))(Il2CppBase() + 0x14CA6B0))(0, context, name, slot);
	}
	template <typename T = int32_t> static T GetStackCountInSlot(ItemEntity* item, InventorySlotEntity* slot) {
		return ((T (*)(void *, ItemEntity*, InventorySlotEntity*))(Il2CppBase() + 0x14CA790))(0, item, slot);
	}
	template <typename T = Rarity*> static T GetRarity(IRarityEntity* rarityEntity, Rarity* defaultRarity) {
		return ((T (*)(void *, IRarityEntity*, Rarity*))(Il2CppBase() + 0x14CA80C))(0, rarityEntity, defaultRarity);
	}
	template <typename T = float> static T GetMaxDurability(ItemDataContext* context, Il2CppString* name) {
		return ((T (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CA938))(0, context, name);
	}
	template <typename T = int32_t> static T GetSlotCount(ItemDataContext* context, Il2CppString* name) {
		return ((T (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CA994))(0, context, name);
	}
	template <typename T = int32_t> static T GetGrade(IGradeEntity* gradeEntity, int32_t defaultValue) {
		return ((T (*)(void *, IGradeEntity*, int32_t))(Il2CppBase() + 0x14CA9F4))(0, gradeEntity, defaultValue);
	}
	template <typename T = int32_t> static T GetMaxGrade(ItemEntity* gradeEntity, int32_t defaultValue) {
		return ((T (*)(void *, ItemEntity*, int32_t))(Il2CppBase() + 0x14CAB20))(0, gradeEntity, defaultValue);
	}
	template <typename T = void> static T FillEquipMagics(ItemEntity* item, ICommonContexts* world, Il2CppList<MagicDataEntity*>* buffer, Predicate1MagicDataEntity*>* predicate) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*, Il2CppList<MagicDataEntity*>*, Predicate1MagicDataEntity*>*))(Il2CppBase() + 0x14CAB6C))(0, item, world, buffer, predicate);
	}
	template <typename T = bool> static T CanPutTo(ItemEntity* item, int32_t inventoryIndex) {
		return ((T (*)(void *, ItemEntity*, int32_t))(Il2CppBase() + 0x14CAE60))(0, item, inventoryIndex);
	}
	template <typename T = bool> static T CanUserInteractWithInventorySlot(GameEntity* user, int32_t inventoryIndex) {
		return ((T (*)(void *, GameEntity*, int32_t))(Il2CppBase() + 0x14CAF34))(0, user, inventoryIndex);
	}
	template <typename T = bool> static T CanPutToPocket(ItemDataContext* context, Il2CppString* name) {
		return ((T (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CAFA8))(0, context, name);
	}
	template <typename T = Il2CppString*> static T GetDescriptionCaption(ICommonContexts* world, Il2CppString* name) {
		return ((T (*)(void *, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x14CB074))(0, world, name);
	}
	template <typename T = Il2CppString*> static T GetDescriptionCaption_1(ItemEntity* entity) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x14CB18C))(0, entity);
	}
	template <typename T = Il2CppString*> static T GetDescriptionText(ItemEntity* entity) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x14CB28C))(0, entity);
	}
	template <typename T = float> static T GetWeaponDamage(GameEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x14CB30C))(0, entity, world);
	}
	template <typename T = float> static T GetWeaponSneakDamage(GameEntity* entity, ICommonContexts* world, bool pvp) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, bool))(Il2CppBase() + 0x14CB46C))(0, entity, world, pvp);
	}
	template <typename T = float> static T GetAttackPerSecond(ItemEntity* itemEntity, ActionDataContext* actionsData) {
		return ((T (*)(void *, ItemEntity*, ActionDataContext*))(Il2CppBase() + 0x14CB5C8))(0, itemEntity, actionsData);
	}
	template <typename T = float> static T GetWeaponDPS(GameEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x14CB69C))(0, entity, world);
	}
	template <typename T = float> static T GetWeaponAttackPerSecond(GameEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x14CB8C4))(0, entity, world);
	}
	template <typename T = bool> static T HasInstanceEffect(ItemDataContext* context, Il2CppString* name) {
		return ((T (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CBAD4))(0, context, name);
	}
	template <typename T = Il2CppString*> static T GetInstantEffectSelf(ItemDataContext* context, Il2CppString* name) {
		return ((T (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CBB4C))(0, context, name);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetInstantEffectTarget(ItemDataContext* context, Il2CppString* name) {
		return ((T (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CBBD0))(0, context, name);
	}
	template <typename T = Il2CppString*> static T GetInstantEffectTrail(ItemDataContext* context, Il2CppString* name) {
		return ((T (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CBC54))(0, context, name);
	}
	template <typename T = float> static T GetAuraRadius(ItemDataContext* context, Il2CppString* name) {
		return ((T (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CBCD8))(0, context, name);
	}
	template <typename T = bool> static T IsSkillShot(ItemEntity* item) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x14CBD6C))(0, item);
	}
	template <typename T = ItemEntity*> static T GetNextSkill(ItemDataContext* context, ItemEntity* skill, int32_t level) {
		return ((T (*)(void *, ItemDataContext*, ItemEntity*, int32_t))(Il2CppBase() + 0x14CBDC4))(0, context, skill, level);
	}
	template <typename T = Il2CppString*> static T GetNextSkillName(ItemDataContext* context, Il2CppString* skillName, int32_t level) {
		return ((T (*)(void *, ItemDataContext*, Il2CppString*, int32_t))(Il2CppBase() + 0x14CBEEC))(0, context, skillName, level);
	}
	template <typename T = bool> static T IsCurrency(ItemDataContext* context, Il2CppString* name) {
		return ((T (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CBFB4))(0, context, name);
	}
	template <typename T = bool> static T IsDropable(ItemDataContext* context, Il2CppString* name) {
		return ((T (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CC060))(0, context, name);
	}
	template <typename T = int64_t> static T GetShieldSeconds(ItemDataContext* context, Il2CppString* itemName) {
		return ((T (*)(void *, ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x14CC0A4))(0, context, itemName);
	}

};

