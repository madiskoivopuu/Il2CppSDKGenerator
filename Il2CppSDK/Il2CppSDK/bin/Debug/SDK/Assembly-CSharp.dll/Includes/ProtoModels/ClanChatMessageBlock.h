#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClanChatMessageBlock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClanChatMessageBlock"));
	}

	 static MessageParser1ProtoModels::ClanChatMessageBlock*>*& _parser() {
		return *(MessageParser1ProtoModels::ClanChatMessageBlock*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserSenderIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userSenderID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserNickFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& userNick_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& MessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& message_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& TimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& time_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanID_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& ParamFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::ChatMessageParam*>*& _repeated_param_codec() {
		return *(FieldCodec1ProtoModels::ChatMessageParam*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::ChatMessageParam*>*& param_() {
		return *(RepeatedField1ProtoModels::ChatMessageParam*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& SendNotificationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& sendNotification_() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	 static MessageParser1ProtoModels::ClanChatMessageBlock*>* get_Parser() {
		return ((MessageParser1ProtoModels::ClanChatMessageBlock*>* (*)(void *))(Il2CppBase() + 0x174B4CC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x174B530))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B650))(this);
	}
	template <typename R = ProtoModels::ClanChatMessageBlock*> R Clone() {
		return ((R (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B820))(this);
	}
	template <typename R = int64_t> R get_UserSenderID() {
		return ((R (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B87C))(this);
	}
	template <typename R = void> R set_UserSenderID(int64_t value) {
		return ((R (*)(ClanChatMessageBlock*, int64_t))(Il2CppBase() + 0x174B884))(this, value);
	}
	template <typename R = Il2CppString*> R get_UserNick() {
		return ((R (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B88C))(this);
	}
	template <typename R = void> R set_UserNick(Il2CppString* value) {
		return ((R (*)(ClanChatMessageBlock*, Il2CppString*))(Il2CppBase() + 0x174B894))(this, value);
	}
	template <typename R = Il2CppString*> R get_Message() {
		return ((R (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B914))(this);
	}
	template <typename R = void> R set_Message(Il2CppString* value) {
		return ((R (*)(ClanChatMessageBlock*, Il2CppString*))(Il2CppBase() + 0x174B91C))(this, value);
	}
	template <typename R = int64_t> R get_Time() {
		return ((R (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B99C))(this);
	}
	template <typename R = void> R set_Time(int64_t value) {
		return ((R (*)(ClanChatMessageBlock*, int64_t))(Il2CppBase() + 0x174B9A4))(this, value);
	}
	template <typename R = int64_t> R get_ClanID() {
		return ((R (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B9AC))(this);
	}
	template <typename R = void> R set_ClanID(int64_t value) {
		return ((R (*)(ClanChatMessageBlock*, int64_t))(Il2CppBase() + 0x174B9B4))(this, value);
	}
	 RepeatedField1ProtoModels::ChatMessageParam*>* get_Param() {
		return ((RepeatedField1ProtoModels::ChatMessageParam*>* (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B9BC))(this);
	}
	template <typename R = bool> R get_SendNotification() {
		return ((R (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B9C4))(this);
	}
	template <typename R = void> R set_SendNotification(bool value) {
		return ((R (*)(ClanChatMessageBlock*, bool))(Il2CppBase() + 0x174B9CC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ClanChatMessageBlock*, Il2CppObject*))(Il2CppBase() + 0x174B9D8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ClanChatMessageBlock* other) {
		return ((R (*)(ClanChatMessageBlock*, ProtoModels::ClanChatMessageBlock*))(Il2CppBase() + 0x174BA48))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174BB44))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174BC4C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ClanChatMessageBlock*, uintptr_t))(Il2CppBase() + 0x174BCB0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174BE78))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ClanChatMessageBlock* other) {
		return ((R (*)(ClanChatMessageBlock*, ProtoModels::ClanChatMessageBlock*))(Il2CppBase() + 0x174C074))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ClanChatMessageBlock*, uintptr_t))(Il2CppBase() + 0x174C140))(this, input);
	}

};

}
