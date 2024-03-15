#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetClanChatAllMessagesResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetClanChatAllMessagesResponse"));
	}

	 static MessageParser1ProtoModels::ArenaGetClanChatAllMessagesResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaGetClanChatAllMessagesResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& MessagesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::ClanChatMessageBlock*>*& _repeated_messages_codec() {
		return *(FieldCodec1ProtoModels::ClanChatMessageBlock*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::ClanChatMessageBlock*>*& messages_() {
		return *(RepeatedField1ProtoModels::ClanChatMessageBlock*>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaGetClanChatAllMessagesResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaGetClanChatAllMessagesResponse*>* (*)(void *))(Il2CppBase() + 0x1E217E8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E2184C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E2196C))(this);
	}
	template <typename R = ProtoModels::ArenaGetClanChatAllMessagesResponse*> R Clone() {
		return ((R (*)(ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E21B00))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E21B5C))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaGetClanChatAllMessagesResponse*, int32_t))(Il2CppBase() + 0x1E21B64))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E21B6C))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaGetClanChatAllMessagesResponse*, Il2CppString*))(Il2CppBase() + 0x1E21B74))(this, value);
	}
	 RepeatedField1ProtoModels::ClanChatMessageBlock*>* get_Messages() {
		return ((RepeatedField1ProtoModels::ClanChatMessageBlock*>* (*)(ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E21BF4))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaGetClanChatAllMessagesResponse*, Il2CppObject*))(Il2CppBase() + 0x1E21BFC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaGetClanChatAllMessagesResponse* other) {
		return ((R (*)(ArenaGetClanChatAllMessagesResponse*, ProtoModels::ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E21C6C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E21D1C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E21DA4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaGetClanChatAllMessagesResponse*, uintptr_t))(Il2CppBase() + 0x1E21E08))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E21F18))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaGetClanChatAllMessagesResponse* other) {
		return ((R (*)(ArenaGetClanChatAllMessagesResponse*, ProtoModels::ArenaGetClanChatAllMessagesResponse*))(Il2CppBase() + 0x1E22048))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaGetClanChatAllMessagesResponse*, uintptr_t))(Il2CppBase() + 0x1E220E4))(this, input);
	}

};

}
