#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaBroadcastChatMessageRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaBroadcastChatMessageRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& BlockFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& block_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ChannelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& channel_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A191A4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A19208))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A19328))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A19444))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A194A0))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaBroadcastChatMessageRequest*, int64_t))(Il2CppBase() + 0x1A194A8))(this, value);
	}
	template <typename T = uintptr_t> T get_Block() {
		return ((T (*)(ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A194B0))(this);
	}
	template <typename T = void> T set_Block(uintptr_t value) {
		return ((T (*)(ArenaBroadcastChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1A194B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Channel() {
		return ((T (*)(ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A194C0))(this);
	}
	template <typename T = void> T set_Channel(Il2CppString* value) {
		return ((T (*)(ArenaBroadcastChatMessageRequest*, Il2CppString*))(Il2CppBase() + 0x1A194C8))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaBroadcastChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1A19548))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaBroadcastChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1A195B8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A19630))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A196BC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaBroadcastChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1A19720))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaBroadcastChatMessageRequest*))(Il2CppBase() + 0x1A197D8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaBroadcastChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1A198DC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaBroadcastChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x1A199B0))(this, input);
	}

};

}
