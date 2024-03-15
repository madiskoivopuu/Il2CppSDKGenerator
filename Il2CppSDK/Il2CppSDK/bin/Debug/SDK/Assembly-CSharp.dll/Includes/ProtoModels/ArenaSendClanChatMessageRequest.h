#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaSendClanChatMessageRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaSendClanChatMessageRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaSendClanChatMessageRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaSendClanChatMessageRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& ClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& MessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& message_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ParamsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ChatMessageParam*>*& _repeated_params_codec() {
		return *(FieldCodec1<ProtoModels::ChatMessageParam*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::ChatMessageParam*>*& params_() {
		return *(RepeatedField1<ProtoModels::ChatMessageParam*>**)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& SendNotificationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& sendNotification_() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	 static MessageParser1<ProtoModels::ArenaSendClanChatMessageRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaSendClanChatMessageRequest*>* (*)(void *))(Il2CppBase() + 0x27117A8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x271180C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x271192C))(this);
	}
	template <typename R = ProtoModels::ArenaSendClanChatMessageRequest*> R Clone() {
		return ((R (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711ADC))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711B38))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaSendClanChatMessageRequest*, int64_t))(Il2CppBase() + 0x2711B40))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711B48))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaSendClanChatMessageRequest*, int64_t))(Il2CppBase() + 0x2711B50))(this, value);
	}
	template <typename R = int64_t> R get_ClanID() {
		return ((R (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711B58))(this);
	}
	template <typename R = void> R set_ClanID(int64_t value) {
		return ((R (*)(ArenaSendClanChatMessageRequest*, int64_t))(Il2CppBase() + 0x2711B60))(this, value);
	}
	template <typename R = Il2CppString*> R get_Message() {
		return ((R (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711B68))(this);
	}
	template <typename R = void> R set_Message(Il2CppString* value) {
		return ((R (*)(ArenaSendClanChatMessageRequest*, Il2CppString*))(Il2CppBase() + 0x2711B70))(this, value);
	}
	 RepeatedField1<ProtoModels::ChatMessageParam*>* get_Params() {
		return ((RepeatedField1<ProtoModels::ChatMessageParam*>* (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711BF0))(this);
	}
	template <typename R = bool> R get_SendNotification() {
		return ((R (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711BF8))(this);
	}
	template <typename R = void> R set_SendNotification(bool value) {
		return ((R (*)(ArenaSendClanChatMessageRequest*, bool))(Il2CppBase() + 0x2711C00))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaSendClanChatMessageRequest*, Il2CppObject*))(Il2CppBase() + 0x2711C0C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaSendClanChatMessageRequest* other) {
		return ((R (*)(ArenaSendClanChatMessageRequest*, ProtoModels::ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711C7C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711D64))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2711E4C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaSendClanChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x2711EB0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x2712044))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaSendClanChatMessageRequest* other) {
		return ((R (*)(ArenaSendClanChatMessageRequest*, ProtoModels::ArenaSendClanChatMessageRequest*))(Il2CppBase() + 0x27121FC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaSendClanChatMessageRequest*, uintptr_t))(Il2CppBase() + 0x27122B0))(this, input);
	}

};

}
