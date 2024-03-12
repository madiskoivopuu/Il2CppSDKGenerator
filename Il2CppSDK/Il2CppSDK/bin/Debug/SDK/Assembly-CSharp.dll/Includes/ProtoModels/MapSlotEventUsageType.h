#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MapSlotEventUsageType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MapSlotEventUsageType"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LastDayStatsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lastDayStats_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& LastDayCountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& lastDayCount_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& LastCallTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lastCallTime_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& PveIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& pveID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& GlobalCountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& globalCount_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& EventTagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& eventTag_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& EnterCountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& enterCount_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& LastTimeLocationResetFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lastTimeLocationReset_() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12C4D1C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12C4D80))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C4EA0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C4FC8))(this);
	}
	template <typename T = int64_t> T get_LastDayStats() {
		return ((T (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C5024))(this);
	}
	template <typename T = void> T set_LastDayStats(int64_t value) {
		return ((T (*)(MapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x12C502C))(this, value);
	}
	template <typename T = int32_t> T get_LastDayCount() {
		return ((T (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C5034))(this);
	}
	template <typename T = void> T set_LastDayCount(int32_t value) {
		return ((T (*)(MapSlotEventUsageType*, int32_t))(Il2CppBase() + 0x12C503C))(this, value);
	}
	template <typename T = int64_t> T get_LastCallTime() {
		return ((T (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C5044))(this);
	}
	template <typename T = void> T set_LastCallTime(int64_t value) {
		return ((T (*)(MapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x12C504C))(this, value);
	}
	template <typename T = int64_t> T get_PveID() {
		return ((T (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C5054))(this);
	}
	template <typename T = void> T set_PveID(int64_t value) {
		return ((T (*)(MapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x12C505C))(this, value);
	}
	template <typename T = int32_t> T get_GlobalCount() {
		return ((T (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C5064))(this);
	}
	template <typename T = void> T set_GlobalCount(int32_t value) {
		return ((T (*)(MapSlotEventUsageType*, int32_t))(Il2CppBase() + 0x12C506C))(this, value);
	}
	template <typename T = Il2CppString*> T get_EventTag() {
		return ((T (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C5074))(this);
	}
	template <typename T = void> T set_EventTag(Il2CppString* value) {
		return ((T (*)(MapSlotEventUsageType*, Il2CppString*))(Il2CppBase() + 0x12C507C))(this, value);
	}
	template <typename T = int32_t> T get_EnterCount() {
		return ((T (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C50FC))(this);
	}
	template <typename T = void> T set_EnterCount(int32_t value) {
		return ((T (*)(MapSlotEventUsageType*, int32_t))(Il2CppBase() + 0x12C5104))(this, value);
	}
	template <typename T = int64_t> T get_LastTimeLocationReset() {
		return ((T (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C510C))(this);
	}
	template <typename T = void> T set_LastTimeLocationReset(int64_t value) {
		return ((T (*)(MapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x12C5114))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(MapSlotEventUsageType*, uintptr_t))(Il2CppBase() + 0x12C511C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(MapSlotEventUsageType*, uintptr_t))(Il2CppBase() + 0x12C518C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C524C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C536C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(MapSlotEventUsageType*, uintptr_t))(Il2CppBase() + 0x12C53D0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C5564))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(MapSlotEventUsageType*, uintptr_t))(Il2CppBase() + 0x12C5794))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(MapSlotEventUsageType*, uintptr_t))(Il2CppBase() + 0x12C5828))(this, input);
	}

};

}
