#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaAccountCreateResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaAccountCreateResponse"));
	}

	 static MessageParser1ProtoModels::ArenaAccountCreateResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaAccountCreateResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& SessionIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& sessionID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& MessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& message_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1ProtoModels::ArenaAccountCreateResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaAccountCreateResponse*>* (*)(void *))(Il2CppBase() + 0x189C178))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x189C1DC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C2FC))(this);
	}
	template <typename R = ProtoModels::ArenaAccountCreateResponse*> R Clone() {
		return ((R (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C408))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C464))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaAccountCreateResponse*, int64_t))(Il2CppBase() + 0x189C46C))(this, value);
	}
	template <typename R = int64_t> R get_SessionID() {
		return ((R (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C474))(this);
	}
	template <typename R = void> R set_SessionID(int64_t value) {
		return ((R (*)(ArenaAccountCreateResponse*, int64_t))(Il2CppBase() + 0x189C47C))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C484))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaAccountCreateResponse*, int64_t))(Il2CppBase() + 0x189C48C))(this, value);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C494))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaAccountCreateResponse*, int32_t))(Il2CppBase() + 0x189C49C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Message() {
		return ((R (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C4A4))(this);
	}
	template <typename R = void> R set_Message(Il2CppString* value) {
		return ((R (*)(ArenaAccountCreateResponse*, Il2CppString*))(Il2CppBase() + 0x189C4AC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaAccountCreateResponse*, Il2CppObject*))(Il2CppBase() + 0x189C52C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaAccountCreateResponse* other) {
		return ((R (*)(ArenaAccountCreateResponse*, ProtoModels::ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C59C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C620))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C6EC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaAccountCreateResponse*, uintptr_t))(Il2CppBase() + 0x189C750))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C860))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaAccountCreateResponse* other) {
		return ((R (*)(ArenaAccountCreateResponse*, ProtoModels::ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C9DC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaAccountCreateResponse*, uintptr_t))(Il2CppBase() + 0x189CA34))(this, input);
	}

};

}
