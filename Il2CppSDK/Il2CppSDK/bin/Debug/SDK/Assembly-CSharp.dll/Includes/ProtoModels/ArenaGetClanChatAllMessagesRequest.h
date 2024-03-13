#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetClanChatAllMessagesRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetClanChatAllMessagesRequest"));
	}

	template <typename T = MessageParser1ArenaGetClanChatAllMessagesRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1ArenaGetClanChatAllMessagesRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E210A4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E21108))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E21228))(this);
	}
	template <typename T = ArenaGetClanChatAllMessagesRequest*> T Clone() {
		return ((T (*)(ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E212C8))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E21324))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaGetClanChatAllMessagesRequest*, int64_t))(Il2CppBase() + 0x1E2132C))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E21334))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaGetClanChatAllMessagesRequest*, int64_t))(Il2CppBase() + 0x1E2133C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaGetClanChatAllMessagesRequest*, Il2CppObject*))(Il2CppBase() + 0x1E21344))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaGetClanChatAllMessagesRequest* other) {
		return ((T (*)(ArenaGetClanChatAllMessagesRequest*, ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E213E0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E21420))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E2148C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaGetClanChatAllMessagesRequest*, uintptr_t))(Il2CppBase() + 0x1E214F0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E21574))(this);
	}
	template <typename T = void> T MergeFrom(ArenaGetClanChatAllMessagesRequest* other) {
		return ((T (*)(ArenaGetClanChatAllMessagesRequest*, ArenaGetClanChatAllMessagesRequest*))(Il2CppBase() + 0x1E21628))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaGetClanChatAllMessagesRequest*, uintptr_t))(Il2CppBase() + 0x1E21648))(this, input);
	}

};

}
