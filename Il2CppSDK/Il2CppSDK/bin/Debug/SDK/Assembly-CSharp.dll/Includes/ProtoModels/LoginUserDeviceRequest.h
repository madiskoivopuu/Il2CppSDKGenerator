#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LoginUserDeviceRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LoginUserDeviceRequest"));
	}

	 static MessageParser1ProtoModels::LoginUserDeviceRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::LoginUserDeviceRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& DeviceIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& deviceID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& GoogleIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& googleID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& GamecenterIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& gamecenterID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ReferallIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& referallID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& LanguageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& language_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& VersionStrFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& versionStr_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& InfoFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::LoginUserDeviceInfo*> R& info_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& FBTokenFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& fBToken_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& RegionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& region_() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	 static MessageParser1ProtoModels::LoginUserDeviceRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::LoginUserDeviceRequest*>* (*)(void *))(Il2CppBase() + 0x172D040))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x172D0A4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D1C4))(this);
	}
	template <typename R = ProtoModels::LoginUserDeviceRequest*> R Clone() {
		return ((R (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D3A8))(this);
	}
	template <typename R = Il2CppString*> R get_DeviceID() {
		return ((R (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D404))(this);
	}
	template <typename R = void> R set_DeviceID(Il2CppString* value) {
		return ((R (*)(LoginUserDeviceRequest*, Il2CppString*))(Il2CppBase() + 0x172D40C))(this, value);
	}
	template <typename R = Il2CppString*> R get_GoogleID() {
		return ((R (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D48C))(this);
	}
	template <typename R = void> R set_GoogleID(Il2CppString* value) {
		return ((R (*)(LoginUserDeviceRequest*, Il2CppString*))(Il2CppBase() + 0x172D494))(this, value);
	}
	template <typename R = Il2CppString*> R get_GamecenterID() {
		return ((R (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D514))(this);
	}
	template <typename R = void> R set_GamecenterID(Il2CppString* value) {
		return ((R (*)(LoginUserDeviceRequest*, Il2CppString*))(Il2CppBase() + 0x172D51C))(this, value);
	}
	template <typename R = Il2CppString*> R get_ReferallID() {
		return ((R (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D59C))(this);
	}
	template <typename R = void> R set_ReferallID(Il2CppString* value) {
		return ((R (*)(LoginUserDeviceRequest*, Il2CppString*))(Il2CppBase() + 0x172D5A4))(this, value);
	}
	template <typename R = int32_t> R get_Language() {
		return ((R (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D624))(this);
	}
	template <typename R = void> R set_Language(int32_t value) {
		return ((R (*)(LoginUserDeviceRequest*, int32_t))(Il2CppBase() + 0x172D62C))(this, value);
	}
	template <typename R = Il2CppString*> R get_VersionStr() {
		return ((R (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D634))(this);
	}
	template <typename R = void> R set_VersionStr(Il2CppString* value) {
		return ((R (*)(LoginUserDeviceRequest*, Il2CppString*))(Il2CppBase() + 0x172D63C))(this, value);
	}
	template <typename R = ProtoModels::LoginUserDeviceInfo*> R get_Info() {
		return ((R (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D6BC))(this);
	}
	template <typename R = void> R set_Info(ProtoModels::LoginUserDeviceInfo* value) {
		return ((R (*)(LoginUserDeviceRequest*, ProtoModels::LoginUserDeviceInfo*))(Il2CppBase() + 0x172D6C4))(this, value);
	}
	template <typename R = Il2CppString*> R get_FBToken() {
		return ((R (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D6CC))(this);
	}
	template <typename R = void> R set_FBToken(Il2CppString* value) {
		return ((R (*)(LoginUserDeviceRequest*, Il2CppString*))(Il2CppBase() + 0x172D6D4))(this, value);
	}
	template <typename R = Il2CppString*> R get_Region() {
		return ((R (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D754))(this);
	}
	template <typename R = void> R set_Region(Il2CppString* value) {
		return ((R (*)(LoginUserDeviceRequest*, Il2CppString*))(Il2CppBase() + 0x172D75C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(LoginUserDeviceRequest*, Il2CppObject*))(Il2CppBase() + 0x172D7DC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::LoginUserDeviceRequest* other) {
		return ((R (*)(LoginUserDeviceRequest*, ProtoModels::LoginUserDeviceRequest*))(Il2CppBase() + 0x172D84C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172D93C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172DA88))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(LoginUserDeviceRequest*, uintptr_t))(Il2CppBase() + 0x172DAEC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(LoginUserDeviceRequest*))(Il2CppBase() + 0x172DCDC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::LoginUserDeviceRequest* other) {
		return ((R (*)(LoginUserDeviceRequest*, ProtoModels::LoginUserDeviceRequest*))(Il2CppBase() + 0x172DF80))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(LoginUserDeviceRequest*, uintptr_t))(Il2CppBase() + 0x172E0DC))(this, input);
	}

};

}
