#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MapSlotEventUsageType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MapSlotEventUsageType"));
	}

	 static MessageParser1<ProtoModels::MapSlotEventUsageType*>*& _parser() {
		return *(MessageParser1<ProtoModels::MapSlotEventUsageType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& LastDayStatsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lastDayStats_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& LastDayCountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& lastDayCount_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& LastCallTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lastCallTime_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& PveIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& pveID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& GlobalCountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& globalCount_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& EventTagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& eventTag_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& EnterCountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& enterCount_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& LastTimeLocationResetFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lastTimeLocationReset_() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	 static MessageParser1<ProtoModels::MapSlotEventUsageType*>* get_Parser() {
		return ((MessageParser1<ProtoModels::MapSlotEventUsageType*>* (*)(void *))(Il2CppBase() + 0x12C4D1C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12C4D80))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C4EA0))(this);
	}
	template <typename R = ProtoModels::MapSlotEventUsageType*> R Clone() {
		return ((R (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C4FC8))(this);
	}
	template <typename R = int64_t> R get_LastDayStats() {
		return ((R (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C5024))(this);
	}
	template <typename R = void> R set_LastDayStats(int64_t value) {
		return ((R (*)(MapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x12C502C))(this, value);
	}
	template <typename R = int32_t> R get_LastDayCount() {
		return ((R (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C5034))(this);
	}
	template <typename R = void> R set_LastDayCount(int32_t value) {
		return ((R (*)(MapSlotEventUsageType*, int32_t))(Il2CppBase() + 0x12C503C))(this, value);
	}
	template <typename R = int64_t> R get_LastCallTime() {
		return ((R (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C5044))(this);
	}
	template <typename R = void> R set_LastCallTime(int64_t value) {
		return ((R (*)(MapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x12C504C))(this, value);
	}
	template <typename R = int64_t> R get_PveID() {
		return ((R (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C5054))(this);
	}
	template <typename R = void> R set_PveID(int64_t value) {
		return ((R (*)(MapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x12C505C))(this, value);
	}
	template <typename R = int32_t> R get_GlobalCount() {
		return ((R (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C5064))(this);
	}
	template <typename R = void> R set_GlobalCount(int32_t value) {
		return ((R (*)(MapSlotEventUsageType*, int32_t))(Il2CppBase() + 0x12C506C))(this, value);
	}
	template <typename R = Il2CppString*> R get_EventTag() {
		return ((R (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C5074))(this);
	}
	template <typename R = void> R set_EventTag(Il2CppString* value) {
		return ((R (*)(MapSlotEventUsageType*, Il2CppString*))(Il2CppBase() + 0x12C507C))(this, value);
	}
	template <typename R = int32_t> R get_EnterCount() {
		return ((R (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C50FC))(this);
	}
	template <typename R = void> R set_EnterCount(int32_t value) {
		return ((R (*)(MapSlotEventUsageType*, int32_t))(Il2CppBase() + 0x12C5104))(this, value);
	}
	template <typename R = int64_t> R get_LastTimeLocationReset() {
		return ((R (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C510C))(this);
	}
	template <typename R = void> R set_LastTimeLocationReset(int64_t value) {
		return ((R (*)(MapSlotEventUsageType*, int64_t))(Il2CppBase() + 0x12C5114))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(MapSlotEventUsageType*, Il2CppObject*))(Il2CppBase() + 0x12C511C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::MapSlotEventUsageType* other) {
		return ((R (*)(MapSlotEventUsageType*, ProtoModels::MapSlotEventUsageType*))(Il2CppBase() + 0x12C518C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C524C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C536C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(MapSlotEventUsageType*, uintptr_t))(Il2CppBase() + 0x12C53D0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(MapSlotEventUsageType*))(Il2CppBase() + 0x12C5564))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::MapSlotEventUsageType* other) {
		return ((R (*)(MapSlotEventUsageType*, ProtoModels::MapSlotEventUsageType*))(Il2CppBase() + 0x12C5794))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(MapSlotEventUsageType*, uintptr_t))(Il2CppBase() + 0x12C5828))(this, input);
	}

};

}
