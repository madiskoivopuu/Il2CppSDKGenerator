#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaIncomePvpChatMessageRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaIncomePvpChatMessageRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaIncomePvpChatMessageRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaIncomePvpChatMessageRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<int64_t>*& _repeated_userID_codec() {
		return *(FieldCodec1<int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<int64_t>*& userID_() {
		return *(RepeatedField1<int64_t>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& MessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ClanChatMessageBlock*> R& message_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::ArenaIncomePvpChatMessageRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaIncomePvpChatMessageRequest*>* (*)(void *))(Il2CppBase() + 0x1E28E6C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E28ED0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaIncomePvpChatMessageRequest*))(Il2CppBase() + 0x1E28FF0))(this);
	}
	template <typename R = ProtoModels::ArenaIncomePvpChatMessageRequest*> R Clone() {
		return ((R (*)(ArenaIncomePvpChatMessageRequest*))(Il2CppBase() + 0x1E29170))(this);
	}
	 RepeatedField1<int64_t>* get_UserID() {
		return ((RepeatedField1<int64_t>* (*)(ArenaIncomePvpChatMessageRequest*))(Il2CppBase() + 0x1E291CC))(this);
	}
	template <typename R = ProtoModels::ClanChatMessageBlock*> R get_Message() {
		return ((R (*)(ArenaIncomePvpChatMessageRequest*))(Il2CppBase() + 0x1E291D4))(this);
	}
	template <typename R = void> R set_Message(ProtoModels::ClanChatMessageBlock* value) {
		return ((R (*)(ArenaIncomePvpChatMessageRequest*, ProtoModels::ClanChatMessageBlock*))(Il2CppBase() + 0x1E291DC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaIncomePvpChatMessageRequest*, Il2CppObject*))(Il2CppBase() + 0x1E291E4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaIncomePvpChatMessageRequest* other) {
		return ((R (*)(ArenaIncomePvpChatMessageRequest*, ProtoModels::ArenaIncomePvpChatMessageRequest*))(Il2CppBase() + 0x1E29254))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaIncomePvpChatMessageRequest*))(Il2CppBase() + 0x1E292F4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaIncomePvpChatMessageRequest*))(Il2CppBase() + 0x1E2934C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaIncomePvpChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E293B0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaIncomePvpChatMessageRequest*))(Il2CppBase() + 0x1E2948C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaIncomePvpChatMessageRequest* other) {
		return ((R (*)(ArenaIncomePvpChatMessageRequest*, ProtoModels::ArenaIncomePvpChatMessageRequest*))(Il2CppBase() + 0x1E29578))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaIncomePvpChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E2964C))(this, input);
	}

};

}
