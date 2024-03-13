#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaAccountCreateResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaAccountCreateResponse"));
	}

	template <typename T = MessageParser1ArenaAccountCreateResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& SessionIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& sessionID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& MessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& message_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1ArenaAccountCreateResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x189C178))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x189C1DC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C2FC))(this);
	}
	template <typename T = ArenaAccountCreateResponse*> T Clone() {
		return ((T (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C408))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C464))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaAccountCreateResponse*, int64_t))(Il2CppBase() + 0x189C46C))(this, value);
	}
	template <typename T = int64_t> T get_SessionID() {
		return ((T (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C474))(this);
	}
	template <typename T = void> T set_SessionID(int64_t value) {
		return ((T (*)(ArenaAccountCreateResponse*, int64_t))(Il2CppBase() + 0x189C47C))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C484))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaAccountCreateResponse*, int64_t))(Il2CppBase() + 0x189C48C))(this, value);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C494))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaAccountCreateResponse*, int32_t))(Il2CppBase() + 0x189C49C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C4A4))(this);
	}
	template <typename T = void> T set_Message(Il2CppString* value) {
		return ((T (*)(ArenaAccountCreateResponse*, Il2CppString*))(Il2CppBase() + 0x189C4AC))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaAccountCreateResponse*, Il2CppObject*))(Il2CppBase() + 0x189C52C))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaAccountCreateResponse* other) {
		return ((T (*)(ArenaAccountCreateResponse*, ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C59C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C620))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C6EC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaAccountCreateResponse*, uintptr_t))(Il2CppBase() + 0x189C750))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C860))(this);
	}
	template <typename T = void> T MergeFrom(ArenaAccountCreateResponse* other) {
		return ((T (*)(ArenaAccountCreateResponse*, ArenaAccountCreateResponse*))(Il2CppBase() + 0x189C9DC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaAccountCreateResponse*, uintptr_t))(Il2CppBase() + 0x189CA34))(this, input);
	}

};

}
