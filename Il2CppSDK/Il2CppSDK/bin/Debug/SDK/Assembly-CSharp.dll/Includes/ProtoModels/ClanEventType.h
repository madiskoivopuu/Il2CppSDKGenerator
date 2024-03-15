#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClanEventType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClanEventType"));
	}

	 static MessageParser1ProtoModels::ClanEventType*>*& _parser() {
		return *(MessageParser1ProtoModels::ClanEventType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& EventEndTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& eventEndTime_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ResetTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& resetTime_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ClanEventType*>* get_Parser() {
		return ((MessageParser1ProtoModels::ClanEventType*>* (*)(void *))(Il2CppBase() + 0x1583A24))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1583A88))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ClanEventType*))(Il2CppBase() + 0x1583BA8))(this);
	}
	template <typename R = ProtoModels::ClanEventType*> R Clone() {
		return ((R (*)(ClanEventType*))(Il2CppBase() + 0x1583CA4))(this);
	}
	template <typename R = int64_t> R get_EventEndTime() {
		return ((R (*)(ClanEventType*))(Il2CppBase() + 0x1583D00))(this);
	}
	template <typename R = void> R set_EventEndTime(int64_t value) {
		return ((R (*)(ClanEventType*, int64_t))(Il2CppBase() + 0x1583D08))(this, value);
	}
	template <typename R = int64_t> R get_ResetTime() {
		return ((R (*)(ClanEventType*))(Il2CppBase() + 0x1583D10))(this);
	}
	template <typename R = void> R set_ResetTime(int64_t value) {
		return ((R (*)(ClanEventType*, int64_t))(Il2CppBase() + 0x1583D18))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(ClanEventType*))(Il2CppBase() + 0x1583D20))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(ClanEventType*, Il2CppString*))(Il2CppBase() + 0x1583D28))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ClanEventType*, Il2CppObject*))(Il2CppBase() + 0x1583DA8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ClanEventType* other) {
		return ((R (*)(ClanEventType*, ProtoModels::ClanEventType*))(Il2CppBase() + 0x1583E18))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ClanEventType*))(Il2CppBase() + 0x1583E7C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ClanEventType*))(Il2CppBase() + 0x1583F0C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ClanEventType*, uintptr_t))(Il2CppBase() + 0x1583F70))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ClanEventType*))(Il2CppBase() + 0x1584028))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ClanEventType* other) {
		return ((R (*)(ClanEventType*, ProtoModels::ClanEventType*))(Il2CppBase() + 0x158412C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ClanEventType*, uintptr_t))(Il2CppBase() + 0x158416C))(this, input);
	}

};

}
