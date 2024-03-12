#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserGoogleLinkRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserGoogleLinkRequest"));
	}

	template <typename T = void*> static T& _parser() {
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
	template <typename T = int32_t> static T& LinkFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& link_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ForceFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& force_() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = int32_t> static T& TargetUserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& targetUserID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ThirdPartyIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& thirdPartyID_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& LinkTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& linkType_() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x246AE58))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x246AEBC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246AFDC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B0FC))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B158))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(UserGoogleLinkRequest*, int64_t))(Il2CppBase() + 0x246B160))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B168))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserGoogleLinkRequest*, int64_t))(Il2CppBase() + 0x246B170))(this, value);
	}
	template <typename T = bool> T get_Link() {
		return ((T (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B178))(this);
	}
	template <typename T = void> T set_Link(bool value) {
		return ((T (*)(UserGoogleLinkRequest*, bool))(Il2CppBase() + 0x246B180))(this, value);
	}
	template <typename T = bool> T get_Force() {
		return ((T (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B18C))(this);
	}
	template <typename T = void> T set_Force(bool value) {
		return ((T (*)(UserGoogleLinkRequest*, bool))(Il2CppBase() + 0x246B194))(this, value);
	}
	template <typename T = int64_t> T get_TargetUserID() {
		return ((T (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B1A0))(this);
	}
	template <typename T = void> T set_TargetUserID(int64_t value) {
		return ((T (*)(UserGoogleLinkRequest*, int64_t))(Il2CppBase() + 0x246B1A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_ThirdPartyID() {
		return ((T (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B1B0))(this);
	}
	template <typename T = void> T set_ThirdPartyID(Il2CppString* value) {
		return ((T (*)(UserGoogleLinkRequest*, Il2CppString*))(Il2CppBase() + 0x246B1B8))(this, value);
	}
	template <typename T = uintptr_t> T get_LinkType() {
		return ((T (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B238))(this);
	}
	template <typename T = void> T set_LinkType(uintptr_t value) {
		return ((T (*)(UserGoogleLinkRequest*, uintptr_t))(Il2CppBase() + 0x246B240))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserGoogleLinkRequest*, uintptr_t))(Il2CppBase() + 0x246B248))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserGoogleLinkRequest*, uintptr_t))(Il2CppBase() + 0x246B2B8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B388))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B498))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserGoogleLinkRequest*, uintptr_t))(Il2CppBase() + 0x246B4FC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserGoogleLinkRequest*))(Il2CppBase() + 0x246B664))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserGoogleLinkRequest*, uintptr_t))(Il2CppBase() + 0x246B808))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserGoogleLinkRequest*, uintptr_t))(Il2CppBase() + 0x246B890))(this, input);
	}

};

}
