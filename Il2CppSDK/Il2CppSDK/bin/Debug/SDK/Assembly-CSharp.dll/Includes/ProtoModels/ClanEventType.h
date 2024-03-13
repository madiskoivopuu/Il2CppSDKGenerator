#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClanEventType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClanEventType"));
	}

	template <typename T = MessageParser1ClanEventType*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& EventEndTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& eventEndTime_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ResetTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& resetTime_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ClanEventType*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1583A24))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1583A88))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ClanEventType*))(Il2CppBase() + 0x1583BA8))(this);
	}
	template <typename T = ClanEventType*> T Clone() {
		return ((T (*)(ClanEventType*))(Il2CppBase() + 0x1583CA4))(this);
	}
	template <typename T = int64_t> T get_EventEndTime() {
		return ((T (*)(ClanEventType*))(Il2CppBase() + 0x1583D00))(this);
	}
	template <typename T = void> T set_EventEndTime(int64_t value) {
		return ((T (*)(ClanEventType*, int64_t))(Il2CppBase() + 0x1583D08))(this, value);
	}
	template <typename T = int64_t> T get_ResetTime() {
		return ((T (*)(ClanEventType*))(Il2CppBase() + 0x1583D10))(this);
	}
	template <typename T = void> T set_ResetTime(int64_t value) {
		return ((T (*)(ClanEventType*, int64_t))(Il2CppBase() + 0x1583D18))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ClanEventType*))(Il2CppBase() + 0x1583D20))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ClanEventType*, Il2CppString*))(Il2CppBase() + 0x1583D28))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ClanEventType*, Il2CppObject*))(Il2CppBase() + 0x1583DA8))(this, other);
	}
	template <typename T = bool> T Equals_1(ClanEventType* other) {
		return ((T (*)(ClanEventType*, ClanEventType*))(Il2CppBase() + 0x1583E18))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ClanEventType*))(Il2CppBase() + 0x1583E7C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ClanEventType*))(Il2CppBase() + 0x1583F0C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ClanEventType*, uintptr_t))(Il2CppBase() + 0x1583F70))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ClanEventType*))(Il2CppBase() + 0x1584028))(this);
	}
	template <typename T = void> T MergeFrom(ClanEventType* other) {
		return ((T (*)(ClanEventType*, ClanEventType*))(Il2CppBase() + 0x158412C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ClanEventType*, uintptr_t))(Il2CppBase() + 0x158416C))(this, input);
	}

};

}
