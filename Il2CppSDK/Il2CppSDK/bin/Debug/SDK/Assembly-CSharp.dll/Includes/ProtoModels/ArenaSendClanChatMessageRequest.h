#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaSendClanChatMessageRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaSendClanChatMessageRequest"));
	}

	template <typename T = MessageParser1ArenaSendClanChatMessageRequest*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& ClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& MessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& message_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ParamsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ChatMessageParam*>*> static T& _repeated_params_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1ChatMessageParam*>*> T& params_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& SendNotificationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& sendNotification_() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = MessageParser1ArenaSendClanChatMessageRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x27117A8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x271180C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x271192C))(this);
	}
	template <typename T = ArenaSendClanChatMessageRequest*> T Clone() {
		return ((T (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711ADC))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711B38))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaSendClanChatMessageRequest*, int64_t))(Il2CppBase() + 0x2711B40))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711B48))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaSendClanChatMessageRequest*, int64_t))(Il2CppBase() + 0x2711B50))(this, value);
	}
	template <typename T = int64_t> T get_ClanID() {
		return ((T (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711B58))(this);
	}
	template <typename T = void> T set_ClanID(int64_t value) {
		return ((T (*)(ArenaSendClanChatMessageRequest*, int64_t))(Il2CppBase() + 0x2711B60))(this, value);
	}
	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711B68))(this);
	}
	template <typename T = void> T set_Message(Il2CppString* value) {
		return ((T (*)(ArenaSendClanChatMessageRequest*, Il2CppString*))(Il2CppBase() + 0x2711B70))(this, value);
	}
	template <typename T = RepeatedField1ChatMessageParam*>*> T get_Params() {
		return ((T (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711BF0))(this);
	}
	template <typename T = bool> T get_SendNotification() {
		return ((T (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711BF8))(this);
	}
	template <typename T = void> T set_SendNotification(bool value) {
		return ((T (*)(ArenaSendClanChatMessageRequest*, bool))(Il2CppBase() + 0x2711C00))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaSendClanChatMessageRequest*, Il2CppObject*))(Il2CppBase() + 0x2711C0C))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaSendClanChatMessageRequest* other) {
		return ((T (*)(ArenaSendClanChatMessageRequest*, ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711C7C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711D64))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711E4C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaSendClanChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x2711EB0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2712044))(this);
	}
	template <typename T = void> T MergeFrom(ArenaSendClanChatMessageRequest* other) {
		return ((T (*)(ArenaSendClanChatMessageRequest*, ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x27121FC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaSendClanChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x27122B0))(this, input);
	}

};

}
