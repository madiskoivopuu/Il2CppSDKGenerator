#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicTriggerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerEntity"));
	}


	template <typename R = Il2CppString*> R get_DataName() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A441E8))(this);
	}
	template <typename R = MagicTriggerDataEntity*> R get_Data() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A31E3C))(this);
	}
	template <typename R = void> R AddData(Il2CppString* name, MagicTriggerDataEntity* data) {
		return ((R (*)(MagicTriggerEntity*, Il2CppString*, MagicTriggerDataEntity*))(Il2CppBase() + 0x1A442C4))(this, name, data);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A443F0))(this);
	}
	template <typename R = ActiveComponent*> R get_active() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A446C8))(this);
	}
	template <typename R = bool> R get_hasActive() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44750))(this);
	}
	template <typename R = void> R AddActive(bool newValue) {
		return ((R (*)(MagicTriggerEntity*, bool))(Il2CppBase() + 0x1A4475C))(this, newValue);
	}
	template <typename R = void> R ReplaceActive(bool newValue) {
		return ((R (*)(MagicTriggerEntity*, bool))(Il2CppBase() + 0x1A44864))(this, newValue);
	}
	template <typename R = void> R RemoveActive() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A4496C))(this);
	}
	template <typename R = ActorComponent*> R get_actor() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44978))(this);
	}
	template <typename R = bool> R get_hasActor() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44A00))(this);
	}
	template <typename R = void> R AddActor(int32_t newId) {
		return ((R (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A32190))(this, newId);
	}
	template <typename R = void> R ReplaceActor(int32_t newId) {
		return ((R (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A44A0C))(this, newId);
	}
	template <typename R = void> R RemoveActor() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44B10))(this);
	}
	template <typename R = ChanceComponent*> R get_chance() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44B1C))(this);
	}
	template <typename R = bool> R get_hasChance() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44BA4))(this);
	}
	template <typename R = void> R AddChance(float newValue, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicTriggerEntity*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A44BB0))(this, newValue, newName, newNames);
	}
	template <typename R = void> R ReplaceChance(float newValue, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicTriggerEntity*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A44CE8))(this, newValue, newName, newNames);
	}
	template <typename R = void> R RemoveChance() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44E20))(this);
	}
	template <typename R = IdComponent*> R get_id() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44640))(this);
	}
	template <typename R = bool> R get_hasId() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44634))(this);
	}
	template <typename R = void> R AddId(int32_t newValue) {
		return ((R (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A31E84))(this, newValue);
	}
	template <typename R = void> R ReplaceId(int32_t newValue) {
		return ((R (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A44E2C))(this, newValue);
	}
	template <typename R = void> R RemoveId() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44F30))(this);
	}
	template <typename R = ItemComponent*> R get_item() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44F3C))(this);
	}
	template <typename R = bool> R get_hasItem() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44FC4))(this);
	}
	template <typename R = void> R AddItem(Il2CppString* newName) {
		return ((R (*)(MagicTriggerEntity*, Il2CppString*))(Il2CppBase() + 0x1A44FD0))(this, newName);
	}
	template <typename R = void> R ReplaceItem(Il2CppString* newName) {
		return ((R (*)(MagicTriggerEntity*, Il2CppString*))(Il2CppBase() + 0x1A32294))(this, newName);
	}
	template <typename R = void> R RemoveItem() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A450E4))(this);
	}
	template <typename R = MagicTriggerDataComponent*> R get_magicTriggerData() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A4423C))(this);
	}
	template <typename R = bool> R get_hasMagicTriggerData() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44230))(this);
	}
	template <typename R = void> R AddMagicTriggerData(Il2CppString* newName, MagicTriggerDataEntity* newDataEntity) {
		return ((R (*)(MagicTriggerEntity*, Il2CppString*, MagicTriggerDataEntity*))(Il2CppBase() + 0x1A450F0))(this, newName, newDataEntity);
	}
	template <typename R = void> R ReplaceMagicTriggerData(Il2CppString* newName, MagicTriggerDataEntity* newDataEntity) {
		return ((R (*)(MagicTriggerEntity*, Il2CppString*, MagicTriggerDataEntity*))(Il2CppBase() + 0x1A442C8))(this, newName, newDataEntity);
	}
	template <typename R = void> R RemoveMagicTriggerData() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45218))(this);
	}
	template <typename R = MagicTriggerIdComponent*> R get_magicTriggerId() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45224))(this);
	}
	template <typename R = bool> R get_hasMagicTriggerId() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A452AC))(this);
	}
	template <typename R = void> R AddMagicTriggerId(int32_t newId) {
		return ((R (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A452B8))(this, newId);
	}
	template <typename R = void> R ReplaceMagicTriggerId(int32_t newId) {
		return ((R (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A453BC))(this, newId);
	}
	template <typename R = void> R RemoveMagicTriggerId() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A454C0))(this);
	}
	template <typename R = ParentComponent*> R get_parent() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A454CC))(this);
	}
	template <typename R = bool> R get_hasParent() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45554))(this);
	}
	template <typename R = void> R AddParent(int32_t newId) {
		return ((R (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A31F88))(this, newId);
	}
	template <typename R = void> R ReplaceParent(int32_t newId) {
		return ((R (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A45560))(this, newId);
	}
	template <typename R = void> R RemoveParent() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45664))(this);
	}
	template <typename R = ResetSkipTimeComponent*> R get_resetSkipTime() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45670))(this);
	}
	template <typename R = bool> R get_hasResetSkipTime() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A456F8))(this);
	}
	template <typename R = void> R AddResetSkipTime(int64_t newValue) {
		return ((R (*)(MagicTriggerEntity*, int64_t))(Il2CppBase() + 0x1A45704))(this, newValue);
	}
	template <typename R = void> R ReplaceResetSkipTime(int64_t newValue) {
		return ((R (*)(MagicTriggerEntity*, int64_t))(Il2CppBase() + 0x1A45808))(this, newValue);
	}
	template <typename R = void> R RemoveResetSkipTime() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A4590C))(this);
	}
	template <typename R = SkipCountComponent*> R get_skipCount() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45918))(this);
	}
	template <typename R = bool> R get_hasSkipCount() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A459A0))(this);
	}
	template <typename R = void> R AddSkipCount(int32_t newValue) {
		return ((R (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A459AC))(this, newValue);
	}
	template <typename R = void> R ReplaceSkipCount(int32_t newValue) {
		return ((R (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A45AB0))(this, newValue);
	}
	template <typename R = void> R RemoveSkipCount() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45BB4))(this);
	}
	template <typename R = TargetComponent*> R get_target() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A30434))(this);
	}
	template <typename R = bool> R get_hasTarget() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A30428))(this);
	}
	template <typename R = void> R AddTarget(int32_t newId) {
		return ((R (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A3208C))(this, newId);
	}
	template <typename R = void> R ReplaceTarget(int32_t newId) {
		return ((R (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A45BC0))(this, newId);
	}
	template <typename R = void> R RemoveTarget() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45CC4))(this);
	}
	template <typename R = UseCountComponent*> R get_useCount() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45CD0))(this);
	}
	template <typename R = bool> R get_hasUseCount() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A31E30))(this);
	}
	template <typename R = void> R AddUseCount(int32_t newValue) {
		return ((R (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A45D58))(this, newValue);
	}
	template <typename R = void> R ReplaceUseCount(int32_t newValue) {
		return ((R (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A45E5C))(this, newValue);
	}
	template <typename R = void> R RemoveUseCount() {
		return ((R (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45F60))(this);
	}

};

