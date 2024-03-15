#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ReverseInviteResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ReverseInviteResponse"));
	}

	 static MessageParser1<ProtoModels::ReverseInviteResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::ReverseInviteResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ExpiredFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& expired_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::ReverseInviteResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ReverseInviteResponse*>* (*)(void *))(Il2CppBase() + 0x119F6EC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x119F750))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119F870))(this);
	}
	template <typename R = ProtoModels::ReverseInviteResponse*> R Clone() {
		return ((R (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119F978))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119F9D4))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ReverseInviteResponse*, int32_t))(Il2CppBase() + 0x119F9DC))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119F9E4))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ReverseInviteResponse*, Il2CppString*))(Il2CppBase() + 0x119F9EC))(this, value);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119FA6C))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(ReverseInviteResponse*, int64_t))(Il2CppBase() + 0x119FA74))(this, value);
	}
	template <typename R = int64_t> R get_Expired() {
		return ((R (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119FA7C))(this);
	}
	template <typename R = void> R set_Expired(int64_t value) {
		return ((R (*)(ReverseInviteResponse*, int64_t))(Il2CppBase() + 0x119FA84))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ReverseInviteResponse*, Il2CppObject*))(Il2CppBase() + 0x119FA8C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ReverseInviteResponse* other) {
		return ((R (*)(ReverseInviteResponse*, ProtoModels::ReverseInviteResponse*))(Il2CppBase() + 0x119FAFC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119FB7C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119FC2C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ReverseInviteResponse*, uintptr_t))(Il2CppBase() + 0x119FC90))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119FD74))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ReverseInviteResponse* other) {
		return ((R (*)(ReverseInviteResponse*, ProtoModels::ReverseInviteResponse*))(Il2CppBase() + 0x119FEB4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ReverseInviteResponse*, uintptr_t))(Il2CppBase() + 0x119FF18))(this, input);
	}

};

}
