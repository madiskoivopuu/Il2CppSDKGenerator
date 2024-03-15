#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildInviteResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildInviteResponse"));
	}

	 static MessageParser1ProtoModels::GuildInviteResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::GuildInviteResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& LockTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lockTime_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::GuildInviteResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::GuildInviteResponse*>* (*)(void *))(Il2CppBase() + 0x1B31628))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1B3168C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildInviteResponse*))(Il2CppBase() + 0x1B317AC))(this);
	}
	template <typename R = ProtoModels::GuildInviteResponse*> R Clone() {
		return ((R (*)(GuildInviteResponse*))(Il2CppBase() + 0x1B318AC))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(GuildInviteResponse*))(Il2CppBase() + 0x1B31908))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(GuildInviteResponse*, int32_t))(Il2CppBase() + 0x1B31910))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(GuildInviteResponse*))(Il2CppBase() + 0x1B31918))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(GuildInviteResponse*, Il2CppString*))(Il2CppBase() + 0x1B31920))(this, value);
	}
	template <typename R = int64_t> R get_LockTime() {
		return ((R (*)(GuildInviteResponse*))(Il2CppBase() + 0x1B319A0))(this);
	}
	template <typename R = void> R set_LockTime(int64_t value) {
		return ((R (*)(GuildInviteResponse*, int64_t))(Il2CppBase() + 0x1B319A8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildInviteResponse*, Il2CppObject*))(Il2CppBase() + 0x1B319B0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildInviteResponse* other) {
		return ((R (*)(GuildInviteResponse*, ProtoModels::GuildInviteResponse*))(Il2CppBase() + 0x1B31A20))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildInviteResponse*))(Il2CppBase() + 0x1B31A90))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildInviteResponse*))(Il2CppBase() + 0x1B31B24))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildInviteResponse*, uintptr_t))(Il2CppBase() + 0x1B31B88))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildInviteResponse*))(Il2CppBase() + 0x1B31C40))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildInviteResponse* other) {
		return ((R (*)(GuildInviteResponse*, ProtoModels::GuildInviteResponse*))(Il2CppBase() + 0x1B31D44))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildInviteResponse*, uintptr_t))(Il2CppBase() + 0x1B31D9C))(this, input);
	}

};

}
