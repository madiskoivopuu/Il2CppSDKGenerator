#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Store2Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Store2Entity"));
	}

	template <typename R = VisibleComponent*> static R& visibleComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x14138A8))(this);
	}
	template <typename R = AvailabilityEndComponent*> R get_availabilityEnd() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1413C3C))(this);
	}
	template <typename R = bool> R get_hasAvailabilityEnd() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1413CC4))(this);
	}
	template <typename R = void> R AddAvailabilityEnd(int64_t newValue) {
		return ((R (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1413CD0))(this, newValue);
	}
	template <typename R = void> R ReplaceAvailabilityEnd(int64_t newValue) {
		return ((R (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1413DD4))(this, newValue);
	}
	template <typename R = void> R RemoveAvailabilityEnd() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1413ED8))(this);
	}
	template <typename R = AvailabilityStartComponent*> R get_availabilityStart() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1413EE4))(this);
	}
	template <typename R = bool> R get_hasAvailabilityStart() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1413F6C))(this);
	}
	template <typename R = void> R AddAvailabilityStart(int64_t newValue) {
		return ((R (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1413F78))(this, newValue);
	}
	template <typename R = void> R ReplaceAvailabilityStart(int64_t newValue) {
		return ((R (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x141407C))(this, newValue);
	}
	template <typename R = void> R RemoveAvailabilityStart() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1414180))(this);
	}
	template <typename R = CountLeftComponent*> R get_countLeft() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x141418C))(this);
	}
	template <typename R = bool> R get_hasCountLeft() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1414214))(this);
	}
	template <typename R = void> R AddCountLeft(int32_t newValue) {
		return ((R (*)(Store2Entity*, int32_t))(Il2CppBase() + 0x1414220))(this, newValue);
	}
	template <typename R = void> R ReplaceCountLeft(int32_t newValue) {
		return ((R (*)(Store2Entity*, int32_t))(Il2CppBase() + 0x1414324))(this, newValue);
	}
	template <typename R = void> R RemoveCountLeft() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1414428))(this);
	}
	template <typename R = GachaProgressComponent*> R get_gachaProgress() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1414434))(this);
	}
	template <typename R = bool> R get_hasGachaProgress() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x14144BC))(this);
	}
	template <typename R = void> R AddGachaProgress(int32_t newCount, Il2CppArray<GachaResources*>* newData) {
		return ((R (*)(Store2Entity*, int32_t, Il2CppArray<GachaResources*>*))(Il2CppBase() + 0x14144C8))(this, newCount, newData);
	}
	template <typename R = void> R ReplaceGachaProgress(int32_t newCount, Il2CppArray<GachaResources*>* newData) {
		return ((R (*)(Store2Entity*, int32_t, Il2CppArray<GachaResources*>*))(Il2CppBase() + 0x14145E4))(this, newCount, newData);
	}
	template <typename R = void> R RemoveGachaProgress() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1414700))(this);
	}
	template <typename R = PlayerIdComponent*> R get_playerId() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x141470C))(this);
	}
	template <typename R = bool> R get_hasPlayerId() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1414794))(this);
	}
	template <typename R = void> R AddPlayerId(int64_t newValue) {
		return ((R (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1406E2C))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerId(int64_t newValue) {
		return ((R (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x14147A0))(this, newValue);
	}
	template <typename R = void> R RemovePlayerId() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x14148A4))(this);
	}
	template <typename R = ResetTimeComponent*> R get_resetTime() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x14148B0))(this);
	}
	template <typename R = bool> R get_hasResetTime() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1414938))(this);
	}
	template <typename R = void> R AddResetTime(int64_t newValue) {
		return ((R (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1414944))(this, newValue);
	}
	template <typename R = void> R ReplaceResetTime(int64_t newValue) {
		return ((R (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1414A48))(this, newValue);
	}
	template <typename R = void> R RemoveResetTime() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1414B4C))(this);
	}
	template <typename R = SlotsProgressComponent*> R get_slotsProgress() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1414B58))(this);
	}
	template <typename R = bool> R get_hasSlotsProgress() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1414BE0))(this);
	}
	template <typename R = void> R AddSlotsProgress(Il2CppArray<Resource*>* newData) {
		return ((R (*)(Store2Entity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x1414BEC))(this, newData);
	}
	template <typename R = void> R ReplaceSlotsProgress(Il2CppArray<Resource*>* newData) {
		return ((R (*)(Store2Entity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x1414D00))(this, newData);
	}
	template <typename R = void> R RemoveSlotsProgress() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1414E14))(this);
	}
	template <typename R = StoreDataIdComponent*> R get_storeDataId() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1413B20))(this);
	}
	template <typename R = bool> R get_hasStoreDataId() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1413B14))(this);
	}
	template <typename R = void> R AddStoreDataId(int64_t newId) {
		return ((R (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1406F30))(this, newId);
	}
	template <typename R = void> R ReplaceStoreDataId(int64_t newId) {
		return ((R (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1414E20))(this, newId);
	}
	template <typename R = void> R RemoveStoreDataId() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1414F24))(this);
	}
	template <typename R = StoreExpComponent*> R get_storeExp() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1414F30))(this);
	}
	template <typename R = bool> R get_hasStoreExp() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1414FB8))(this);
	}
	template <typename R = void> R AddStoreExp(uint32_t newValue) {
		return ((R (*)(Store2Entity*, uint32_t))(Il2CppBase() + 0x1414FC4))(this, newValue);
	}
	template <typename R = void> R ReplaceStoreExp(uint32_t newValue) {
		return ((R (*)(Store2Entity*, uint32_t))(Il2CppBase() + 0x14150C8))(this, newValue);
	}
	template <typename R = void> R RemoveStoreExp() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x14151CC))(this);
	}
	template <typename R = StoreIdComponent*> R get_storeId() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1413BB4))(this);
	}
	template <typename R = bool> R get_hasStoreId() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x1413BA8))(this);
	}
	template <typename R = void> R AddStoreId(int64_t newId) {
		return ((R (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1406D28))(this, newId);
	}
	template <typename R = void> R ReplaceStoreId(int64_t newId) {
		return ((R (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x14151D8))(this, newId);
	}
	template <typename R = void> R RemoveStoreId() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x14152DC))(this);
	}
	template <typename R = bool> R get_isVisible() {
		return ((R (*)(Store2Entity*))(Il2CppBase() + 0x14152E8))(this);
	}
	template <typename R = void> R set_isVisible(bool value) {
		return ((R (*)(Store2Entity*, bool))(Il2CppBase() + 0x14152F4))(this, value);
	}

};

