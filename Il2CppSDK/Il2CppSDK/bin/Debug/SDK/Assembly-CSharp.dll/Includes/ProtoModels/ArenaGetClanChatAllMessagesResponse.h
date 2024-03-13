#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetClanChatAllMessagesResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetClanChatAllMessagesResponse"));
	}

	template <typename T = MessageParser1ArenaGetClanChatAllMessagesResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MessagesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ClanChatMessageBlock*>*> static T& _repeated_messages_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1ClanChatMessageBlock*>*> T& messages_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaGetClanChatAllMessagesResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E217E8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2184C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E2196C))(this);
	}
	template <typename T = ArenaGetClanChatAllMessagesResponse*> T Clone() {
		return ((T (*)(ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E21B00))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E21B5C))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaGetClanChatAllMessagesResponse*, int32_t))(Il2CppBase() + 0x1E21B64))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E21B6C))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaGetClanChatAllMessagesResponse*, Il2CppString*))(Il2CppBase() + 0x1E21B74))(this, value);
	}
	template <typename T = RepeatedField1ClanChatMessageBlock*>*> T get_Messages() {
		return ((T (*)(ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E21BF4))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaGetClanChatAllMessagesResponse*, Il2CppObject*))(Il2CppBase() + 0x1E21BFC))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaGetClanChatAllMessagesResponse* other) {
		return ((T (*)(ArenaGetClanChatAllMessagesResponse*, ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E21C6C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E21D1C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E21DA4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaGetClanChatAllMessagesResponse*, uintptr_t))(Il2CppBase() + 0x1E21E08))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E21F18))(this);
	}
	template <typename T = void> T MergeFrom(ArenaGetClanChatAllMessagesResponse* other) {
		return ((T (*)(ArenaGetClanChatAllMessagesResponse*, ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E22048))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaGetClanChatAllMessagesResponse*, uintptr_t))(Il2CppBase() + 0x1E220E4))(this, input);
	}

};

}
