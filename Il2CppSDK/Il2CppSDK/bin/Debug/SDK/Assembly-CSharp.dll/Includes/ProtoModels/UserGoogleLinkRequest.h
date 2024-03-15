#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserGoogleLinkRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserGoogleLinkRequest"));
	}

	 static MessageParser1<ProtoModels::UserGoogleLinkRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::UserGoogleLinkRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& LinkFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& link_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ForceFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& force_() {
		return *(R*)((uintptr_t)this + 0x21);
	}
	template <typename R = int32_t> static R& TargetUserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& targetUserID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ThirdPartyIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& thirdPartyID_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& LinkTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::LinkUserType> R& linkType_() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	 static MessageParser1<ProtoModels::UserGoogleLinkRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::UserGoogleLinkRequest*>* (*)(void *))(Il2CppBase() + 0x246AE58))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x246AEBC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246AFDC))(this);
	}
	template <typename R = ProtoModels::UserGoogleLinkRequest*> R Clone() {
		return ((R (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B0FC))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B158))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(UserGoogleLinkRequest*, int64_t))(Il2CppBase() + 0x246B160))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B168))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserGoogleLinkRequest*, int64_t))(Il2CppBase() + 0x246B170))(this, value);
	}
	template <typename R = bool> R get_Link() {
		return ((R (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B178))(this);
	}
	template <typename R = void> R set_Link(bool value) {
		return ((R (*)(UserGoogleLinkRequest*, bool))(Il2CppBase() + 0x246B180))(this, value);
	}
	template <typename R = bool> R get_Force() {
		return ((R (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B18C))(this);
	}
	template <typename R = void> R set_Force(bool value) {
		return ((R (*)(UserGoogleLinkRequest*, bool))(Il2CppBase() + 0x246B194))(this, value);
	}
	template <typename R = int64_t> R get_TargetUserID() {
		return ((R (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B1A0))(this);
	}
	template <typename R = void> R set_TargetUserID(int64_t value) {
		return ((R (*)(UserGoogleLinkRequest*, int64_t))(Il2CppBase() + 0x246B1A8))(this, value);
	}
	template <typename R = Il2CppString*> R get_ThirdPartyID() {
		return ((R (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B1B0))(this);
	}
	template <typename R = void> R set_ThirdPartyID(Il2CppString* value) {
		return ((R (*)(UserGoogleLinkRequest*, Il2CppString*))(Il2CppBase() + 0x246B1B8))(this, value);
	}
	template <typename R = ProtoModels::LinkUserType> R get_LinkType() {
		return ((R (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B238))(this);
	}
	template <typename R = void> R set_LinkType(ProtoModels::LinkUserType value) {
		return ((R (*)(UserGoogleLinkRequest*, ProtoModels::LinkUserType))(Il2CppBase() + 0x246B240))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserGoogleLinkRequest*, Il2CppObject*))(Il2CppBase() + 0x246B248))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserGoogleLinkRequest* other) {
		return ((R (*)(UserGoogleLinkRequest*, ProtoModels::UserGoogleLinkRequest*))(Il2CppBase() + 0x246B2B8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B388))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B498))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserGoogleLinkRequest*, uintptr_t))(Il2CppBase() + 0x246B4FC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B664))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserGoogleLinkRequest* other) {
		return ((R (*)(UserGoogleLinkRequest*, ProtoModels::UserGoogleLinkRequest*))(Il2CppBase() + 0x246B808))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserGoogleLinkRequest*, uintptr_t))(Il2CppBase() + 0x246B890))(this, input);
	}

};

}
