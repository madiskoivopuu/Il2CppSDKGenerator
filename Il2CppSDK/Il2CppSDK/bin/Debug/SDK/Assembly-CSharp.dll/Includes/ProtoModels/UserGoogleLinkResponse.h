#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserGoogleLinkResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserGoogleLinkResponse"));
	}

	 static MessageParser1ProtoModels::UserGoogleLinkResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::UserGoogleLinkResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ConflictClanFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Clan*> R& conflictClan_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ConflictUserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& conflictUserID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::UserGoogleLinkResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserGoogleLinkResponse*>* (*)(void *))(Il2CppBase() + 0x246BADC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x246BB40))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246BC60))(this);
	}
	template <typename R = ProtoModels::UserGoogleLinkResponse*> R Clone() {
		return ((R (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246BD88))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246BDE4))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(UserGoogleLinkResponse*, int32_t))(Il2CppBase() + 0x246BDEC))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246BDF4))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(UserGoogleLinkResponse*, Il2CppString*))(Il2CppBase() + 0x246BDFC))(this, value);
	}
	template <typename R = ProtoModels::Clan*> R get_ConflictClan() {
		return ((R (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246BE7C))(this);
	}
	template <typename R = void> R set_ConflictClan(ProtoModels::Clan* value) {
		return ((R (*)(UserGoogleLinkResponse*, ProtoModels::Clan*))(Il2CppBase() + 0x246BE84))(this, value);
	}
	template <typename R = int64_t> R get_ConflictUserID() {
		return ((R (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246BE8C))(this);
	}
	template <typename R = void> R set_ConflictUserID(int64_t value) {
		return ((R (*)(UserGoogleLinkResponse*, int64_t))(Il2CppBase() + 0x246BE94))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserGoogleLinkResponse*, Il2CppObject*))(Il2CppBase() + 0x246BE9C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserGoogleLinkResponse* other) {
		return ((R (*)(UserGoogleLinkResponse*, ProtoModels::UserGoogleLinkResponse*))(Il2CppBase() + 0x246BF0C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246BF90))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246C03C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserGoogleLinkResponse*, uintptr_t))(Il2CppBase() + 0x246C0A0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserGoogleLinkResponse*))(Il2CppBase() + 0x246C184))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserGoogleLinkResponse* other) {
		return ((R (*)(UserGoogleLinkResponse*, ProtoModels::UserGoogleLinkResponse*))(Il2CppBase() + 0x246C2C4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserGoogleLinkResponse*, uintptr_t))(Il2CppBase() + 0x246C398))(this, input);
	}

};

}
