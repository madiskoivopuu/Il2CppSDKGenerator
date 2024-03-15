#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetClanChatAllMessagesRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetClanChatAllMessagesRequest"));
	}

	 static MessageParser1ProtoModels::ArenaGetClanChatAllMessagesRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaGetClanChatAllMessagesRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::ArenaGetClanChatAllMessagesRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaGetClanChatAllMessagesRequest*>* (*)(void *))(Il2CppBase() + 0x1E210A4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E21108))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E21228))(this);
	}
	template <typename R = ProtoModels::ArenaGetClanChatAllMessagesRequest*> R Clone() {
		return ((R (*)(ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E212C8))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E21324))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaGetClanChatAllMessagesRequest*, int64_t))(Il2CppBase() + 0x1E2132C))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E21334))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaGetClanChatAllMessagesRequest*, int64_t))(Il2CppBase() + 0x1E2133C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaGetClanChatAllMessagesRequest*, Il2CppObject*))(Il2CppBase() + 0x1E21344))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaGetClanChatAllMessagesRequest* other) {
		return ((R (*)(ArenaGetClanChatAllMessagesRequest*, ProtoModels::ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E213E0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E21420))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E2148C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaGetClanChatAllMessagesRequest*, uintptr_t))(Il2CppBase() + 0x1E214F0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E21574))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaGetClanChatAllMessagesRequest* other) {
		return ((R (*)(ArenaGetClanChatAllMessagesRequest*, ProtoModels::ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E21628))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaGetClanChatAllMessagesRequest*, uintptr_t))(Il2CppBase() + 0x1E21648))(this, input);
	}

};

}
