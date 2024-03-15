#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventsTimersView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventsTimersView"));
	}

	template <typename R = uintptr_t> R& _showEventsTimers() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _days() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _months() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _years() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _hours() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _minutes() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& _startYear() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _scroll() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = EventTimerCheatItem*> R& _itemPrefab() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	 Il2CppList<EventTimerCheatItem*>*& _items() {
		return *(Il2CppList<EventTimerCheatItem*>**)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& _seasonPrefix() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& _seasonOBTPrefix() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppString*> R& _seasonQAPrefix() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = Il2CppString*> R& _seasonCyclicPrefix() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppString*> R& _seasonCyclicOBTPrefix() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppString*> R& _seasonCyclicQAPrefix() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = Il2CppString*> R& _bpCyclicPrefix() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = Il2CppString*> R& _bpSDCyclicPrefix() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = Il2CppString*> R& _bpOBTCyclicPrefix() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = Il2CppString*> R& _bpQACyclicPrefix() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = Il2CppString*> R& _bpSDOBTCyclicPrefix() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = Il2CppString*> R& _bpSDQACyclicPrefix() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = Il2CppString*> R& _bpPrefix() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = Il2CppString*> R& _bpSDPrefix() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = Il2CppString*> R& _bpOBTPrefix() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = Il2CppString*> R& _bpQAPrefix() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = Il2CppString*> R& _bpSDOBTPrefix() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = Il2CppString*> R& _bpSDQAPrefix() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = Il2CppString*> R& _tempBuffPrefix() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = Il2CppString*> R& _tempBuffOBTPrefix() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = Il2CppString*> R& _tempBuffQAPrefix() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = Il2CppString*> R& _tempBuffCyclicPrefix() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = Il2CppString*> R& _tempBuffCyclicOBTPrefix() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = Il2CppString*> R& _tempBuffCyclicQAPrefix() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = Il2CppString*> R& _storePrefix() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = Il2CppString*> R& _storeSeasonPrefix() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = int64_t> R& _lastSelectedTime() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = int32_t> R& _day() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = int32_t> R& _daysInMounth() {
		return *(R*)((uintptr_t)this + 0x144);
	}
	template <typename R = int32_t> R& _month() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = int32_t> R& _year() {
		return *(R*)((uintptr_t)this + 0x14C);
	}
	template <typename R = int32_t> R& _hour() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = int32_t> R& _minute() {
		return *(R*)((uintptr_t)this + 0x154);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(EventsTimersView*))(Il2CppBase() + 0x1792194))(this);
	}
	template <typename R = void> R InitDropdowns() {
		return ((R (*)(EventsTimersView*))(Il2CppBase() + 0x1792238))(this);
	}
	 Il2CppList<Il2CppString*>* GetValuesList(int32_t startValue, int32_t count) {
		return ((Il2CppList<Il2CppString*>* (*)(EventsTimersView*, int32_t, int32_t))(Il2CppBase() + 0x179261C))(this, startValue, count);
	}
	template <typename R = void> R OnMonthChanged(int32_t mounthIndex) {
		return ((R (*)(EventsTimersView*, int32_t))(Il2CppBase() + 0x1792718))(this, mounthIndex);
	}
	template <typename R = void> R OnYearChanged(int32_t yearIndex) {
		return ((R (*)(EventsTimersView*, int32_t))(Il2CppBase() + 0x1792828))(this, yearIndex);
	}
	template <typename R = void> R CheckDaysInMonth() {
		return ((R (*)(EventsTimersView*))(Il2CppBase() + 0x1792724))(this);
	}
	template <typename R = uintptr_t> R GetSelectedDateTime() {
		return ((R (*)(EventsTimersView*))(Il2CppBase() + 0x1792838))(this);
	}
	template <typename R = int64_t> R GetSelectedDateTimeTicks() {
		return ((R (*)(EventsTimersView*))(Il2CppBase() + 0x179287C))(this);
	}
	template <typename R = void> R ShowTimers() {
		return ((R (*)(EventsTimersView*))(Il2CppBase() + 0x17928D0))(this);
	}
	template <typename R = void> R ShowSeasons(uintptr_t itemIndex, int64_t selectedTime) {
		return ((R (*)(EventsTimersView*, uintptr_t, int64_t))(Il2CppBase() + 0x1792A60))(this, itemIndex, selectedTime);
	}
	template <typename R = void> R ShowBattlePasses(uintptr_t itemIndex, int64_t selectedTime) {
		return ((R (*)(EventsTimersView*, uintptr_t, int64_t))(Il2CppBase() + 0x1792F58))(this, itemIndex, selectedTime);
	}
	template <typename R = void> R ShowTempBuffs(uintptr_t itemIndex, int64_t selectedTime) {
		return ((R (*)(EventsTimersView*, uintptr_t, int64_t))(Il2CppBase() + 0x1793748))(this, itemIndex, selectedTime);
	}
	template <typename R = void> R ShowStoreProducts(uintptr_t itemIndex, int64_t selectedTime) {
		return ((R (*)(EventsTimersView*, uintptr_t, int64_t))(Il2CppBase() + 0x1793B78))(this, itemIndex, selectedTime);
	}
	template <typename R = bool> R AddITemporaryEntityIfNeeded(Il2CppString* blueprint, Icon* icon, int64_t selectedTime, int64_t startTime, int64_t endTime, Il2CppString* prefix, int32_t itemIndex) {
		return ((R (*)(EventsTimersView*, Il2CppString*, Icon*, int64_t, int64_t, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1794184))(this, blueprint, icon, selectedTime, startTime, endTime, prefix, itemIndex);
	}
	template <typename R = void> R AddItemIfNeed(int32_t itemIndex) {
		return ((R (*)(EventsTimersView*, int32_t))(Il2CppBase() + 0x1794290))(this, itemIndex);
	}
	template <typename R = void> R InitDropdownsb__44_0(int32_t index) {
		return ((R (*)(EventsTimersView*, int32_t))(Il2CppBase() + 0x17947BC))(this, index);
	}
	template <typename R = void> R InitDropdownsb__44_1(int32_t index) {
		return ((R (*)(EventsTimersView*, int32_t))(Il2CppBase() + 0x17947C8))(this, index);
	}
	template <typename R = void> R InitDropdownsb__44_2(int32_t index) {
		return ((R (*)(EventsTimersView*, int32_t))(Il2CppBase() + 0x17947D0))(this, index);
	}

};

