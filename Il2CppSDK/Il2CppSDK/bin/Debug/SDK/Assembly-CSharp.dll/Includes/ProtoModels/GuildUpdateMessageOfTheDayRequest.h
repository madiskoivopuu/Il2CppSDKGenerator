#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildUpdateMessageOfTheDayRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildUpdateMessageOfTheDayRequest"));
	}

	template <typename T = MessageParser1GuildUpdateMessageOfTheDayRequest*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& MessageOfTheDayTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& messageOfTheDayType_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& MessageOfTheDayTextFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& messageOfTheDayText_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1GuildUpdateMessageOfTheDayRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1945924))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1945988))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945AA8))(this);
	}
	template <typename T = GuildUpdateMessageOfTheDayRequest*> T Clone() {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945BAC))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945C08))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*, int64_t))(Il2CppBase() + 0x1945C10))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945C18))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*, int64_t))(Il2CppBase() + 0x1945C20))(this, value);
	}
	template <typename T = int32_t> T get_MessageOfTheDayType() {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945C28))(this);
	}
	template <typename T = void> T set_MessageOfTheDayType(int32_t value) {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*, int32_t))(Il2CppBase() + 0x1945C30))(this, value);
	}
	template <typename T = Il2CppString*> T get_MessageOfTheDayText() {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945C38))(this);
	}
	template <typename T = void> T set_MessageOfTheDayText(Il2CppString* value) {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*, Il2CppString*))(Il2CppBase() + 0x1945C40))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*, Il2CppObject*))(Il2CppBase() + 0x1945CC0))(this, other);
	}
	template <typename T = bool> T Equals_1(GuildUpdateMessageOfTheDayRequest* other) {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*, GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945D30))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945DA4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945E54))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*, uintptr_t))(Il2CppBase() + 0x1945EB8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x1945F9C))(this);
	}
	template <typename T = void> T MergeFrom(GuildUpdateMessageOfTheDayRequest* other) {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*, GuildUpdateMessageOfTheDayRequest*))(Il2CppBase() + 0x19460DC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildUpdateMessageOfTheDayRequest*, uintptr_t))(Il2CppBase() + 0x1946128))(this, input);
	}

};

}
