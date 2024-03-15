#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaChatConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaChatConfig"));
	}

	 static MessageParser1ProtoModels::ArenaChatConfig*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaChatConfig*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& LoginV2FieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& loginV2_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& RegistrationV2FieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& registrationV2_() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = int32_t> static R& ReloginV2FieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& reloginV2_() {
		return *(R*)((uintptr_t)this + 0x12);
	}
	template <typename R = int32_t> static R& ContactsFavouriteMaxFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& contactsFavouriteMax_() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> static R& ContactsRecentMaxFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& contactsRecentMax_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ServerIPFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& serverIP_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ServerFQDNFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& serverFQDN_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::ArenaChatConfig*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaChatConfig*>* (*)(void *))(Il2CppBase() + 0x1A1A328))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A1A38C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A4AC))(this);
	}
	template <typename R = ProtoModels::ArenaChatConfig*> R Clone() {
		return ((R (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A5E0))(this);
	}
	template <typename R = bool> R get_LoginV2() {
		return ((R (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A63C))(this);
	}
	template <typename R = void> R set_LoginV2(bool value) {
		return ((R (*)(ArenaChatConfig*, bool))(Il2CppBase() + 0x1A1A644))(this, value);
	}
	template <typename R = bool> R get_RegistrationV2() {
		return ((R (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A650))(this);
	}
	template <typename R = void> R set_RegistrationV2(bool value) {
		return ((R (*)(ArenaChatConfig*, bool))(Il2CppBase() + 0x1A1A658))(this, value);
	}
	template <typename R = bool> R get_ReloginV2() {
		return ((R (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A664))(this);
	}
	template <typename R = void> R set_ReloginV2(bool value) {
		return ((R (*)(ArenaChatConfig*, bool))(Il2CppBase() + 0x1A1A66C))(this, value);
	}
	template <typename R = int32_t> R get_ContactsFavouriteMax() {
		return ((R (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A678))(this);
	}
	template <typename R = void> R set_ContactsFavouriteMax(int32_t value) {
		return ((R (*)(ArenaChatConfig*, int32_t))(Il2CppBase() + 0x1A1A680))(this, value);
	}
	template <typename R = int32_t> R get_ContactsRecentMax() {
		return ((R (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A688))(this);
	}
	template <typename R = void> R set_ContactsRecentMax(int32_t value) {
		return ((R (*)(ArenaChatConfig*, int32_t))(Il2CppBase() + 0x1A1A690))(this, value);
	}
	template <typename R = Il2CppString*> R get_ServerIP() {
		return ((R (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A698))(this);
	}
	template <typename R = void> R set_ServerIP(Il2CppString* value) {
		return ((R (*)(ArenaChatConfig*, Il2CppString*))(Il2CppBase() + 0x1A1A6A0))(this, value);
	}
	template <typename R = Il2CppString*> R get_ServerFQDN() {
		return ((R (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A720))(this);
	}
	template <typename R = void> R set_ServerFQDN(Il2CppString* value) {
		return ((R (*)(ArenaChatConfig*, Il2CppString*))(Il2CppBase() + 0x1A1A728))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaChatConfig*, Il2CppObject*))(Il2CppBase() + 0x1A1A7A8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaChatConfig* other) {
		return ((R (*)(ArenaChatConfig*, ProtoModels::ArenaChatConfig*))(Il2CppBase() + 0x1A1A818))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A900))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1AA0C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaChatConfig*, uintptr_t))(Il2CppBase() + 0x1A1AA70))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1ABE0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaChatConfig* other) {
		return ((R (*)(ArenaChatConfig*, ProtoModels::ArenaChatConfig*))(Il2CppBase() + 0x1A1AD5C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaChatConfig*, uintptr_t))(Il2CppBase() + 0x1A1ADF8))(this, input);
	}

};

}
