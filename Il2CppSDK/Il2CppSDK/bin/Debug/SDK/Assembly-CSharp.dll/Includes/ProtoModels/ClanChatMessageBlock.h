#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClanChatMessageBlock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClanChatMessageBlock"));
	}

	template <typename T = MessageParser1ClanChatMessageBlock*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserSenderIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userSenderID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserNickFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& userNick_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& message_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& TimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& time_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanID_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& ParamFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ChatMessageParam*>*> static T& _repeated_param_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1ChatMessageParam*>*> T& param_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& SendNotificationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& sendNotification_() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = MessageParser1ClanChatMessageBlock*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x174B4CC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x174B530))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B650))(this);
	}
	template <typename T = ClanChatMessageBlock*> T Clone() {
		return ((T (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B820))(this);
	}
	template <typename T = int64_t> T get_UserSenderID() {
		return ((T (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B87C))(this);
	}
	template <typename T = void> T set_UserSenderID(int64_t value) {
		return ((T (*)(ClanChatMessageBlock*, int64_t))(Il2CppBase() + 0x174B884))(this, value);
	}
	template <typename T = Il2CppString*> T get_UserNick() {
		return ((T (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B88C))(this);
	}
	template <typename T = void> T set_UserNick(Il2CppString* value) {
		return ((T (*)(ClanChatMessageBlock*, Il2CppString*))(Il2CppBase() + 0x174B894))(this, value);
	}
	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B914))(this);
	}
	template <typename T = void> T set_Message(Il2CppString* value) {
		return ((T (*)(ClanChatMessageBlock*, Il2CppString*))(Il2CppBase() + 0x174B91C))(this, value);
	}
	template <typename T = int64_t> T get_Time() {
		return ((T (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B99C))(this);
	}
	template <typename T = void> T set_Time(int64_t value) {
		return ((T (*)(ClanChatMessageBlock*, int64_t))(Il2CppBase() + 0x174B9A4))(this, value);
	}
	template <typename T = int64_t> T get_ClanID() {
		return ((T (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B9AC))(this);
	}
	template <typename T = void> T set_ClanID(int64_t value) {
		return ((T (*)(ClanChatMessageBlock*, int64_t))(Il2CppBase() + 0x174B9B4))(this, value);
	}
	template <typename T = RepeatedField1ChatMessageParam*>*> T get_Param() {
		return ((T (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B9BC))(this);
	}
	template <typename T = bool> T get_SendNotification() {
		return ((T (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174B9C4))(this);
	}
	template <typename T = void> T set_SendNotification(bool value) {
		return ((T (*)(ClanChatMessageBlock*, bool))(Il2CppBase() + 0x174B9CC))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ClanChatMessageBlock*, Il2CppObject*))(Il2CppBase() + 0x174B9D8))(this, other);
	}
	template <typename T = bool> T Equals_1(ClanChatMessageBlock* other) {
		return ((T (*)(ClanChatMessageBlock*, ClanChatMessageBlock*))(Il2CppBase() + 0x174BA48))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174BB44))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174BC4C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ClanChatMessageBlock*, uintptr_t))(Il2CppBase() + 0x174BCB0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ClanChatMessageBlock*))(Il2CppBase() + 0x174BE78))(this);
	}
	template <typename T = void> T MergeFrom(ClanChatMessageBlock* other) {
		return ((T (*)(ClanChatMessageBlock*, ClanChatMessageBlock*))(Il2CppBase() + 0x174C074))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ClanChatMessageBlock*, uintptr_t))(Il2CppBase() + 0x174C140))(this, input);
	}

};

}
