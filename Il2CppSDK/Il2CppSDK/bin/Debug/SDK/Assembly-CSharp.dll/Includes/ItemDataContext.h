#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 
#include "ItemEntity.h" 

class ItemDataContext : public DataContext1<ItemEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemDataContext"));
	}

	template <typename R = PlayerCosmeticsData*> R& PlayerCosmetics() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	 IReadOnlyDictionary2<CurrencyType, ValueTuple2<int32_t, int32_t>*>*& MinMaxBpPoints() {
		return *(IReadOnlyDictionary2<CurrencyType, ValueTuple2<int32_t, int32_t>*>**)((uintptr_t)this + 0x118);
	}
	 Il2CppDictionary<int32_t, int32_t>*& _giantExtraLevelByStep() {
		return *(Il2CppDictionary<int32_t, int32_t>**)((uintptr_t)this + 0x120);
	}
	template <typename R = ActionDataContext*> R& _actionData() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	 Il2CppDictionary<CurrencyType, Il2CppDictionary<int32_t, int32_t>*>*& _battlePassPointsForStep() {
		return *(Il2CppDictionary<CurrencyType, Il2CppDictionary<int32_t, int32_t>*>**)((uintptr_t)this + 0x130);
	}
	 EntityIndex2<ItemEntity*, EquipmentType>*& _equipmentIndex() {
		return *(EntityIndex2<ItemEntity*, EquipmentType>**)((uintptr_t)this + 0x138);
	}
	 EntityIndex2<ItemEntity*, Il2CppString*>*& _tagsIndex() {
		return *(EntityIndex2<ItemEntity*, Il2CppString*>**)((uintptr_t)this + 0x140);
	}
	 PrimaryEntityIndex2<ItemEntity*, CurrencyType>*& _currencyTypeIndex() {
		return *(PrimaryEntityIndex2<ItemEntity*, CurrencyType>**)((uintptr_t)this + 0x148);
	}
	 PrimaryEntityIndex2<ItemEntity*, Il2CppString*>*& _shortNameIndex() {
		return *(PrimaryEntityIndex2<ItemEntity*, Il2CppString*>**)((uintptr_t)this + 0x150);
	}
	 EntityIndex2<ItemEntity*, CurrencyType>*& _battleBassIndex() {
		return *(EntityIndex2<ItemEntity*, CurrencyType>**)((uintptr_t)this + 0x158);
	}
	 EntityIndex2<ItemEntity*, Il2CppString*>*& _equipSetIndex() {
		return *(EntityIndex2<ItemEntity*, Il2CppString*>**)((uintptr_t)this + 0x160);
	}
	 EntityIndex2<ItemEntity*, PlayerClassType>*& _playerClassTypeIndex() {
		return *(EntityIndex2<ItemEntity*, PlayerClassType>**)((uintptr_t)this + 0x168);
	}
	 EntityIndex2<ItemEntity*, Il2CppString*>*& _classWithQuestIndex() {
		return *(EntityIndex2<ItemEntity*, Il2CppString*>**)((uintptr_t)this + 0x170);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R& _emptyStrings() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = PlayerCosmeticsData*> R get_PlayerCosmetics() {
		return ((R (*)(ItemDataContext*))(Il2CppBase() + 0x10EE7A4))(this);
	}
	template <typename R = void> R set_PlayerCosmetics(PlayerCosmeticsData* value) {
		return ((R (*)(ItemDataContext*, PlayerCosmeticsData*))(Il2CppBase() + 0x10EE7AC))(this, value);
	}
	 IReadOnlyDictionary2<CurrencyType, ValueTuple2<int32_t, int32_t>*>* get_MinMaxBpPoints() {
		return ((IReadOnlyDictionary2<CurrencyType, ValueTuple2<int32_t, int32_t>*>* (*)(ItemDataContext*))(Il2CppBase() + 0x10EE7BC))(this);
	}
	template <typename R = void> R set_MinMaxBpPoints(IReadOnlyDictionary2<CurrencyType, ValueTuple2<int32_t, int32_t>*>* value) {
		return ((R (*)(ItemDataContext*, IReadOnlyDictionary2<CurrencyType, ValueTuple2<int32_t, int32_t>*>*))(Il2CppBase() + 0x10EE7C4))(this, value);
	}
	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(ItemDataContext*))(Il2CppBase() + 0x10EE9A8))(this);
	}
	 HashSet1<ItemEntity*>* GetEntititesByEquipSet(Il2CppString* setName) {
		return ((HashSet1<ItemEntity*>* (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10EF758))(this, setName);
	}
	 HashSet1<ItemEntity*>* GetEntitiesWithEquipment(EquipmentType Type) {
		return ((HashSet1<ItemEntity*>* (*)(ItemDataContext*, EquipmentType))(Il2CppBase() + 0x10EF7E0))(this, Type);
	}
	 HashSet1<ItemEntity*>* GetEntitiesWithTag(Il2CppString* tag) {
		return ((HashSet1<ItemEntity*>* (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10EF844))(this, tag);
	}
	template <typename R = ItemEntity*> R GetEntityWithCurrencyType(CurrencyType type) {
		return ((R (*)(ItemDataContext*, CurrencyType))(Il2CppBase() + 0x10EF8A8))(this, type);
	}
	 HashSet1<ItemEntity*>* GetPlayerClassesByType(PlayerClassType classType) {
		return ((HashSet1<ItemEntity*>* (*)(ItemDataContext*, PlayerClassType))(Il2CppBase() + 0x10EF90C))(this, classType);
	}
	 HashSet1<ItemEntity*>* GetEntitiesWithBattlePassCurrencyType(CurrencyType type) {
		return ((HashSet1<ItemEntity*>* (*)(ItemDataContext*, CurrencyType))(Il2CppBase() + 0x10EF970))(this, type);
	}
	template <typename R = ItemEntity*> R GetEntityWithBlueprintOrAsh(Il2CppString* name) {
		return ((R (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10EF9D4))(this, name);
	}
	template <typename R = ItemEntity*> R GetEntityWithBlueprintOrNull(Il2CppString* name) {
		return ((R (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10EFA64))(this, name);
	}
	template <typename R = ItemEntity*> R GetEntityWithShortName(Il2CppString* name) {
		return ((R (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10F20AC))(this, name);
	}
	template <typename R = bool> R IsMorphed(Il2CppString* itemName) {
		return ((R (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10F2110))(this, itemName);
	}
	 ValueTuple3<bool, Il2CppString*, Il2CppString*>* GetMorphingParts(Il2CppString* itemName) {
		return ((ValueTuple3<bool, Il2CppString*, Il2CppString*>* (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10EFBD0))(this, itemName);
	}
	template <typename R = ItemEntity*> R MorphingWeapon(ItemEntity* baseItem, Il2CppString* sourceItemName) {
		return ((R (*)(ItemDataContext*, ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10EFD80))(this, baseItem, sourceItemName);
	}
	template <typename R = ItemEntity*> R MorphingMount(ItemEntity* baseMountItem, Il2CppString* name, Il2CppString* mountData) {
		return ((R (*)(ItemDataContext*, ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F0FD4))(this, baseMountItem, name, mountData);
	}
	template <typename R = ItemEntity*> R MorphingRune(ItemEntity* baseRuneItem, Il2CppString* name, Il2CppString* runeData) {
		return ((R (*)(ItemDataContext*, ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F15B0))(this, baseRuneItem, name, runeData);
	}
	template <typename R = ItemEntity*> R MorphingPet(ItemEntity* basePetItem, Il2CppString* name, Il2CppString* petData) {
		return ((R (*)(ItemDataContext*, ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F1BB8))(this, basePetItem, name, petData);
	}
	template <typename R = void> R Fill(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints) {
		return ((R (*)(ItemDataContext*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x10F4F94))(this, blueprints);
	}
	template <typename R = void> R FillBattlePass() {
		return ((R (*)(ItemDataContext*))(Il2CppBase() + 0x10F5034))(this);
	}
	template <typename R = void> R CachStepPoint(ItemEntity* bpItem, CurrencyType currencyType) {
		return ((R (*)(ItemDataContext*, ItemEntity*, CurrencyType))(Il2CppBase() + 0x10F5A94))(this, bpItem, currencyType);
	}
	template <typename R = int32_t> R GetExtraLevelCapByGiantStep(int32_t step) {
		return ((R (*)(ItemDataContext*, int32_t))(Il2CppBase() + 0x10F5D08))(this, step);
	}
	 HashSet1<ItemEntity*>* GetClassesWithQuest(Il2CppString* name) {
		return ((HashSet1<ItemEntity*>* (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10F5E28))(this, name);
	}
	template <typename R = int32_t> R GetPointsForBPStep(CurrencyType currencyType, int32_t step) {
		return ((R (*)(ItemDataContext*, CurrencyType, int32_t))(Il2CppBase() + 0x10F5E8C))(this, currencyType, step);
	}

};

