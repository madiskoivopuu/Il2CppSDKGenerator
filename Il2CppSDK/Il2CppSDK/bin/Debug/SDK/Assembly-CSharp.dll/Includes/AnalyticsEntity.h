#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsEntity"));
	}

	template <typename R = FirstTimeComponent*> static R& firstTimeComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = OftenComponent*> static R& oftenComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = ActionComponent*> R get_action() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A0930))(this);
	}
	template <typename R = bool> R get_hasAction() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A09B8))(this);
	}
	template <typename R = void> R AddAction(Il2CppString* newValue) {
		return ((R (*)(AnalyticsEntity*, Il2CppString*))(Il2CppBase() + 0x12A09C4))(this, newValue);
	}
	template <typename R = void> R ReplaceAction(Il2CppString* newValue) {
		return ((R (*)(AnalyticsEntity*, Il2CppString*))(Il2CppBase() + 0x12A0AD8))(this, newValue);
	}
	template <typename R = void> R RemoveAction() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A0BEC))(this);
	}
	template <typename R = AnalyticsSystemComponent*> R get_analyticsSystem() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A0BF8))(this);
	}
	template <typename R = bool> R get_hasAnalyticsSystem() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A0C80))(this);
	}
	template <typename R = void> R AddAnalyticsSystem(AnalyticsSystem newType) {
		return ((R (*)(AnalyticsEntity*, AnalyticsSystem))(Il2CppBase() + 0x12A0C8C))(this, newType);
	}
	template <typename R = void> R ReplaceAnalyticsSystem(AnalyticsSystem newType) {
		return ((R (*)(AnalyticsEntity*, AnalyticsSystem))(Il2CppBase() + 0x12A0D90))(this, newType);
	}
	template <typename R = void> R RemoveAnalyticsSystem() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A0E94))(this);
	}
	template <typename R = CreationTimeComponent*> R get_creationTime() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A0EA0))(this);
	}
	template <typename R = bool> R get_hasCreationTime() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A0F28))(this);
	}
	template <typename R = void> R AddCreationTime(int64_t newValue) {
		return ((R (*)(AnalyticsEntity*, int64_t))(Il2CppBase() + 0x12A0F34))(this, newValue);
	}
	template <typename R = void> R ReplaceCreationTime(int64_t newValue) {
		return ((R (*)(AnalyticsEntity*, int64_t))(Il2CppBase() + 0x12A1038))(this, newValue);
	}
	template <typename R = void> R RemoveCreationTime() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A113C))(this);
	}
	template <typename R = EventNameComponent*> R get_eventName() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1148))(this);
	}
	template <typename R = bool> R get_hasEventName() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x129E930))(this);
	}
	template <typename R = void> R AddEventName(Il2CppString* newValue) {
		return ((R (*)(AnalyticsEntity*, Il2CppString*))(Il2CppBase() + 0x12A11D0))(this, newValue);
	}
	template <typename R = void> R ReplaceEventName(Il2CppString* newValue) {
		return ((R (*)(AnalyticsEntity*, Il2CppString*))(Il2CppBase() + 0x12A12E4))(this, newValue);
	}
	template <typename R = void> R RemoveEventName() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A13F8))(this);
	}
	template <typename R = bool> R get_isFirstTime() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1404))(this);
	}
	template <typename R = void> R set_isFirstTime(bool value) {
		return ((R (*)(AnalyticsEntity*, bool))(Il2CppBase() + 0x12A1410))(this, value);
	}
	template <typename R = LabelComponent*> R get_label() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1528))(this);
	}
	template <typename R = bool> R get_hasLabel() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A15B0))(this);
	}
	template <typename R = void> R AddLabel(Il2CppString* newValue) {
		return ((R (*)(AnalyticsEntity*, Il2CppString*))(Il2CppBase() + 0x12A15BC))(this, newValue);
	}
	template <typename R = void> R ReplaceLabel(Il2CppString* newValue) {
		return ((R (*)(AnalyticsEntity*, Il2CppString*))(Il2CppBase() + 0x12A16D0))(this, newValue);
	}
	template <typename R = void> R RemoveLabel() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A17E4))(this);
	}
	template <typename R = bool> R get_isOften() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A17F0))(this);
	}
	template <typename R = void> R set_isOften(bool value) {
		return ((R (*)(AnalyticsEntity*, bool))(Il2CppBase() + 0x12A17FC))(this, value);
	}
	template <typename R = PlayerLevelComponent*> R get_playerLevel() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1914))(this);
	}
	template <typename R = bool> R get_hasPlayerLevel() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x129E93C))(this);
	}
	template <typename R = void> R AddPlayerLevel(int32_t newValue) {
		return ((R (*)(AnalyticsEntity*, int32_t))(Il2CppBase() + 0x129EB90))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerLevel(int32_t newValue) {
		return ((R (*)(AnalyticsEntity*, int32_t))(Il2CppBase() + 0x12A199C))(this, newValue);
	}
	template <typename R = void> R RemovePlayerLevel() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1AA0))(this);
	}
	template <typename R = SublabelComponent*> R get_sublabel() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1AAC))(this);
	}
	template <typename R = bool> R get_hasSublabel() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1B34))(this);
	}
	template <typename R = void> R AddSublabel(Il2CppString* newValue) {
		return ((R (*)(AnalyticsEntity*, Il2CppString*))(Il2CppBase() + 0x12A1B40))(this, newValue);
	}
	template <typename R = void> R ReplaceSublabel(Il2CppString* newValue) {
		return ((R (*)(AnalyticsEntity*, Il2CppString*))(Il2CppBase() + 0x12A1C54))(this, newValue);
	}
	template <typename R = void> R RemoveSublabel() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1D68))(this);
	}
	template <typename R = ValueComponent*> R get_value() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1D74))(this);
	}
	template <typename R = bool> R get_hasValue() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A1DFC))(this);
	}
	template <typename R = void> R AddValue(int64_t newValue) {
		return ((R (*)(AnalyticsEntity*, int64_t))(Il2CppBase() + 0x12A1E08))(this, newValue);
	}
	template <typename R = void> R ReplaceValue(int64_t newValue) {
		return ((R (*)(AnalyticsEntity*, int64_t))(Il2CppBase() + 0x12A1F0C))(this, newValue);
	}
	template <typename R = void> R RemoveValue() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A2010))(this);
	}
	template <typename R = ValueTwoComponent*> R get_valueTwo() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A201C))(this);
	}
	template <typename R = bool> R get_hasValueTwo() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A20A4))(this);
	}
	template <typename R = void> R AddValueTwo(int64_t newValue) {
		return ((R (*)(AnalyticsEntity*, int64_t))(Il2CppBase() + 0x12A20B0))(this, newValue);
	}
	template <typename R = void> R ReplaceValueTwo(int64_t newValue) {
		return ((R (*)(AnalyticsEntity*, int64_t))(Il2CppBase() + 0x12A21B4))(this, newValue);
	}
	template <typename R = void> R RemoveValueTwo() {
		return ((R (*)(AnalyticsEntity*))(Il2CppBase() + 0x12A22B8))(this);
	}

};

