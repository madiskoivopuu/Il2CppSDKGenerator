#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildUpdateMessageOfTheDayRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildUpdateMessageOfTheDayRequest"));
	}

	 static MessageParser1<ProtoModels::GuildUpdateMessageOfTheDayRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildUpdateMessageOfTheDayRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& MessageOfTheDayTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& messageOfTheDayType_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& MessageOfTheDayTextFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& messageOfTheDayText_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::GuildUpdateMessageOfTheDayRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildUpdateMessageOfTheDayRequest*>* (*)(void *))(Il2CppBase() + 0x1945924))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1945988))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945AA8))(this);
	}
	template <typename R = ProtoModels::GuildUpdateMessageOfTheDayRequest*> R Clone() {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945BAC))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945C08))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*, int64_t))(Il2CppBase() + 0x1945C10))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945C18))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*, int64_t))(Il2CppBase() + 0x1945C20))(this, value);
	}
	template <typename R = int32_t> R get_MessageOfTheDayType() {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945C28))(this);
	}
	template <typename R = void> R set_MessageOfTheDayType(int32_t value) {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*, int32_t))(Il2CppBase() + 0x1945C30))(this, value);
	}
	template <typename R = Il2CppString*> R get_MessageOfTheDayText() {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945C38))(this);
	}
	template <typename R = void> R set_MessageOfTheDayText(Il2CppString* value) {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*, Il2CppString*))(Il2CppBase() + 0x1945C40))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*, Il2CppObject*))(Il2CppBase() + 0x1945CC0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildUpdateMessageOfTheDayRequest* other) {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*, ProtoModels::GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945D30))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945DA4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945E54))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*, uintptr_t))(Il2CppBase() + 0x1945EB8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945F9C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildUpdateMessageOfTheDayRequest* other) {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*, ProtoModels::GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x19460DC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildUpdateMessageOfTheDayRequest*, uintptr_t))(Il2CppBase() + 0x1946128))(this, input);
	}

};

}
