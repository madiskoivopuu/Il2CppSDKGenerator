#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext`1" 

class ItemDataContext: DataContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemDataContext"));
	}

	template <typename T = uintptr_t> T& PlayerCosmetics() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = void*> T& MinMaxBpPoints() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& _giantExtraLevelByStep() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _actionData() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, int32_t>*>*> T& _battlePassPointsForStep() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = void*> T& _equipmentIndex() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = void*> T& _tagsIndex() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = void*> T& _currencyTypeIndex() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = void*> T& _shortNameIndex() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = void*> T& _battleBassIndex() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = void*> T& _equipSetIndex() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = void*> T& _playerClassTypeIndex() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = void*> T& _classWithQuestIndex() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _emptyStrings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_PlayerCosmetics() {
		return ((T (*)(ItemDataContext*))(Il2CppBase() + 0x10EE7A4))(this);
	}
	template <typename T = void> T set_PlayerCosmetics(uintptr_t value) {
		return ((T (*)(ItemDataContext*, uintptr_t))(Il2CppBase() + 0x10EE7AC))(this, value);
	}
	template <typename T = void*> T get_MinMaxBpPoints() {
		return ((T (*)(ItemDataContext*))(Il2CppBase() + 0x10EE7BC))(this);
	}
	template <typename T = void> T set_MinMaxBpPoints(void* value) {
		return ((T (*)(ItemDataContext*, void*))(Il2CppBase() + 0x10EE7C4))(this, value);
	}
	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(ItemDataContext*))(Il2CppBase() + 0x10EE9A8))(this);
	}
	template <typename T = void*> T GetEntititesByEquipSet(Il2CppString* setName) {
		return ((T (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10EF758))(this, setName);
	}
	template <typename T = void*> T GetEntitiesWithEquipment(uintptr_t Type) {
		return ((T (*)(ItemDataContext*, uintptr_t))(Il2CppBase() + 0x10EF7E0))(this, Type);
	}
	template <typename T = void*> T GetEntitiesWithTag(Il2CppString* tag) {
		return ((T (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10EF844))(this, tag);
	}
	template <typename T = uintptr_t> T GetEntityWithCurrencyType(uintptr_t type) {
		return ((T (*)(ItemDataContext*, uintptr_t))(Il2CppBase() + 0x10EF8A8))(this, type);
	}
	template <typename T = void*> T GetPlayerClassesByType(uintptr_t classType) {
		return ((T (*)(ItemDataContext*, uintptr_t))(Il2CppBase() + 0x10EF90C))(this, classType);
	}
	template <typename T = void*> T GetEntitiesWithBattlePassCurrencyType(uintptr_t type) {
		return ((T (*)(ItemDataContext*, uintptr_t))(Il2CppBase() + 0x10EF970))(this, type);
	}
	template <typename T = uintptr_t> T GetEntityWithBlueprintOrAsh(Il2CppString* name) {
		return ((T (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10EF9D4))(this, name);
	}
	template <typename T = uintptr_t> T GetEntityWithBlueprintOrNull(Il2CppString* name) {
		return ((T (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10EFA64))(this, name);
	}
	template <typename T = uintptr_t> T GetEntityWithShortName(Il2CppString* name) {
		return ((T (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10F20AC))(this, name);
	}
	template <typename T = bool> T IsMorphed(Il2CppString* itemName) {
		return ((T (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10F2110))(this, itemName);
	}
	template <typename T = void*> T GetMorphingParts(Il2CppString* itemName) {
		return ((T (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10EFBD0))(this, itemName);
	}
	template <typename T = uintptr_t> T MorphingWeapon(uintptr_t baseItem, Il2CppString* sourceItemName) {
		return ((T (*)(ItemDataContext*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x10EFD80))(this, baseItem, sourceItemName);
	}
	template <typename T = uintptr_t> T MorphingMount(uintptr_t baseMountItem, Il2CppString* name, Il2CppString* mountData) {
		return ((T (*)(ItemDataContext*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F0FD4))(this, baseMountItem, name, mountData);
	}
	template <typename T = uintptr_t> T MorphingRune(uintptr_t baseRuneItem, Il2CppString* name, Il2CppString* runeData) {
		return ((T (*)(ItemDataContext*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F15B0))(this, baseRuneItem, name, runeData);
	}
	template <typename T = uintptr_t> T MorphingPet(uintptr_t basePetItem, Il2CppString* name, Il2CppString* petData) {
		return ((T (*)(ItemDataContext*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F1BB8))(this, basePetItem, name, petData);
	}
	template <typename T = void> T Fill(Il2CppDictionary<Il2CppString*, uintptr_t>* blueprints) {
		return ((T (*)(ItemDataContext*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x10F4F94))(this, blueprints);
	}
	template <typename T = void> T FillBattlePass() {
		return ((T (*)(ItemDataContext*))(Il2CppBase() + 0x10F5034))(this);
	}
	template <typename T = void> T CachStepPoint(uintptr_t bpItem, uintptr_t currencyType) {
		return ((T (*)(ItemDataContext*, uintptr_t, uintptr_t))(Il2CppBase() + 0x10F5A94))(this, bpItem, currencyType);
	}
	template <typename T = int32_t> T GetExtraLevelCapByGiantStep(int32_t step) {
		return ((T (*)(ItemDataContext*, int32_t))(Il2CppBase() + 0x10F5D08))(this, step);
	}
	template <typename T = void*> T GetClassesWithQuest(Il2CppString* name) {
		return ((T (*)(ItemDataContext*, Il2CppString*))(Il2CppBase() + 0x10F5E28))(this, name);
	}
	template <typename T = int32_t> T GetPointsForBPStep(uintptr_t currencyType, int32_t step) {
		return ((T (*)(ItemDataContext*, uintptr_t, int32_t))(Il2CppBase() + 0x10F5E8C))(this, currencyType, step);
	}

};

}
