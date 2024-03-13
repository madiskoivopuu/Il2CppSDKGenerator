#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Store2Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Store2Entity"));
	}

	template <typename T = VisibleComponent*> static T& visibleComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x14138A8))(this);
	}
	template <typename T = AvailabilityEndComponent*> T get_availabilityEnd() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1413C3C))(this);
	}
	template <typename T = bool> T get_hasAvailabilityEnd() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1413CC4))(this);
	}
	template <typename T = void> T AddAvailabilityEnd(int64_t newValue) {
		return ((T (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1413CD0))(this, newValue);
	}
	template <typename T = void> T ReplaceAvailabilityEnd(int64_t newValue) {
		return ((T (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1413DD4))(this, newValue);
	}
	template <typename T = void> T RemoveAvailabilityEnd() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1413ED8))(this);
	}
	template <typename T = AvailabilityStartComponent*> T get_availabilityStart() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1413EE4))(this);
	}
	template <typename T = bool> T get_hasAvailabilityStart() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1413F6C))(this);
	}
	template <typename T = void> T AddAvailabilityStart(int64_t newValue) {
		return ((T (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1413F78))(this, newValue);
	}
	template <typename T = void> T ReplaceAvailabilityStart(int64_t newValue) {
		return ((T (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x141407C))(this, newValue);
	}
	template <typename T = void> T RemoveAvailabilityStart() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1414180))(this);
	}
	template <typename T = CountLeftComponent*> T get_countLeft() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x141418C))(this);
	}
	template <typename T = bool> T get_hasCountLeft() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1414214))(this);
	}
	template <typename T = void> T AddCountLeft(int32_t newValue) {
		return ((T (*)(Store2Entity*, int32_t))(Il2CppBase() + 0x1414220))(this, newValue);
	}
	template <typename T = void> T ReplaceCountLeft(int32_t newValue) {
		return ((T (*)(Store2Entity*, int32_t))(Il2CppBase() + 0x1414324))(this, newValue);
	}
	template <typename T = void> T RemoveCountLeft() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1414428))(this);
	}
	template <typename T = GachaProgressComponent*> T get_gachaProgress() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1414434))(this);
	}
	template <typename T = bool> T get_hasGachaProgress() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x14144BC))(this);
	}
	template <typename T = void> T AddGachaProgress(int32_t newCount, Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(Store2Entity*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14144C8))(this, newCount, newData);
	}
	template <typename T = void> T ReplaceGachaProgress(int32_t newCount, Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(Store2Entity*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14145E4))(this, newCount, newData);
	}
	template <typename T = void> T RemoveGachaProgress() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1414700))(this);
	}
	template <typename T = PlayerIdComponent*> T get_playerId() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x141470C))(this);
	}
	template <typename T = bool> T get_hasPlayerId() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1414794))(this);
	}
	template <typename T = void> T AddPlayerId(int64_t newValue) {
		return ((T (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1406E2C))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerId(int64_t newValue) {
		return ((T (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x14147A0))(this, newValue);
	}
	template <typename T = void> T RemovePlayerId() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x14148A4))(this);
	}
	template <typename T = ResetTimeComponent*> T get_resetTime() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x14148B0))(this);
	}
	template <typename T = bool> T get_hasResetTime() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1414938))(this);
	}
	template <typename T = void> T AddResetTime(int64_t newValue) {
		return ((T (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1414944))(this, newValue);
	}
	template <typename T = void> T ReplaceResetTime(int64_t newValue) {
		return ((T (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1414A48))(this, newValue);
	}
	template <typename T = void> T RemoveResetTime() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1414B4C))(this);
	}
	template <typename T = SlotsProgressComponent*> T get_slotsProgress() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1414B58))(this);
	}
	template <typename T = bool> T get_hasSlotsProgress() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1414BE0))(this);
	}
	template <typename T = void> T AddSlotsProgress(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(Store2Entity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1414BEC))(this, newData);
	}
	template <typename T = void> T ReplaceSlotsProgress(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(Store2Entity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1414D00))(this, newData);
	}
	template <typename T = void> T RemoveSlotsProgress() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1414E14))(this);
	}
	template <typename T = StoreDataIdComponent*> T get_storeDataId() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1413B20))(this);
	}
	template <typename T = bool> T get_hasStoreDataId() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1413B14))(this);
	}
	template <typename T = void> T AddStoreDataId(int64_t newId) {
		return ((T (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1406F30))(this, newId);
	}
	template <typename T = void> T ReplaceStoreDataId(int64_t newId) {
		return ((T (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1414E20))(this, newId);
	}
	template <typename T = void> T RemoveStoreDataId() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1414F24))(this);
	}
	template <typename T = StoreExpComponent*> T get_storeExp() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1414F30))(this);
	}
	template <typename T = bool> T get_hasStoreExp() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1414FB8))(this);
	}
	template <typename T = void> T AddStoreExp(uint32_t newValue) {
		return ((T (*)(Store2Entity*, uint32_t))(Il2CppBase() + 0x1414FC4))(this, newValue);
	}
	template <typename T = void> T ReplaceStoreExp(uint32_t newValue) {
		return ((T (*)(Store2Entity*, uint32_t))(Il2CppBase() + 0x14150C8))(this, newValue);
	}
	template <typename T = void> T RemoveStoreExp() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x14151CC))(this);
	}
	template <typename T = StoreIdComponent*> T get_storeId() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1413BB4))(this);
	}
	template <typename T = bool> T get_hasStoreId() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x1413BA8))(this);
	}
	template <typename T = void> T AddStoreId(int64_t newId) {
		return ((T (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x1406D28))(this, newId);
	}
	template <typename T = void> T ReplaceStoreId(int64_t newId) {
		return ((T (*)(Store2Entity*, int64_t))(Il2CppBase() + 0x14151D8))(this, newId);
	}
	template <typename T = void> T RemoveStoreId() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x14152DC))(this);
	}
	template <typename T = bool> T get_isVisible() {
		return ((T (*)(Store2Entity*))(Il2CppBase() + 0x14152E8))(this);
	}
	template <typename T = void> T set_isVisible(bool value) {
		return ((T (*)(Store2Entity*, bool))(Il2CppBase() + 0x14152F4))(this, value);
	}

};

