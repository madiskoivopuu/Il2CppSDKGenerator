#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LoginUserDeviceRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LoginUserDeviceRequest"));
	}

	template <typename T = MessageParser1LoginUserDeviceRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DeviceIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& deviceID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& GoogleIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& googleID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& GamecenterIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& gamecenterID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ReferallIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& referallID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& LanguageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& language_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& VersionStrFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& versionStr_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& InfoFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = LoginUserDeviceInfo*> T& info_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& FBTokenFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& fBToken_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& RegionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& region_() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = MessageParser1LoginUserDeviceRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x172D040))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x172D0A4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D1C4))(this);
	}
	template <typename T = LoginUserDeviceRequest*> T Clone() {
		return ((T (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D3A8))(this);
	}
	template <typename T = Il2CppString*> T get_DeviceID() {
		return ((T (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D404))(this);
	}
	template <typename T = void> T set_DeviceID(Il2CppString* value) {
		return ((T (*)(LoginUserDeviceRequest*, Il2CppString*))(Il2CppBase() + 0x172D40C))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoogleID() {
		return ((T (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D48C))(this);
	}
	template <typename T = void> T set_GoogleID(Il2CppString* value) {
		return ((T (*)(LoginUserDeviceRequest*, Il2CppString*))(Il2CppBase() + 0x172D494))(this, value);
	}
	template <typename T = Il2CppString*> T get_GamecenterID() {
		return ((T (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D514))(this);
	}
	template <typename T = void> T set_GamecenterID(Il2CppString* value) {
		return ((T (*)(LoginUserDeviceRequest*, Il2CppString*))(Il2CppBase() + 0x172D51C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ReferallID() {
		return ((T (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D59C))(this);
	}
	template <typename T = void> T set_ReferallID(Il2CppString* value) {
		return ((T (*)(LoginUserDeviceRequest*, Il2CppString*))(Il2CppBase() + 0x172D5A4))(this, value);
	}
	template <typename T = int32_t> T get_Language() {
		return ((T (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D624))(this);
	}
	template <typename T = void> T set_Language(int32_t value) {
		return ((T (*)(LoginUserDeviceRequest*, int32_t))(Il2CppBase() + 0x172D62C))(this, value);
	}
	template <typename T = Il2CppString*> T get_VersionStr() {
		return ((T (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D634))(this);
	}
	template <typename T = void> T set_VersionStr(Il2CppString* value) {
		return ((T (*)(LoginUserDeviceRequest*, Il2CppString*))(Il2CppBase() + 0x172D63C))(this, value);
	}
	template <typename T = LoginUserDeviceInfo*> T get_Info() {
		return ((T (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D6BC))(this);
	}
	template <typename T = void> T set_Info(LoginUserDeviceInfo* value) {
		return ((T (*)(LoginUserDeviceRequest*, LoginUserDeviceInfo*))(Il2CppBase() + 0x172D6C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_FBToken() {
		return ((T (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D6CC))(this);
	}
	template <typename T = void> T set_FBToken(Il2CppString* value) {
		return ((T (*)(LoginUserDeviceRequest*, Il2CppString*))(Il2CppBase() + 0x172D6D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Region() {
		return ((T (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D754))(this);
	}
	template <typename T = void> T set_Region(Il2CppString* value) {
		return ((T (*)(LoginUserDeviceRequest*, Il2CppString*))(Il2CppBase() + 0x172D75C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(LoginUserDeviceRequest*, Il2CppObject*))(Il2CppBase() + 0x172D7DC))(this, other);
	}
	template <typename T = bool> T Equals_1(LoginUserDeviceRequest* other) {
		return ((T (*)(LoginUserDeviceRequest*, LoginUserDeviceRequest*))(Il2CppBase() + 0x172D84C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D93C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172DA88))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(LoginUserDeviceRequest*, uintptr_t))(Il2CppBase() + 0x172DAEC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172DCDC))(this);
	}
	template <typename T = void> T MergeFrom(LoginUserDeviceRequest* other) {
		return ((T (*)(LoginUserDeviceRequest*, LoginUserDeviceRequest*))(Il2CppBase() + 0x172DF80))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(LoginUserDeviceRequest*, uintptr_t))(Il2CppBase() + 0x172E0DC))(this, input);
	}

};

}
