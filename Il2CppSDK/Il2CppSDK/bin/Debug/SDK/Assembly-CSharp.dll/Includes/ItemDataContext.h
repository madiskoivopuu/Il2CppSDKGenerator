#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class ItemDataContext : public DataContext1<ItemEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemDataContext"));
	}

	template <typename T = PlayerCosmeticsData*> T& PlayerCosmetics() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = IReadOnlyDictionary2CurrencyType*, ValueTuple2int32_t, int32_t>*>*> T& MinMaxBpPoints() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& _giantExtraLevelByStep() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = ActionDataContext*> T& _actionData() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppDictionary<CurrencyType*, Il2CppDictionary<int32_t, int32_t>*>*> T& _battlePassPointsForStep() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = EntityIndex2ItemEntity*, EquipmentType*>*> T& _equipmentIndex() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = EntityIndex2ItemEntity*, Il2CppString*>*> T& _tagsIndex() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = PrimaryEntityIndex2ItemEntity*, CurrencyType*>*> T& _currencyTypeIndex() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = PrimaryEntityIndex2ItemEntity*, Il2CppString*>*> T& _shortNameIndex() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = EntityIndex2ItemEntity*, CurrencyType*>*> T& _battleBassIndex() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = EntityIndex2ItemEntity*, Il2CppString*>*> T& _equipSetIndex() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = EntityIndex2ItemEntity*, PlayerClassType*>*> T& _playerClassTypeIndex() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = EntityIndex2ItemEntity*, Il2CppString*>*> T& _classWithQuestIndex() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _emptyStrings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = PlayerCosmeticsData*> T get_PlayerCosmetics() {
		return ((T (*)(ItemDataContext*))(Il2CppBase() + 0x10EE7A4))(this);
	}
	template <typename T = void> T set_PlayerCosmetics(PlayerCosmeticsData* value) {
		return ((T (*)(ItemDataContext*, PlayerCosmeticsData*))(Il2CppBase() + 0x10EE7AC))(this, value);
	}
	template <typename T = IReadOnlyDictionary2CurrencyType*, ValueTuple2int32_t, int32_t>*>*> T get_MinMaxBpPoints() {
		return ((T (*)(ItemDataContext*))(Il2CppBase() + 0x10EE7BC))(this);
	}
	template <typename T = void> T set_MinMaxBpPoints(IReadOnlyDictionary2CurrencyType*, ValueTuple2int32_t, int32_t>*>* value) {
		return ((T (*)(ItemDataContext*, IReadOnlyDictionary2CurrencyType*, ValueTuple2int32_t, int32_t>*>*))(Il2CppBase() + 0x10EE7C4))(this, value);
	}
	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(ItemDataContext*))(Il2CppBase() + 0x10EE9A8))(this);
	}
	template <typename T = HashSet1ItemEntity*>*> T GetEntititesByEquipSet(Il2CppString* setName) {
		return ((T (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10EF758))(this, setName);
	}
	template <typename T = HashSet1ItemEntity*>*> T GetEntitiesWithEquipment(EquipmentType* Type) {
		return ((T (*)(ItemDataContext*, EquipmentType*))(Il2CppBase() + 0x10EF7E0))(this, Type);
	}
	template <typename T = HashSet1ItemEntity*>*> T GetEntitiesWithTag(Il2CppString* tag) {
		return ((T (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10EF844))(this, tag);
	}
	template <typename T = ItemEntity*> T GetEntityWithCurrencyType(CurrencyType* type) {
		return ((T (*)(ItemDataContext*, CurrencyType*))(Il2CppBase() + 0x10EF8A8))(this, type);
	}
	template <typename T = HashSet1ItemEntity*>*> T GetPlayerClassesByType(PlayerClassType* classType) {
		return ((T (*)(ItemDataContext*, PlayerClassType*))(Il2CppBase() + 0x10EF90C))(this, classType);
	}
	template <typename T = HashSet1ItemEntity*>*> T GetEntitiesWithBattlePassCurrencyType(CurrencyType* type) {
		return ((T (*)(ItemDataContext*, CurrencyType*))(Il2CppBase() + 0x10EF970))(this, type);
	}
	template <typename T = ItemEntity*> T GetEntityWithBlueprintOrAsh(Il2CppString* name) {
		return ((T (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10EF9D4))(this, name);
	}
	template <typename T = ItemEntity*> T GetEntityWithBlueprintOrNull(Il2CppString* name) {
		return ((T (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10EFA64))(this, name);
	}
	template <typename T = ItemEntity*> T GetEntityWithShortName(Il2CppString* name) {
		return ((T (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10F20AC))(this, name);
	}
	template <typename T = bool> T IsMorphed(Il2CppString* itemName) {
		return ((T (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10F2110))(this, itemName);
	}
	template <typename T = ValueTuple3bool, Il2CppString*, Il2CppString*>*> T GetMorphingParts(Il2CppString* itemName) {
		return ((T (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10EFBD0))(this, itemName);
	}
	template <typename T = ItemEntity*> T MorphingWeapon(ItemEntity* baseItem, Il2CppString* sourceItemName) {
		return ((T (*)(ItemDataContext*, ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10EFD80))(this, baseItem, sourceItemName);
	}
	template <typename T = ItemEntity*> T MorphingMount(ItemEntity* baseMountItem, Il2CppString* name, Il2CppString* mountData) {
		return ((T (*)(ItemDataContext*, ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F0FD4))(this, baseMountItem, name, mountData);
	}
	template <typename T = ItemEntity*> T MorphingRune(ItemEntity* baseRuneItem, Il2CppString* name, Il2CppString* runeData) {
		return ((T (*)(ItemDataContext*, ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F15B0))(this, baseRuneItem, name, runeData);
	}
	template <typename T = ItemEntity*> T MorphingPet(ItemEntity* basePetItem, Il2CppString* name, Il2CppString* petData) {
		return ((T (*)(ItemDataContext*, ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F1BB8))(this, basePetItem, name, petData);
	}
	template <typename T = void> T Fill(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints) {
		return ((T (*)(ItemDataContext*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x10F4F94))(this, blueprints);
	}
	template <typename T = void> T FillBattlePass() {
		return ((T (*)(ItemDataContext*))(Il2CppBase() + 0x10F5034))(this);
	}
	template <typename T = void> T CachStepPoint(ItemEntity* bpItem, CurrencyType* currencyType) {
		return ((T (*)(ItemDataContext*, ItemEntity*, CurrencyType*))(Il2CppBase() + 0x10F5A94))(this, bpItem, currencyType);
	}
	template <typename T = int32_t> T GetExtraLevelCapByGiantStep(int32_t step) {
		return ((T (*)(ItemDataContext*, int32_t))(Il2CppBase() + 0x10F5D08))(this, step);
	}
	template <typename T = HashSet1ItemEntity*>*> T GetClassesWithQuest(Il2CppString* name) {
		return ((T (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10F5E28))(this, name);
	}
	template <typename T = int32_t> T GetPointsForBPStep(CurrencyType* currencyType, int32_t step) {
		return ((T (*)(ItemDataContext*, CurrencyType*, int32_t))(Il2CppBase() + 0x10F5E8C))(this, currencyType, step);
	}

};

