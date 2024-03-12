#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaChatConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaChatConfig"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LoginV2FieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& loginV2_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& RegistrationV2FieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& registrationV2_() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = int32_t> static T& ReloginV2FieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& reloginV2_() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = int32_t> static T& ContactsFavouriteMaxFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& contactsFavouriteMax_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& ContactsRecentMaxFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& contactsRecentMax_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ServerIPFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& serverIP_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ServerFQDNFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& serverFQDN_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A1A328))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A1A38C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A4AC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A5E0))(this);
	}
	template <typename T = bool> T get_LoginV2() {
		return ((T (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A63C))(this);
	}
	template <typename T = void> T set_LoginV2(bool value) {
		return ((T (*)(ArenaChatConfig*, bool))(Il2CppBase() + 0x1A1A644))(this, value);
	}
	template <typename T = bool> T get_RegistrationV2() {
		return ((T (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A650))(this);
	}
	template <typename T = void> T set_RegistrationV2(bool value) {
		return ((T (*)(ArenaChatConfig*, bool))(Il2CppBase() + 0x1A1A658))(this, value);
	}
	template <typename T = bool> T get_ReloginV2() {
		return ((T (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A664))(this);
	}
	template <typename T = void> T set_ReloginV2(bool value) {
		return ((T (*)(ArenaChatConfig*, bool))(Il2CppBase() + 0x1A1A66C))(this, value);
	}
	template <typename T = int32_t> T get_ContactsFavouriteMax() {
		return ((T (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A678))(this);
	}
	template <typename T = void> T set_ContactsFavouriteMax(int32_t value) {
		return ((T (*)(ArenaChatConfig*, int32_t))(Il2CppBase() + 0x1A1A680))(this, value);
	}
	template <typename T = int32_t> T get_ContactsRecentMax() {
		return ((T (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A688))(this);
	}
	template <typename T = void> T set_ContactsRecentMax(int32_t value) {
		return ((T (*)(ArenaChatConfig*, int32_t))(Il2CppBase() + 0x1A1A690))(this, value);
	}
	template <typename T = Il2CppString*> T get_ServerIP() {
		return ((T (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A698))(this);
	}
	template <typename T = void> T set_ServerIP(Il2CppString* value) {
		return ((T (*)(ArenaChatConfig*, Il2CppString*))(Il2CppBase() + 0x1A1A6A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_ServerFQDN() {
		return ((T (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A720))(this);
	}
	template <typename T = void> T set_ServerFQDN(Il2CppString* value) {
		return ((T (*)(ArenaChatConfig*, Il2CppString*))(Il2CppBase() + 0x1A1A728))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaChatConfig*, uintptr_t))(Il2CppBase() + 0x1A1A7A8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaChatConfig*, uintptr_t))(Il2CppBase() + 0x1A1A818))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1A900))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1AA0C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaChatConfig*, uintptr_t))(Il2CppBase() + 0x1A1AA70))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaChatConfig*))(Il2CppBase() + 0x1A1ABE0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaChatConfig*, uintptr_t))(Il2CppBase() + 0x1A1AD5C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaChatConfig*, uintptr_t))(Il2CppBase() + 0x1A1ADF8))(this, input);
	}

};

}
