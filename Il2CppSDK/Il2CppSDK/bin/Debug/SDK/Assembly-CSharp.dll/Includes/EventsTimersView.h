#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventsTimersView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventsTimersView"));
	}

	template <typename T = uintptr_t> T& _showEventsTimers() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _days() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _months() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _years() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _hours() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _minutes() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _startYear() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _scroll() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = EventTimerCheatItem*> T& _itemPrefab() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<EventTimerCheatItem*>*> T& _items() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& _seasonPrefix() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& _seasonOBTPrefix() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& _seasonQAPrefix() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& _seasonCyclicPrefix() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& _seasonCyclicOBTPrefix() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& _seasonCyclicQAPrefix() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& _bpCyclicPrefix() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& _bpSDCyclicPrefix() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& _bpOBTCyclicPrefix() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& _bpQACyclicPrefix() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& _bpSDOBTCyclicPrefix() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& _bpSDQACyclicPrefix() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& _bpPrefix() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& _bpSDPrefix() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& _bpOBTPrefix() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppString*> T& _bpQAPrefix() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> T& _bpSDOBTPrefix() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppString*> T& _bpSDQAPrefix() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppString*> T& _tempBuffPrefix() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& _tempBuffOBTPrefix() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> T& _tempBuffQAPrefix() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& _tempBuffCyclicPrefix() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppString*> T& _tempBuffCyclicOBTPrefix() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> T& _tempBuffCyclicQAPrefix() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppString*> T& _storePrefix() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppString*> T& _storeSeasonPrefix() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int64_t> T& _lastSelectedTime() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> T& _day() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& _daysInMounth() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& _month() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& _year() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = int32_t> T& _hour() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = int32_t> T& _minute() {
		return *(T*)((uintptr_t)this + 0x154);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EventsTimersView*))(Il2CppBase() + 0x1792194))(this);
	}
	template <typename T = void> T InitDropdowns() {
		return ((T (*)(EventsTimersView*))(Il2CppBase() + 0x1792238))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetValuesList(int32_t startValue, int32_t count) {
		return ((T (*)(EventsTimersView*, int32_t, int32_t))(Il2CppBase() + 0x179261C))(this, startValue, count);
	}
	template <typename T = void> T OnMonthChanged(int32_t mounthIndex) {
		return ((T (*)(EventsTimersView*, int32_t))(Il2CppBase() + 0x1792718))(this, mounthIndex);
	}
	template <typename T = void> T OnYearChanged(int32_t yearIndex) {
		return ((T (*)(EventsTimersView*, int32_t))(Il2CppBase() + 0x1792828))(this, yearIndex);
	}
	template <typename T = void> T CheckDaysInMonth() {
		return ((T (*)(EventsTimersView*))(Il2CppBase() + 0x1792724))(this);
	}
	template <typename T = uintptr_t> T GetSelectedDateTime() {
		return ((T (*)(EventsTimersView*))(Il2CppBase() + 0x1792838))(this);
	}
	template <typename T = int64_t> T GetSelectedDateTimeTicks() {
		return ((T (*)(EventsTimersView*))(Il2CppBase() + 0x179287C))(this);
	}
	template <typename T = void> T ShowTimers() {
		return ((T (*)(EventsTimersView*))(Il2CppBase() + 0x17928D0))(this);
	}
	template <typename T = void> T ShowSeasons(uintptr_t itemIndex, int64_t selectedTime) {
		return ((T (*)(EventsTimersView*, uintptr_t, int64_t))(Il2CppBase() + 0x1792A60))(this, itemIndex, selectedTime);
	}
	template <typename T = void> T ShowBattlePasses(uintptr_t itemIndex, int64_t selectedTime) {
		return ((T (*)(EventsTimersView*, uintptr_t, int64_t))(Il2CppBase() + 0x1792F58))(this, itemIndex, selectedTime);
	}
	template <typename T = void> T ShowTempBuffs(uintptr_t itemIndex, int64_t selectedTime) {
		return ((T (*)(EventsTimersView*, uintptr_t, int64_t))(Il2CppBase() + 0x1793748))(this, itemIndex, selectedTime);
	}
	template <typename T = void> T ShowStoreProducts(uintptr_t itemIndex, int64_t selectedTime) {
		return ((T (*)(EventsTimersView*, uintptr_t, int64_t))(Il2CppBase() + 0x1793B78))(this, itemIndex, selectedTime);
	}
	template <typename T = bool> T AddITemporaryEntityIfNeeded(Il2CppString* blueprint, Icon* icon, int64_t selectedTime, int64_t startTime, int64_t endTime, Il2CppString* prefix, int32_t itemIndex) {
		return ((T (*)(EventsTimersView*, Il2CppString*, Icon*, int64_t, int64_t, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1794184))(this, blueprint, icon, selectedTime, startTime, endTime, prefix, itemIndex);
	}
	template <typename T = void> T AddItemIfNeed(int32_t itemIndex) {
		return ((T (*)(EventsTimersView*, int32_t))(Il2CppBase() + 0x1794290))(this, itemIndex);
	}
	template <typename T = void> T InitDropdownsb__44_0(int32_t index) {
		return ((T (*)(EventsTimersView*, int32_t))(Il2CppBase() + 0x17947BC))(this, index);
	}
	template <typename T = void> T InitDropdownsb__44_1(int32_t index) {
		return ((T (*)(EventsTimersView*, int32_t))(Il2CppBase() + 0x17947C8))(this, index);
	}
	template <typename T = void> T InitDropdownsb__44_2(int32_t index) {
		return ((T (*)(EventsTimersView*, int32_t))(Il2CppBase() + 0x17947D0))(this, index);
	}

};

