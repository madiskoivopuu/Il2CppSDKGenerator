#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicTriggerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerEntity"));
	}


	template <typename T = Il2CppString*> T get_DataName() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A441E8))(this);
	}
	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A31E3C))(this);
	}
	template <typename T = void> T AddData(Il2CppString* name, uintptr_t data) {
		return ((T (*)(MagicTriggerEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1A442C4))(this, name, data);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A443F0))(this);
	}
	template <typename T = uintptr_t> T get_active() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A446C8))(this);
	}
	template <typename T = bool> T get_hasActive() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44750))(this);
	}
	template <typename T = void> T AddActive(bool newValue) {
		return ((T (*)(MagicTriggerEntity*, bool))(Il2CppBase() + 0x1A4475C))(this, newValue);
	}
	template <typename T = void> T ReplaceActive(bool newValue) {
		return ((T (*)(MagicTriggerEntity*, bool))(Il2CppBase() + 0x1A44864))(this, newValue);
	}
	template <typename T = void> T RemoveActive() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A4496C))(this);
	}
	template <typename T = uintptr_t> T get_actor() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44978))(this);
	}
	template <typename T = bool> T get_hasActor() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44A00))(this);
	}
	template <typename T = void> T AddActor(int32_t newId) {
		return ((T (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A32190))(this, newId);
	}
	template <typename T = void> T ReplaceActor(int32_t newId) {
		return ((T (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A44A0C))(this, newId);
	}
	template <typename T = void> T RemoveActor() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44B10))(this);
	}
	template <typename T = uintptr_t> T get_chance() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44B1C))(this);
	}
	template <typename T = bool> T get_hasChance() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44BA4))(this);
	}
	template <typename T = void> T AddChance(float newValue, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicTriggerEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A44BB0))(this, newValue, newName, newNames);
	}
	template <typename T = void> T ReplaceChance(float newValue, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicTriggerEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A44CE8))(this, newValue, newName, newNames);
	}
	template <typename T = void> T RemoveChance() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44E20))(this);
	}
	template <typename T = uintptr_t> T get_id() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44640))(this);
	}
	template <typename T = bool> T get_hasId() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44634))(this);
	}
	template <typename T = void> T AddId(int32_t newValue) {
		return ((T (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A31E84))(this, newValue);
	}
	template <typename T = void> T ReplaceId(int32_t newValue) {
		return ((T (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A44E2C))(this, newValue);
	}
	template <typename T = void> T RemoveId() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44F30))(this);
	}
	template <typename T = uintptr_t> T get_item() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44F3C))(this);
	}
	template <typename T = bool> T get_hasItem() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44FC4))(this);
	}
	template <typename T = void> T AddItem(Il2CppString* newName) {
		return ((T (*)(MagicTriggerEntity*, Il2CppString*))(Il2CppBase() + 0x1A44FD0))(this, newName);
	}
	template <typename T = void> T ReplaceItem(Il2CppString* newName) {
		return ((T (*)(MagicTriggerEntity*, Il2CppString*))(Il2CppBase() + 0x1A32294))(this, newName);
	}
	template <typename T = void> T RemoveItem() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A450E4))(this);
	}
	template <typename T = uintptr_t> T get_magicTriggerData() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A4423C))(this);
	}
	template <typename T = bool> T get_hasMagicTriggerData() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A44230))(this);
	}
	template <typename T = void> T AddMagicTriggerData(Il2CppString* newName, uintptr_t newDataEntity) {
		return ((T (*)(MagicTriggerEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1A450F0))(this, newName, newDataEntity);
	}
	template <typename T = void> T ReplaceMagicTriggerData(Il2CppString* newName, uintptr_t newDataEntity) {
		return ((T (*)(MagicTriggerEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1A442C8))(this, newName, newDataEntity);
	}
	template <typename T = void> T RemoveMagicTriggerData() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45218))(this);
	}
	template <typename T = uintptr_t> T get_magicTriggerId() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45224))(this);
	}
	template <typename T = bool> T get_hasMagicTriggerId() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A452AC))(this);
	}
	template <typename T = void> T AddMagicTriggerId(int32_t newId) {
		return ((T (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A452B8))(this, newId);
	}
	template <typename T = void> T ReplaceMagicTriggerId(int32_t newId) {
		return ((T (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A453BC))(this, newId);
	}
	template <typename T = void> T RemoveMagicTriggerId() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A454C0))(this);
	}
	template <typename T = uintptr_t> T get_parent() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A454CC))(this);
	}
	template <typename T = bool> T get_hasParent() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45554))(this);
	}
	template <typename T = void> T AddParent(int32_t newId) {
		return ((T (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A31F88))(this, newId);
	}
	template <typename T = void> T ReplaceParent(int32_t newId) {
		return ((T (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A45560))(this, newId);
	}
	template <typename T = void> T RemoveParent() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45664))(this);
	}
	template <typename T = uintptr_t> T get_resetSkipTime() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45670))(this);
	}
	template <typename T = bool> T get_hasResetSkipTime() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A456F8))(this);
	}
	template <typename T = void> T AddResetSkipTime(int64_t newValue) {
		return ((T (*)(MagicTriggerEntity*, int64_t))(Il2CppBase() + 0x1A45704))(this, newValue);
	}
	template <typename T = void> T ReplaceResetSkipTime(int64_t newValue) {
		return ((T (*)(MagicTriggerEntity*, int64_t))(Il2CppBase() + 0x1A45808))(this, newValue);
	}
	template <typename T = void> T RemoveResetSkipTime() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A4590C))(this);
	}
	template <typename T = uintptr_t> T get_skipCount() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45918))(this);
	}
	template <typename T = bool> T get_hasSkipCount() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A459A0))(this);
	}
	template <typename T = void> T AddSkipCount(int32_t newValue) {
		return ((T (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A459AC))(this, newValue);
	}
	template <typename T = void> T ReplaceSkipCount(int32_t newValue) {
		return ((T (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A45AB0))(this, newValue);
	}
	template <typename T = void> T RemoveSkipCount() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45BB4))(this);
	}
	template <typename T = uintptr_t> T get_target() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A30434))(this);
	}
	template <typename T = bool> T get_hasTarget() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A30428))(this);
	}
	template <typename T = void> T AddTarget(int32_t newId) {
		return ((T (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A3208C))(this, newId);
	}
	template <typename T = void> T ReplaceTarget(int32_t newId) {
		return ((T (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A45BC0))(this, newId);
	}
	template <typename T = void> T RemoveTarget() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45CC4))(this);
	}
	template <typename T = uintptr_t> T get_useCount() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45CD0))(this);
	}
	template <typename T = bool> T get_hasUseCount() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A31E30))(this);
	}
	template <typename T = void> T AddUseCount(int32_t newValue) {
		return ((T (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A45D58))(this, newValue);
	}
	template <typename T = void> T ReplaceUseCount(int32_t newValue) {
		return ((T (*)(MagicTriggerEntity*, int32_t))(Il2CppBase() + 0x1A45E5C))(this, newValue);
	}
	template <typename T = void> T RemoveUseCount() {
		return ((T (*)(MagicTriggerEntity*))(Il2CppBase() + 0x1A45F60))(this);
	}

};

}
