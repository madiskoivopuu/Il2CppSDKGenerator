#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaIncomeTournamentChatMessageRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaIncomeTournamentChatMessageRequest"));
	}

	 static MessageParser1ProtoModels::ArenaIncomeTournamentChatMessageRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaIncomeTournamentChatMessageRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1int64_t>*& _repeated_userID_codec() {
		return *(FieldCodec1int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1int64_t>*& userID_() {
		return *(RepeatedField1int64_t>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& MessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ClanChatMessageBlock*> R& message_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::ArenaIncomeTournamentChatMessageRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaIncomeTournamentChatMessageRequest*>* (*)(void *))(Il2CppBase() + 0x1E298E4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E29948))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaIncomeTournamentChatMessageRequest*))(Il2CppBase() + 0x1E29A68))(this);
	}
	template <typename R = ProtoModels::ArenaIncomeTournamentChatMessageRequest*> R Clone() {
		return ((R (*)(ArenaIncomeTournamentChatMessageRequest*))(Il2CppBase() + 0x1E29BE8))(this);
	}
	 RepeatedField1int64_t>* get_UserID() {
		return ((RepeatedField1int64_t>* (*)(ArenaIncomeTournamentChatMessageRequest*))(Il2CppBase() + 0x1E29C44))(this);
	}
	template <typename R = ProtoModels::ClanChatMessageBlock*> R get_Message() {
		return ((R (*)(ArenaIncomeTournamentChatMessageRequest*))(Il2CppBase() + 0x1E29C4C))(this);
	}
	template <typename R = void> R set_Message(ProtoModels::ClanChatMessageBlock* value) {
		return ((R (*)(ArenaIncomeTournamentChatMessageRequest*, ProtoModels::ClanChatMessageBlock*))(Il2CppBase() + 0x1E29C54))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaIncomeTournamentChatMessageRequest*, Il2CppObject*))(Il2CppBase() + 0x1E29C5C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaIncomeTournamentChatMessageRequest* other) {
		return ((R (*)(ArenaIncomeTournamentChatMessageRequest*, ProtoModels::ArenaIncomeTournamentChatMessageRequest*))(Il2CppBase() + 0x1E29CCC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaIncomeTournamentChatMessageRequest*))(Il2CppBase() + 0x1E29D6C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaIncomeTournamentChatMessageRequest*))(Il2CppBase() + 0x1E29DC4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaIncomeTournamentChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E29E28))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaIncomeTournamentChatMessageRequest*))(Il2CppBase() + 0x1E29F04))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaIncomeTournamentChatMessageRequest* other) {
		return ((R (*)(ArenaIncomeTournamentChatMessageRequest*, ProtoModels::ArenaIncomeTournamentChatMessageRequest*))(Il2CppBase() + 0x1E29FF0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaIncomeTournamentChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1E2A0C4))(this, input);
	}

};

}
