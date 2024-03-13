#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserGoogleLinkResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserGoogleLinkResponse"));
	}

	template <typename T = MessageParser1UserGoogleLinkResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ConflictClanFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Clan*> T& conflictClan_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ConflictUserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& conflictUserID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1UserGoogleLinkResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x246BADC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x246BB40))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246BC60))(this);
	}
	template <typename T = UserGoogleLinkResponse*> T Clone() {
		return ((T (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246BD88))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246BDE4))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(UserGoogleLinkResponse*, int32_t))(Il2CppBase() + 0x246BDEC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246BDF4))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(UserGoogleLinkResponse*, Il2CppString*))(Il2CppBase() + 0x246BDFC))(this, value);
	}
	template <typename T = Clan*> T get_ConflictClan() {
		return ((T (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246BE7C))(this);
	}
	template <typename T = void> T set_ConflictClan(Clan* value) {
		return ((T (*)(UserGoogleLinkResponse*, Clan*))(Il2CppBase() + 0x246BE84))(this, value);
	}
	template <typename T = int64_t> T get_ConflictUserID() {
		return ((T (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246BE8C))(this);
	}
	template <typename T = void> T set_ConflictUserID(int64_t value) {
		return ((T (*)(UserGoogleLinkResponse*, int64_t))(Il2CppBase() + 0x246BE94))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserGoogleLinkResponse*, Il2CppObject*))(Il2CppBase() + 0x246BE9C))(this, other);
	}
	template <typename T = bool> T Equals_1(UserGoogleLinkResponse* other) {
		return ((T (*)(UserGoogleLinkResponse*, UserGoogleLinkResponse*))(Il2CppBase() + 0x246BF0C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246BF90))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246C03C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserGoogleLinkResponse*, uintptr_t))(Il2CppBase() + 0x246C0A0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246C184))(this);
	}
	template <typename T = void> T MergeFrom(UserGoogleLinkResponse* other) {
		return ((T (*)(UserGoogleLinkResponse*, UserGoogleLinkResponse*))(Il2CppBase() + 0x246C2C4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserGoogleLinkResponse*, uintptr_t))(Il2CppBase() + 0x246C398))(this, input);
	}

};

}
