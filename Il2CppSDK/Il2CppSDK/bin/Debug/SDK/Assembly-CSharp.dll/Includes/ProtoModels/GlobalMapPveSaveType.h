#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalMapPveSaveType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalMapPveSaveType"));
	}

	 static MessageParser1ProtoModels::GlobalMapPveSaveType*>*& _parser() {
		return *(MessageParser1ProtoModels::GlobalMapPveSaveType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MapSlotIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& mapSlotID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& MapPveIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& mapPveID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& EndTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endTime_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& EventTagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& eventTag_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::GlobalMapPveSaveType*>* get_Parser() {
		return ((MessageParser1ProtoModels::GlobalMapPveSaveType*>* (*)(void *))(Il2CppBase() + 0x12D8A94))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12D8AF8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8C18))(this);
	}
	template <typename R = ProtoModels::GlobalMapPveSaveType*> R Clone() {
		return ((R (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8D1C))(this);
	}
	template <typename R = int64_t> R get_MapSlotID() {
		return ((R (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8D78))(this);
	}
	template <typename R = void> R set_MapSlotID(int64_t value) {
		return ((R (*)(GlobalMapPveSaveType*, int64_t))(Il2CppBase() + 0x12D8D80))(this, value);
	}
	template <typename R = int64_t> R get_MapPveID() {
		return ((R (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8D88))(this);
	}
	template <typename R = void> R set_MapPveID(int64_t value) {
		return ((R (*)(GlobalMapPveSaveType*, int64_t))(Il2CppBase() + 0x12D8D90))(this, value);
	}
	template <typename R = int64_t> R get_EndTime() {
		return ((R (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8D98))(this);
	}
	template <typename R = void> R set_EndTime(int64_t value) {
		return ((R (*)(GlobalMapPveSaveType*, int64_t))(Il2CppBase() + 0x12D8DA0))(this, value);
	}
	template <typename R = Il2CppString*> R get_EventTag() {
		return ((R (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8DA8))(this);
	}
	template <typename R = void> R set_EventTag(Il2CppString* value) {
		return ((R (*)(GlobalMapPveSaveType*, Il2CppString*))(Il2CppBase() + 0x12D8DB0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GlobalMapPveSaveType*, Il2CppObject*))(Il2CppBase() + 0x12D8E30))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GlobalMapPveSaveType* other) {
		return ((R (*)(GlobalMapPveSaveType*, ProtoModels::GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8EA0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8F14))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8FC0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GlobalMapPveSaveType*, uintptr_t))(Il2CppBase() + 0x12D9024))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D9108))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GlobalMapPveSaveType* other) {
		return ((R (*)(GlobalMapPveSaveType*, ProtoModels::GlobalMapPveSaveType*))(Il2CppBase() + 0x12D9248))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GlobalMapPveSaveType*, uintptr_t))(Il2CppBase() + 0x12D9294))(this, input);
	}

};

}
