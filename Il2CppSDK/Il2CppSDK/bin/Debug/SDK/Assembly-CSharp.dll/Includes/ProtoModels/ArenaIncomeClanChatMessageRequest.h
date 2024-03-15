#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaIncomeClanChatMessageRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaIncomeClanChatMessageRequest"));
	}

	 static MessageParser1ProtoModels::ArenaIncomeClanChatMessageRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaIncomeClanChatMessageRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& IsGlobaMapFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isGlobaMap_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& MessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ClanChatMessageBlock*> R& message_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::ArenaIncomeClanChatMessageRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaIncomeClanChatMessageRequest*>* (*)(void *))(Il2CppBase() + 0x1E28480))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E284E4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E28604))(this);
	}
	template <typename R = ProtoModels::ArenaIncomeClanChatMessageRequest*> R Clone() {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E286D0))(this);
	}
	template <typename R = int64_t> R get_ClanID() {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E2872C))(this);
	}
	template <typename R = void> R set_ClanID(int64_t value) {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*, int64_t))(Il2CppBase() + 0x1E28734))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E2873C))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*, int64_t))(Il2CppBase() + 0x1E28744))(this, value);
	}
	template <typename R = bool> R get_IsGlobaMap() {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E2874C))(this);
	}
	template <typename R = void> R set_IsGlobaMap(bool value) {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*, bool))(Il2CppBase() + 0x1E28754))(this, value);
	}
	template <typename R = ProtoModels::ClanChatMessageBlock*> R get_Message() {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E28760))(this);
	}
	template <typename R = void> R set_Message(ProtoModels::ClanChatMessageBlock* value) {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*, ProtoModels::ClanChatMessageBlock*))(Il2CppBase() + 0x1E28768))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*, Il2CppObject*))(Il2CppBase() + 0x1E28770))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaIncomeClanChatMessageRequest* other) {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*, ProtoModels::ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E287E0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E2884C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E288F4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E28958))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E28A34))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaIncomeClanChatMessageRequest* other) {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*, ProtoModels::ArenaIncomeClanChatMessageRequest*))(Il2CppBase() + 0x1E28B44))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaIncomeClanChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E28C14))(this, input);
	}

};

}
