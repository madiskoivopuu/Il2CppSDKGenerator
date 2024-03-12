#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventorySlotEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventorySlotEntity"));
	}

	template <typename T = uintptr_t> static T& broadcastComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& externalInventoryComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& mountSlotComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& runeSlotComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123A3A8))(this);
	}
	template <typename T = uintptr_t> T get_blueprint() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123A76C))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123A760))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(InventorySlotEntity*, Il2CppString*))(Il2CppBase() + 0x123A888))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(InventorySlotEntity*, Il2CppString*))(Il2CppBase() + 0x123A99C))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123AAB0))(this);
	}
	template <typename T = bool> T get_isBroadcast() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123AABC))(this);
	}
	template <typename T = void> T set_isBroadcast(bool value) {
		return ((T (*)(InventorySlotEntity*, bool))(Il2CppBase() + 0x123AAC8))(this, value);
	}
	template <typename T = uintptr_t> T get_defaultItem() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123ABE0))(this);
	}
	template <typename T = bool> T get_hasDefaultItem() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123AC68))(this);
	}
	template <typename T = void> T AddDefaultItem(Il2CppString* newName) {
		return ((T (*)(InventorySlotEntity*, Il2CppString*))(Il2CppBase() + 0x123AC74))(this, newName);
	}
	template <typename T = void> T ReplaceDefaultItem(Il2CppString* newName) {
		return ((T (*)(InventorySlotEntity*, Il2CppString*))(Il2CppBase() + 0x123AD88))(this, newName);
	}
	template <typename T = void> T RemoveDefaultItem() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123AE9C))(this);
	}
	template <typename T = uintptr_t> T get_durabilityCoef() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123AEA8))(this);
	}
	template <typename T = bool> T get_hasDurabilityCoef() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123AF30))(this);
	}
	template <typename T = void> T AddDurabilityCoef(float newValue) {
		return ((T (*)(InventorySlotEntity*, float))(Il2CppBase() + 0x123AF3C))(this, newValue);
	}
	template <typename T = void> T ReplaceDurabilityCoef(float newValue) {
		return ((T (*)(InventorySlotEntity*, float))(Il2CppBase() + 0x123B040))(this, newValue);
	}
	template <typename T = void> T RemoveDurabilityCoef() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B144))(this);
	}
	template <typename T = uintptr_t> T get_durabilityTick() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B150))(this);
	}
	template <typename T = bool> T get_hasDurabilityTick() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B1D8))(this);
	}
	template <typename T = void> T AddDurabilityTick(int64_t newValue, float newResidue) {
		return ((T (*)(InventorySlotEntity*, int64_t, float))(Il2CppBase() + 0x123B1E4))(this, newValue, newResidue);
	}
	template <typename T = void> T ReplaceDurabilityTick(int64_t newValue, float newResidue) {
		return ((T (*)(InventorySlotEntity*, int64_t, float))(Il2CppBase() + 0x123B2F8))(this, newValue, newResidue);
	}
	template <typename T = void> T RemoveDurabilityTick() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B40C))(this);
	}
	template <typename T = bool> T get_isExternalInventory() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B418))(this);
	}
	template <typename T = void> T set_isExternalInventory(bool value) {
		return ((T (*)(InventorySlotEntity*, bool))(Il2CppBase() + 0x1238658))(this, value);
	}
	template <typename T = uintptr_t> T get_id() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123A800))(this);
	}
	template <typename T = bool> T get_hasId() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123A7F4))(this);
	}
	template <typename T = void> T AddId(int32_t newValue) {
		return ((T (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x1237E04))(this, newValue);
	}
	template <typename T = void> T ReplaceId(int32_t newValue) {
		return ((T (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123B424))(this, newValue);
	}
	template <typename T = void> T RemoveId() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B528))(this);
	}
	template <typename T = uintptr_t> T get_inventoryIndex() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123225C))(this);
	}
	template <typename T = bool> T get_hasInventoryIndex() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B534))(this);
	}
	template <typename T = void> T AddInventoryIndex(int32_t newValue) {
		return ((T (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123800C))(this, newValue);
	}
	template <typename T = void> T ReplaceInventoryIndex(int32_t newValue) {
		return ((T (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123B540))(this, newValue);
	}
	template <typename T = void> T RemoveInventoryIndex() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B644))(this);
	}
	template <typename T = uintptr_t> T get_itemCondition() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B650))(this);
	}
	template <typename T = bool> T get_hasItemCondition() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B6D8))(this);
	}
	template <typename T = void> T AddItemCondition(bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<uintptr_t>* newAnyTags, Il2CppString* newNoTag, uintptr_t newEquipmentType) {
		return ((T (*)(InventorySlotEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x123B6E4))(this, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename T = void> T ReplaceItemCondition(bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<uintptr_t>* newAnyTags, Il2CppString* newNoTag, uintptr_t newEquipmentType) {
		return ((T (*)(InventorySlotEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x123B858))(this, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename T = void> T RemoveItemCondition() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B9CC))(this);
	}
	template <typename T = uintptr_t> T get_mailStack() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B9D8))(this);
	}
	template <typename T = bool> T get_hasMailStack() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123BA60))(this);
	}
	template <typename T = void> T AddMailStack(int32_t newValue) {
		return ((T (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123BA6C))(this, newValue);
	}
	template <typename T = void> T ReplaceMailStack(int32_t newValue) {
		return ((T (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123BB70))(this, newValue);
	}
	template <typename T = void> T RemoveMailStack() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123BC74))(this);
	}
	template <typename T = bool> T get_isMountSlot() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123BC80))(this);
	}
	template <typename T = void> T set_isMountSlot(bool value) {
		return ((T (*)(InventorySlotEntity*, bool))(Il2CppBase() + 0x123BC8C))(this, value);
	}
	template <typename T = uintptr_t> T get_oldBlueprint() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123BDA4))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123BE2C))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(InventorySlotEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x123BE38))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(InventorySlotEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x123BF4C))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C060))(this);
	}
	template <typename T = uintptr_t> T get_owner() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C06C))(this);
	}
	template <typename T = bool> T get_hasOwner() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C0F4))(this);
	}
	template <typename T = void> T AddOwner(int64_t newId) {
		return ((T (*)(InventorySlotEntity*, int64_t))(Il2CppBase() + 0x1238554))(this, newId);
	}
	template <typename T = void> T ReplaceOwner(int64_t newId) {
		return ((T (*)(InventorySlotEntity*, int64_t))(Il2CppBase() + 0x123C100))(this, newId);
	}
	template <typename T = void> T RemoveOwner() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C204))(this);
	}
	template <typename T = uintptr_t> T get_parent() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C210))(this);
	}
	template <typename T = bool> T get_hasParent() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C298))(this);
	}
	template <typename T = void> T AddParent(int32_t newId) {
		return ((T (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x1237F08))(this, newId);
	}
	template <typename T = void> T ReplaceParent(int32_t newId) {
		return ((T (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123C2A4))(this, newId);
	}
	template <typename T = void> T RemoveParent() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C3A8))(this);
	}
	template <typename T = uintptr_t> T get_personal() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C3B4))(this);
	}
	template <typename T = bool> T get_hasPersonal() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C43C))(this);
	}
	template <typename T = void> T AddPersonal(int64_t newPlayerId) {
		return ((T (*)(InventorySlotEntity*, int64_t))(Il2CppBase() + 0x123C448))(this, newPlayerId);
	}
	template <typename T = void> T ReplacePersonal(int64_t newPlayerId) {
		return ((T (*)(InventorySlotEntity*, int64_t))(Il2CppBase() + 0x1238110))(this, newPlayerId);
	}
	template <typename T = void> T RemovePersonal() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C54C))(this);
	}
	template <typename T = uintptr_t> T get_petSlot() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C558))(this);
	}
	template <typename T = bool> T get_hasPetSlot() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C5E0))(this);
	}
	template <typename T = void> T AddPetSlot(Il2CppString* newType) {
		return ((T (*)(InventorySlotEntity*, Il2CppString*))(Il2CppBase() + 0x123C5EC))(this, newType);
	}
	template <typename T = void> T ReplacePetSlot(Il2CppString* newType) {
		return ((T (*)(InventorySlotEntity*, Il2CppString*))(Il2CppBase() + 0x123C700))(this, newType);
	}
	template <typename T = void> T RemovePetSlot() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C814))(this);
	}
	template <typename T = bool> T get_isRuneSlot() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C820))(this);
	}
	template <typename T = void> T set_isRuneSlot(bool value) {
		return ((T (*)(InventorySlotEntity*, bool))(Il2CppBase() + 0x123C82C))(this, value);
	}
	template <typename T = uintptr_t> T get_stack() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x1230FE0))(this);
	}
	template <typename T = bool> T get_hasStack() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x1234224))(this);
	}
	template <typename T = void> T AddStack(Il2CppString* newResource, int32_t newCount, void* newSignature) {
		return ((T (*)(InventorySlotEntity*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x123C944))(this, newResource, newCount, newSignature);
	}
	template <typename T = void> T ReplaceStack(Il2CppString* newResource, int32_t newCount, void* newSignature) {
		return ((T (*)(InventorySlotEntity*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x1238214))(this, newResource, newCount, newSignature);
	}
	template <typename T = void> T RemoveStack() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123CA74))(this);
	}
	template <typename T = uintptr_t> T get_stackCount() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123CA80))(this);
	}
	template <typename T = bool> T get_hasStackCount() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123CB08))(this);
	}
	template <typename T = void> T AddStackCount(int32_t newValue) {
		return ((T (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123CB14))(this, newValue);
	}
	template <typename T = void> T ReplaceStackCount(int32_t newValue) {
		return ((T (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123CC18))(this, newValue);
	}
	template <typename T = void> T RemoveStackCount() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123CD1C))(this);
	}
	template <typename T = uintptr_t> T get_tags() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123CD28))(this);
	}
	template <typename T = bool> T get_hasTags() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123CDB0))(this);
	}
	template <typename T = void> T AddTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(InventorySlotEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x123CDBC))(this, newValues);
	}
	template <typename T = void> T ReplaceTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(InventorySlotEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x123CED0))(this, newValues);
	}
	template <typename T = void> T RemoveTags() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123CFE4))(this);
	}
	template <typename T = uintptr_t> T get_target() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123CFF0))(this);
	}
	template <typename T = bool> T get_hasTarget() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123D078))(this);
	}
	template <typename T = void> T AddTarget(int32_t newId) {
		return ((T (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123D084))(this, newId);
	}
	template <typename T = void> T ReplaceTarget(int32_t newId) {
		return ((T (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123D188))(this, newId);
	}
	template <typename T = void> T RemoveTarget() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123D28C))(this);
	}
	template <typename T = uintptr_t> T get_updateTime() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123D298))(this);
	}
	template <typename T = bool> T get_hasUpdateTime() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123D320))(this);
	}
	template <typename T = void> T AddUpdateTime(int64_t newValue) {
		return ((T (*)(InventorySlotEntity*, int64_t))(Il2CppBase() + 0x123D32C))(this, newValue);
	}
	template <typename T = void> T ReplaceUpdateTime(int64_t newValue) {
		return ((T (*)(InventorySlotEntity*, int64_t))(Il2CppBase() + 0x123D430))(this, newValue);
	}
	template <typename T = void> T RemoveUpdateTime() {
		return ((T (*)(InventorySlotEntity*))(Il2CppBase() + 0x123D534))(this);
	}

};

}
