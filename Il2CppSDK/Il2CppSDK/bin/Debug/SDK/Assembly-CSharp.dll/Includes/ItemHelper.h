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
	template <typename T = float> static T GetPower(Il2CppString* name, uintptr_t contexts) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x14C955C))(0, name, contexts);
	}
	template <typename T = float> static T GetPower_1(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14C9664))(0, item);
	}
	template <typename T = float> static T GetAddPlayerClassProgress(uintptr_t itemEntity, uintptr_t progressType, uintptr_t classType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x14C96B8))(0, itemEntity, progressType, classType);
	}
	template <typename T = uintptr_t> static T ToItemEntity(Il2CppString* itemName, uintptr_t world) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x14C9760))(0, itemName, world);
	}
	template <typename T = bool> static T ShowNotActive(uintptr_t item, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x14C982C))(0, item, world, actor);
	}
	template <typename T = bool> static T ShowNotActive_1(uintptr_t slot, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x14C9A48))(0, slot, world, actor);
	}
	template <typename T = bool> static T HasGradeUpToItem(uintptr_t itemEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14C9B34))(0, itemEntity);
	}
	template <typename T = bool> static T IsCostume(uintptr_t itemEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14C9B90))(0, itemEntity);
	}
	template <typename T = bool> static T IsDefaultAvailable(uintptr_t itemEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14C9BE0))(0, itemEntity);
	}
	template <typename T = bool> static T IsCosmeticAvailable(uintptr_t itemEntity, uintptr_t account) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x14C9C30))(0, itemEntity, account);
	}
	template <typename T = bool> static T IsCosmeticAvailable_1(uintptr_t itemEntity, Il2CppDictionary<Il2CppString*, bool>* availableCosmetics) {
		return ((T (*)(void *, uintptr_t, Il2CppDictionary<Il2CppString*, bool>*))(Il2CppBase() + 0x14C9CD8))(0, itemEntity, availableCosmetics);
	}
	template <typename T = bool> static T IsCosmeticNew(uintptr_t itemEntity, Il2CppDictionary<Il2CppString*, bool>* availableCosmetics) {
		return ((T (*)(void *, uintptr_t, Il2CppDictionary<Il2CppString*, bool>*))(Il2CppBase() + 0x14C9DA4))(0, itemEntity, availableCosmetics);
	}
	template <typename T = uintptr_t> static T GetEquipmentType(uintptr_t itemEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14C9E68))(0, itemEntity);
	}
	template <typename T = bool> static T IsClassAvailable(uintptr_t classEntity, int64_t playerId, uintptr_t contexts) {
		return ((T (*)(void *, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x14C9EB4))(0, classEntity, playerId, contexts);
	}
	template <typename T = bool> static T CanProgressClass(uintptr_t classEntity, int64_t playerId, uintptr_t contexts, uintptr_t progressType) {
		return ((T (*)(void *, uintptr_t, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x14C9FD8))(0, classEntity, playerId, contexts, progressType);
	}
	template <typename T = bool> static T IsFirstClass(uintptr_t classEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14CA114))(0, classEntity);
	}
	template <typename T = void*> static T IsInfinityBattlePassStep(uintptr_t bpEntity, int32_t currentCurrencyValue) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x14CA190))(0, bpEntity, currentCurrencyValue);
	}
	template <typename T = bool> static T CheckActive(uintptr_t itemEntity, uintptr_t actor, uintptr_t contexts) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x14CA2D4))(0, itemEntity, actor, contexts);
	}
	template <typename T = uintptr_t> static T GetItem(uintptr_t entity, uintptr_t contexts) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x14CA4D8))(0, entity, contexts);
	}
	template <typename T = int32_t> static T GetStackCount(uintptr_t context, Il2CppString* name, uintptr_t slot) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x14CA6B0))(0, context, name, slot);
	}
	template <typename T = int32_t> static T GetStackCountInSlot(uintptr_t item, uintptr_t slot) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x14CA790))(0, item, slot);
	}
	template <typename T = uintptr_t> static T GetRarity(uintptr_t rarityEntity, uintptr_t defaultRarity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x14CA80C))(0, rarityEntity, defaultRarity);
	}
	template <typename T = float> static T GetMaxDurability(uintptr_t context, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14CA938))(0, context, name);
	}
	template <typename T = int32_t> static T GetSlotCount(uintptr_t context, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14CA994))(0, context, name);
	}
	template <typename T = int32_t> static T GetGrade(uintptr_t gradeEntity, int32_t defaultValue) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x14CA9F4))(0, gradeEntity, defaultValue);
	}
	template <typename T = int32_t> static T GetMaxGrade(uintptr_t gradeEntity, int32_t defaultValue) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x14CAB20))(0, gradeEntity, defaultValue);
	}
	template <typename T = void> static T FillEquipMagics(uintptr_t item, uintptr_t world, Il2CppList<uintptr_t>* buffer, void* predicate) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*, void*))(Il2CppBase() + 0x14CAB6C))(0, item, world, buffer, predicate);
	}
	template <typename T = bool> static T CanPutTo(uintptr_t item, int32_t inventoryIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x14CAE60))(0, item, inventoryIndex);
	}
	template <typename T = bool> static T CanUserInteractWithInventorySlot(uintptr_t user, int32_t inventoryIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x14CAF34))(0, user, inventoryIndex);
	}
	template <typename T = bool> static T CanPutToPocket(uintptr_t context, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14CAFA8))(0, context, name);
	}
	template <typename T = Il2CppString*> static T GetDescriptionCaption(uintptr_t world, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14CB074))(0, world, name);
	}
	template <typename T = Il2CppString*> static T GetDescriptionCaption_1(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14CB18C))(0, entity);
	}
	template <typename T = Il2CppString*> static T GetDescriptionText(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14CB28C))(0, entity);
	}
	template <typename T = float> static T GetWeaponDamage(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x14CB30C))(0, entity, world);
	}
	template <typename T = float> static T GetWeaponSneakDamage(uintptr_t entity, uintptr_t world, bool pvp) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x14CB46C))(0, entity, world, pvp);
	}
	template <typename T = float> static T GetAttackPerSecond(uintptr_t itemEntity, uintptr_t actionsData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x14CB5C8))(0, itemEntity, actionsData);
	}
	template <typename T = float> static T GetWeaponDPS(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x14CB69C))(0, entity, world);
	}
	template <typename T = float> static T GetWeaponAttackPerSecond(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x14CB8C4))(0, entity, world);
	}
	template <typename T = bool> static T HasInstanceEffect(uintptr_t context, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14CBAD4))(0, context, name);
	}
	template <typename T = Il2CppString*> static T GetInstantEffectSelf(uintptr_t context, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14CBB4C))(0, context, name);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetInstantEffectTarget(uintptr_t context, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14CBBD0))(0, context, name);
	}
	template <typename T = Il2CppString*> static T GetInstantEffectTrail(uintptr_t context, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14CBC54))(0, context, name);
	}
	template <typename T = float> static T GetAuraRadius(uintptr_t context, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14CBCD8))(0, context, name);
	}
	template <typename T = bool> static T IsSkillShot(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14CBD6C))(0, item);
	}
	template <typename T = uintptr_t> static T GetNextSkill(uintptr_t context, uintptr_t skill, int32_t level) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x14CBDC4))(0, context, skill, level);
	}
	template <typename T = Il2CppString*> static T GetNextSkillName(uintptr_t context, Il2CppString* skillName, int32_t level) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x14CBEEC))(0, context, skillName, level);
	}
	template <typename T = bool> static T IsCurrency(uintptr_t context, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14CBFB4))(0, context, name);
	}
	template <typename T = bool> static T IsDropable(uintptr_t context, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14CC060))(0, context, name);
	}
	template <typename T = int64_t> static T GetShieldSeconds(uintptr_t context, Il2CppString* itemName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14CC0A4))(0, context, itemName);
	}

};

}
