#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsEntity"));
	}

	template <typename T = FirstTimeComponent*> static T& firstTimeComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = OftenComponent*> static T& oftenComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = ActionComponent*> T get_action() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A0930))(this);
	}
	template <typename T = bool> T get_hasAction() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A09B8))(this);
	}
	template <typename T = void> T AddAction(Il2CppString* newValue) {
		return ((T (*)(AnalyticsEntity*, Il2CppString*))(Il2CppBase() + 0x12A09C4))(this, newValue);
	}
	template <typename T = void> T ReplaceAction(Il2CppString* newValue) {
		return ((T (*)(AnalyticsEntity*, Il2CppString*))(Il2CppBase() + 0x12A0AD8))(this, newValue);
	}
	template <typename T = void> T RemoveAction() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A0BEC))(this);
	}
	template <typename T = AnalyticsSystemComponent*> T get_analyticsSystem() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A0BF8))(this);
	}
	template <typename T = bool> T get_hasAnalyticsSystem() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A0C80))(this);
	}
	template <typename T = void> T AddAnalyticsSystem(AnalyticsSystem* newType) {
		return ((T (*)(AnalyticsEntity*, AnalyticsSystem*))(Il2CppBase() + 0x12A0C8C))(this, newType);
	}
	template <typename T = void> T ReplaceAnalyticsSystem(AnalyticsSystem* newType) {
		return ((T (*)(AnalyticsEntity*, AnalyticsSystem*))(Il2CppBase() + 0x12A0D90))(this, newType);
	}
	template <typename T = void> T RemoveAnalyticsSystem() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A0E94))(this);
	}
	template <typename T = CreationTimeComponent*> T get_creationTime() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A0EA0))(this);
	}
	template <typename T = bool> T get_hasCreationTime() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A0F28))(this);
	}
	template <typename T = void> T AddCreationTime(int64_t newValue) {
		return ((T (*)(AnalyticsEntity*, int64_t))(Il2CppBase() + 0x12A0F34))(this, newValue);
	}
	template <typename T = void> T ReplaceCreationTime(int64_t newValue) {
		return ((T (*)(AnalyticsEntity*, int64_t))(Il2CppBase() + 0x12A1038))(this, newValue);
	}
	template <typename T = void> T RemoveCreationTime() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A113C))(this);
	}
	template <typename T = EventNameComponent*> T get_eventName() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1148))(this);
	}
	template <typename T = bool> T get_hasEventName() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x129E930))(this);
	}
	template <typename T = void> T AddEventName(Il2CppString* newValue) {
		return ((T (*)(AnalyticsEntity*, Il2CppString*))(Il2CppBase() + 0x12A11D0))(this, newValue);
	}
	template <typename T = void> T ReplaceEventName(Il2CppString* newValue) {
		return ((T (*)(AnalyticsEntity*, Il2CppString*))(Il2CppBase() + 0x12A12E4))(this, newValue);
	}
	template <typename T = void> T RemoveEventName() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A13F8))(this);
	}
	template <typename T = bool> T get_isFirstTime() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1404))(this);
	}
	template <typename T = void> T set_isFirstTime(bool value) {
		return ((T (*)(AnalyticsEntity*, bool))(Il2CppBase() + 0x12A1410))(this, value);
	}
	template <typename T = LabelComponent*> T get_label() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1528))(this);
	}
	template <typename T = bool> T get_hasLabel() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A15B0))(this);
	}
	template <typename T = void> T AddLabel(Il2CppString* newValue) {
		return ((T (*)(AnalyticsEntity*, Il2CppString*))(Il2CppBase() + 0x12A15BC))(this, newValue);
	}
	template <typename T = void> T ReplaceLabel(Il2CppString* newValue) {
		return ((T (*)(AnalyticsEntity*, Il2CppString*))(Il2CppBase() + 0x12A16D0))(this, newValue);
	}
	template <typename T = void> T RemoveLabel() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A17E4))(this);
	}
	template <typename T = bool> T get_isOften() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A17F0))(this);
	}
	template <typename T = void> T set_isOften(bool value) {
		return ((T (*)(AnalyticsEntity*, bool))(Il2CppBase() + 0x12A17FC))(this, value);
	}
	template <typename T = PlayerLevelComponent*> T get_playerLevel() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1914))(this);
	}
	template <typename T = bool> T get_hasPlayerLevel() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x129E93C))(this);
	}
	template <typename T = void> T AddPlayerLevel(int32_t newValue) {
		return ((T (*)(AnalyticsEntity*, int32_t))(Il2CppBase() + 0x129EB90))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerLevel(int32_t newValue) {
		return ((T (*)(AnalyticsEntity*, int32_t))(Il2CppBase() + 0x12A199C))(this, newValue);
	}
	template <typename T = void> T RemovePlayerLevel() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1AA0))(this);
	}
	template <typename T = SublabelComponent*> T get_sublabel() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1AAC))(this);
	}
	template <typename T = bool> T get_hasSublabel() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1B34))(this);
	}
	template <typename T = void> T AddSublabel(Il2CppString* newValue) {
		return ((T (*)(AnalyticsEntity*, Il2CppString*))(Il2CppBase() + 0x12A1B40))(this, newValue);
	}
	template <typename T = void> T ReplaceSublabel(Il2CppString* newValue) {
		return ((T (*)(AnalyticsEntity*, Il2CppString*))(Il2CppBase() + 0x12A1C54))(this, newValue);
	}
	template <typename T = void> T RemoveSublabel() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1D68))(this);
	}
	template <typename T = ValueComponent*> T get_value() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1D74))(this);
	}
	template <typename T = bool> T get_hasValue() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1DFC))(this);
	}
	template <typename T = void> T AddValue(int64_t newValue) {
		return ((T (*)(AnalyticsEntity*, int64_t))(Il2CppBase() + 0x12A1E08))(this, newValue);
	}
	template <typename T = void> T ReplaceValue(int64_t newValue) {
		return ((T (*)(AnalyticsEntity*, int64_t))(Il2CppBase() + 0x12A1F0C))(this, newValue);
	}
	template <typename T = void> T RemoveValue() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A2010))(this);
	}
	template <typename T = ValueTwoComponent*> T get_valueTwo() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A201C))(this);
	}
	template <typename T = bool> T get_hasValueTwo() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A20A4))(this);
	}
	template <typename T = void> T AddValueTwo(int64_t newValue) {
		return ((T (*)(AnalyticsEntity*, int64_t))(Il2CppBase() + 0x12A20B0))(this, newValue);
	}
	template <typename T = void> T ReplaceValueTwo(int64_t newValue) {
		return ((T (*)(AnalyticsEntity*, int64_t))(Il2CppBase() + 0x12A21B4))(this, newValue);
	}
	template <typename T = void> T RemoveValueTwo() {
		return ((T (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A22B8))(this);
	}

};

