#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalMapPveSaveType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalMapPveSaveType"));
	}

	template <typename T = MessageParser1GlobalMapPveSaveType*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MapSlotIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mapSlotID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& MapPveIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mapPveID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& EndTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endTime_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& EventTagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& eventTag_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1GlobalMapPveSaveType*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12D8A94))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12D8AF8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8C18))(this);
	}
	template <typename T = GlobalMapPveSaveType*> T Clone() {
		return ((T (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8D1C))(this);
	}
	template <typename T = int64_t> T get_MapSlotID() {
		return ((T (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8D78))(this);
	}
	template <typename T = void> T set_MapSlotID(int64_t value) {
		return ((T (*)(GlobalMapPveSaveType*, int64_t))(Il2CppBase() + 0x12D8D80))(this, value);
	}
	template <typename T = int64_t> T get_MapPveID() {
		return ((T (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8D88))(this);
	}
	template <typename T = void> T set_MapPveID(int64_t value) {
		return ((T (*)(GlobalMapPveSaveType*, int64_t))(Il2CppBase() + 0x12D8D90))(this, value);
	}
	template <typename T = int64_t> T get_EndTime() {
		return ((T (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8D98))(this);
	}
	template <typename T = void> T set_EndTime(int64_t value) {
		return ((T (*)(GlobalMapPveSaveType*, int64_t))(Il2CppBase() + 0x12D8DA0))(this, value);
	}
	template <typename T = Il2CppString*> T get_EventTag() {
		return ((T (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8DA8))(this);
	}
	template <typename T = void> T set_EventTag(Il2CppString* value) {
		return ((T (*)(GlobalMapPveSaveType*, Il2CppString*))(Il2CppBase() + 0x12D8DB0))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GlobalMapPveSaveType*, Il2CppObject*))(Il2CppBase() + 0x12D8E30))(this, other);
	}
	template <typename T = bool> T Equals_1(GlobalMapPveSaveType* other) {
		return ((T (*)(GlobalMapPveSaveType*, GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8EA0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8F14))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D8FC0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GlobalMapPveSaveType*, uintptr_t))(Il2CppBase() + 0x12D9024))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GlobalMapPveSaveType*))(Il2CppBase() + 0x12D9108))(this);
	}
	template <typename T = void> T MergeFrom(GlobalMapPveSaveType* other) {
		return ((T (*)(GlobalMapPveSaveType*, GlobalMapPveSaveType*))(Il2CppBase() + 0x12D9248))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GlobalMapPveSaveType*, uintptr_t))(Il2CppBase() + 0x12D9294))(this, input);
	}

};

}
