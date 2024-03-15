#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStatueStartEventResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStatueStartEventResponse"));
	}

	 static MessageParser1ProtoModels::ArenaStatueStartEventResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaStatueStartEventResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ResetTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& resetTime_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& EndTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endTime_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1ProtoModels::ArenaStatueStartEventResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaStatueStartEventResponse*>* (*)(void *))(Il2CppBase() + 0x2713B3C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2713BA0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713CC0))(this);
	}
	template <typename R = ProtoModels::ArenaStatueStartEventResponse*> R Clone() {
		return ((R (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713DD0))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713E2C))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaStatueStartEventResponse*, int32_t))(Il2CppBase() + 0x2713E34))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713E3C))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaStatueStartEventResponse*, Il2CppString*))(Il2CppBase() + 0x2713E44))(this, value);
	}
	template <typename R = int64_t> R get_ClanID() {
		return ((R (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713EC4))(this);
	}
	template <typename R = void> R set_ClanID(int64_t value) {
		return ((R (*)(ArenaStatueStartEventResponse*, int64_t))(Il2CppBase() + 0x2713ECC))(this, value);
	}
	template <typename R = int64_t> R get_ResetTime() {
		return ((R (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713ED4))(this);
	}
	template <typename R = void> R set_ResetTime(int64_t value) {
		return ((R (*)(ArenaStatueStartEventResponse*, int64_t))(Il2CppBase() + 0x2713EDC))(this, value);
	}
	template <typename R = int64_t> R get_EndTime() {
		return ((R (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713EE4))(this);
	}
	template <typename R = void> R set_EndTime(int64_t value) {
		return ((R (*)(ArenaStatueStartEventResponse*, int64_t))(Il2CppBase() + 0x2713EEC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaStatueStartEventResponse*, Il2CppObject*))(Il2CppBase() + 0x2713EF4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaStatueStartEventResponse* other) {
		return ((R (*)(ArenaStatueStartEventResponse*, ProtoModels::ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713F64))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713FF4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x27140C0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaStatueStartEventResponse*, uintptr_t))(Il2CppBase() + 0x2714124))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2714234))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaStatueStartEventResponse* other) {
		return ((R (*)(ArenaStatueStartEventResponse*, ProtoModels::ArenaStatueStartEventResponse*))(Il2CppBase() + 0x27143B0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaStatueStartEventResponse*, uintptr_t))(Il2CppBase() + 0x2714420))(this, input);
	}

};

}
