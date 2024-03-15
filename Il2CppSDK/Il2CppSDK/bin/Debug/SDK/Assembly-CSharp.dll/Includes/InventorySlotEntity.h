#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventorySlotEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventorySlotEntity"));
	}

	template <typename R = BroadcastComponent*> static R& broadcastComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ExternalInventory*> static R& externalInventoryComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = MountSlotComponent*> static R& mountSlotComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = RuneSlotComponent*> static R& runeSlotComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123A3A8))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123A76C))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123A760))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(InventorySlotEntity*, Il2CppString*))(Il2CppBase() + 0x123A888))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(InventorySlotEntity*, Il2CppString*))(Il2CppBase() + 0x123A99C))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123AAB0))(this);
	}
	template <typename R = bool> R get_isBroadcast() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123AABC))(this);
	}
	template <typename R = void> R set_isBroadcast(bool value) {
		return ((R (*)(InventorySlotEntity*, bool))(Il2CppBase() + 0x123AAC8))(this, value);
	}
	template <typename R = DefaultItemComponent*> R get_defaultItem() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123ABE0))(this);
	}
	template <typename R = bool> R get_hasDefaultItem() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123AC68))(this);
	}
	template <typename R = void> R AddDefaultItem(Il2CppString* newName) {
		return ((R (*)(InventorySlotEntity*, Il2CppString*))(Il2CppBase() + 0x123AC74))(this, newName);
	}
	template <typename R = void> R ReplaceDefaultItem(Il2CppString* newName) {
		return ((R (*)(InventorySlotEntity*, Il2CppString*))(Il2CppBase() + 0x123AD88))(this, newName);
	}
	template <typename R = void> R RemoveDefaultItem() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123AE9C))(this);
	}
	template <typename R = DurabilityCoefComponent*> R get_durabilityCoef() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123AEA8))(this);
	}
	template <typename R = bool> R get_hasDurabilityCoef() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123AF30))(this);
	}
	template <typename R = void> R AddDurabilityCoef(float newValue) {
		return ((R (*)(InventorySlotEntity*, float))(Il2CppBase() + 0x123AF3C))(this, newValue);
	}
	template <typename R = void> R ReplaceDurabilityCoef(float newValue) {
		return ((R (*)(InventorySlotEntity*, float))(Il2CppBase() + 0x123B040))(this, newValue);
	}
	template <typename R = void> R RemoveDurabilityCoef() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B144))(this);
	}
	template <typename R = DurabilityTickComponent*> R get_durabilityTick() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B150))(this);
	}
	template <typename R = bool> R get_hasDurabilityTick() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B1D8))(this);
	}
	template <typename R = void> R AddDurabilityTick(int64_t newValue, float newResidue) {
		return ((R (*)(InventorySlotEntity*, int64_t, float))(Il2CppBase() + 0x123B1E4))(this, newValue, newResidue);
	}
	template <typename R = void> R ReplaceDurabilityTick(int64_t newValue, float newResidue) {
		return ((R (*)(InventorySlotEntity*, int64_t, float))(Il2CppBase() + 0x123B2F8))(this, newValue, newResidue);
	}
	template <typename R = void> R RemoveDurabilityTick() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B40C))(this);
	}
	template <typename R = bool> R get_isExternalInventory() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B418))(this);
	}
	template <typename R = void> R set_isExternalInventory(bool value) {
		return ((R (*)(InventorySlotEntity*, bool))(Il2CppBase() + 0x1238658))(this, value);
	}
	template <typename R = IdComponent*> R get_id() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123A800))(this);
	}
	template <typename R = bool> R get_hasId() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123A7F4))(this);
	}
	template <typename R = void> R AddId(int32_t newValue) {
		return ((R (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x1237E04))(this, newValue);
	}
	template <typename R = void> R ReplaceId(int32_t newValue) {
		return ((R (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123B424))(this, newValue);
	}
	template <typename R = void> R RemoveId() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B528))(this);
	}
	template <typename R = InventoryIndexComponent*> R get_inventoryIndex() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123225C))(this);
	}
	template <typename R = bool> R get_hasInventoryIndex() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B534))(this);
	}
	template <typename R = void> R AddInventoryIndex(int32_t newValue) {
		return ((R (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123800C))(this, newValue);
	}
	template <typename R = void> R ReplaceInventoryIndex(int32_t newValue) {
		return ((R (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123B540))(this, newValue);
	}
	template <typename R = void> R RemoveInventoryIndex() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B644))(this);
	}
	template <typename R = ItemConditionComponent*> R get_itemCondition() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B650))(this);
	}
	template <typename R = bool> R get_hasItemCondition() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B6D8))(this);
	}
	template <typename R = void> R AddItemCondition(bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<Il2CppString*>* newAnyTags, Il2CppString* newNoTag, EquipmentType newEquipmentType) {
		return ((R (*)(InventorySlotEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, EquipmentType))(Il2CppBase() + 0x123B6E4))(this, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename R = void> R ReplaceItemCondition(bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<Il2CppString*>* newAnyTags, Il2CppString* newNoTag, EquipmentType newEquipmentType) {
		return ((R (*)(InventorySlotEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, EquipmentType))(Il2CppBase() + 0x123B858))(this, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename R = void> R RemoveItemCondition() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B9CC))(this);
	}
	template <typename R = MailStackComponent*> R get_mailStack() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123B9D8))(this);
	}
	template <typename R = bool> R get_hasMailStack() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123BA60))(this);
	}
	template <typename R = void> R AddMailStack(int32_t newValue) {
		return ((R (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123BA6C))(this, newValue);
	}
	template <typename R = void> R ReplaceMailStack(int32_t newValue) {
		return ((R (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123BB70))(this, newValue);
	}
	template <typename R = void> R RemoveMailStack() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123BC74))(this);
	}
	template <typename R = bool> R get_isMountSlot() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123BC80))(this);
	}
	template <typename R = void> R set_isMountSlot(bool value) {
		return ((R (*)(InventorySlotEntity*, bool))(Il2CppBase() + 0x123BC8C))(this, value);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123BDA4))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123BE2C))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(InventorySlotEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x123BE38))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(InventorySlotEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x123BF4C))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C060))(this);
	}
	template <typename R = OwnerComponent*> R get_owner() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C06C))(this);
	}
	template <typename R = bool> R get_hasOwner() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C0F4))(this);
	}
	template <typename R = void> R AddOwner(int64_t newId) {
		return ((R (*)(InventorySlotEntity*, int64_t))(Il2CppBase() + 0x1238554))(this, newId);
	}
	template <typename R = void> R ReplaceOwner(int64_t newId) {
		return ((R (*)(InventorySlotEntity*, int64_t))(Il2CppBase() + 0x123C100))(this, newId);
	}
	template <typename R = void> R RemoveOwner() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C204))(this);
	}
	template <typename R = ParentComponent*> R get_parent() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C210))(this);
	}
	template <typename R = bool> R get_hasParent() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C298))(this);
	}
	template <typename R = void> R AddParent(int32_t newId) {
		return ((R (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x1237F08))(this, newId);
	}
	template <typename R = void> R ReplaceParent(int32_t newId) {
		return ((R (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123C2A4))(this, newId);
	}
	template <typename R = void> R RemoveParent() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C3A8))(this);
	}
	template <typename R = PersonalComponent*> R get_personal() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C3B4))(this);
	}
	template <typename R = bool> R get_hasPersonal() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C43C))(this);
	}
	template <typename R = void> R AddPersonal(int64_t newPlayerId) {
		return ((R (*)(InventorySlotEntity*, int64_t))(Il2CppBase() + 0x123C448))(this, newPlayerId);
	}
	template <typename R = void> R ReplacePersonal(int64_t newPlayerId) {
		return ((R (*)(InventorySlotEntity*, int64_t))(Il2CppBase() + 0x1238110))(this, newPlayerId);
	}
	template <typename R = void> R RemovePersonal() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C54C))(this);
	}
	template <typename R = PetSlotComponent*> R get_petSlot() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C558))(this);
	}
	template <typename R = bool> R get_hasPetSlot() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C5E0))(this);
	}
	template <typename R = void> R AddPetSlot(Il2CppString* newType) {
		return ((R (*)(InventorySlotEntity*, Il2CppString*))(Il2CppBase() + 0x123C5EC))(this, newType);
	}
	template <typename R = void> R ReplacePetSlot(Il2CppString* newType) {
		return ((R (*)(InventorySlotEntity*, Il2CppString*))(Il2CppBase() + 0x123C700))(this, newType);
	}
	template <typename R = void> R RemovePetSlot() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C814))(this);
	}
	template <typename R = bool> R get_isRuneSlot() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123C820))(this);
	}
	template <typename R = void> R set_isRuneSlot(bool value) {
		return ((R (*)(InventorySlotEntity*, bool))(Il2CppBase() + 0x123C82C))(this, value);
	}
	template <typename R = StackComponent*> R get_stack() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x1230FE0))(this);
	}
	template <typename R = bool> R get_hasStack() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x1234224))(this);
	}
	template <typename R = void> R AddStack(Il2CppString* newResource, int32_t newCount, Nullable1<int64_t>* newSignature) {
		return ((R (*)(InventorySlotEntity*, Il2CppString*, int32_t, Nullable1<int64_t>*))(Il2CppBase() + 0x123C944))(this, newResource, newCount, newSignature);
	}
	template <typename R = void> R ReplaceStack(Il2CppString* newResource, int32_t newCount, Nullable1<int64_t>* newSignature) {
		return ((R (*)(InventorySlotEntity*, Il2CppString*, int32_t, Nullable1<int64_t>*))(Il2CppBase() + 0x1238214))(this, newResource, newCount, newSignature);
	}
	template <typename R = void> R RemoveStack() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123CA74))(this);
	}
	template <typename R = StackCountComponent*> R get_stackCount() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123CA80))(this);
	}
	template <typename R = bool> R get_hasStackCount() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123CB08))(this);
	}
	template <typename R = void> R AddStackCount(int32_t newValue) {
		return ((R (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123CB14))(this, newValue);
	}
	template <typename R = void> R ReplaceStackCount(int32_t newValue) {
		return ((R (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123CC18))(this, newValue);
	}
	template <typename R = void> R RemoveStackCount() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123CD1C))(this);
	}
	template <typename R = TagsComponent*> R get_tags() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123CD28))(this);
	}
	template <typename R = bool> R get_hasTags() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123CDB0))(this);
	}
	template <typename R = void> R AddTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(InventorySlotEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x123CDBC))(this, newValues);
	}
	template <typename R = void> R ReplaceTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(InventorySlotEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x123CED0))(this, newValues);
	}
	template <typename R = void> R RemoveTags() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123CFE4))(this);
	}
	template <typename R = TargetComponent*> R get_target() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123CFF0))(this);
	}
	template <typename R = bool> R get_hasTarget() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123D078))(this);
	}
	template <typename R = void> R AddTarget(int32_t newId) {
		return ((R (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123D084))(this, newId);
	}
	template <typename R = void> R ReplaceTarget(int32_t newId) {
		return ((R (*)(InventorySlotEntity*, int32_t))(Il2CppBase() + 0x123D188))(this, newId);
	}
	template <typename R = void> R RemoveTarget() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123D28C))(this);
	}
	template <typename R = UpdateTimeComponent*> R get_updateTime() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123D298))(this);
	}
	template <typename R = bool> R get_hasUpdateTime() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123D320))(this);
	}
	template <typename R = void> R AddUpdateTime(int64_t newValue) {
		return ((R (*)(InventorySlotEntity*, int64_t))(Il2CppBase() + 0x123D32C))(this, newValue);
	}
	template <typename R = void> R ReplaceUpdateTime(int64_t newValue) {
		return ((R (*)(InventorySlotEntity*, int64_t))(Il2CppBase() + 0x123D430))(this, newValue);
	}
	template <typename R = void> R RemoveUpdateTime() {
		return ((R (*)(InventorySlotEntity*))(Il2CppBase() + 0x123D534))(this);
	}

};

