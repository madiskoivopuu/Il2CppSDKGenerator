#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaBroadcastChatMessageRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaBroadcastChatMessageRequest"));
	}

	 static MessageParser1ProtoModels::ArenaBroadcastChatMessageRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaBroadcastChatMessageRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& BlockFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ClanChatMessageBlock*> R& block_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ChannelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& channel_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaBroadcastChatMessageRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaBroadcastChatMessageRequest*>* (*)(void *))(Il2CppBase() + 0x1A191A4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A19208))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A19328))(this);
	}
	template <typename R = ProtoModels::ArenaBroadcastChatMessageRequest*> R Clone() {
		return ((R (*)(ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A19444))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A194A0))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaBroadcastChatMessageRequest*, int64_t))(Il2CppBase() + 0x1A194A8))(this, value);
	}
	template <typename R = ProtoModels::ClanChatMessageBlock*> R get_Block() {
		return ((R (*)(ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A194B0))(this);
	}
	template <typename R = void> R set_Block(ProtoModels::ClanChatMessageBlock* value) {
		return ((R (*)(ArenaBroadcastChatMessageRequest*, ProtoModels::ClanChatMessageBlock*))(Il2CppBase() + 0x1A194B8))(this, value);
	}
	template <typename R = Il2CppString*> R get_Channel() {
		return ((R (*)(ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A194C0))(this);
	}
	template <typename R = void> R set_Channel(Il2CppString* value) {
		return ((R (*)(ArenaBroadcastChatMessageRequest*, Il2CppString*))(Il2CppBase() + 0x1A194C8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaBroadcastChatMessageRequest*, Il2CppObject*))(Il2CppBase() + 0x1A19548))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaBroadcastChatMessageRequest* other) {
		return ((R (*)(ArenaBroadcastChatMessageRequest*, ProtoModels::ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A195B8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A19630))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A196BC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaBroadcastChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1A19720))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A197D8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaBroadcastChatMessageRequest* other) {
		return ((R (*)(ArenaBroadcastChatMessageRequest*, ProtoModels::ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A198DC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaBroadcastChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1A199B0))(this, input);
	}

};

}
