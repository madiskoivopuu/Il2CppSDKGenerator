#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserCanChangeRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserCanChangeRequest"));
	}

	 static MessageParser1ProtoModels::UserCanChangeRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::UserCanChangeRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CanFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::CanType*> R& can_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& value_() {
		return *(R*)((uintptr_t)this + 0x24);
	}

	 static MessageParser1ProtoModels::UserCanChangeRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserCanChangeRequest*>* (*)(void *))(Il2CppBase() + 0x1542AF8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1542B5C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1542C7C))(this);
	}
	template <typename R = ProtoModels::UserCanChangeRequest*> R Clone() {
		return ((R (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1542D2C))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1542D88))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserCanChangeRequest*, int64_t))(Il2CppBase() + 0x1542D90))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1542D98))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(UserCanChangeRequest*, int64_t))(Il2CppBase() + 0x1542DA0))(this, value);
	}
	template <typename R = ProtoModels::CanType*> R get_Can() {
		return ((R (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1542DA8))(this);
	}
	template <typename R = void> R set_Can(ProtoModels::CanType* value) {
		return ((R (*)(UserCanChangeRequest*, ProtoModels::CanType*))(Il2CppBase() + 0x1542DB0))(this, value);
	}
	template <typename R = bool> R get_Value() {
		return ((R (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1542DB8))(this);
	}
	template <typename R = void> R set_Value(bool value) {
		return ((R (*)(UserCanChangeRequest*, bool))(Il2CppBase() + 0x1542DC0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserCanChangeRequest*, Il2CppObject*))(Il2CppBase() + 0x1542DCC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserCanChangeRequest* other) {
		return ((R (*)(UserCanChangeRequest*, ProtoModels::UserCanChangeRequest*))(Il2CppBase() + 0x1542E3C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1542EA8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1542F58))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserCanChangeRequest*, uintptr_t))(Il2CppBase() + 0x1542FBC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1543098))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserCanChangeRequest* other) {
		return ((R (*)(UserCanChangeRequest*, ProtoModels::UserCanChangeRequest*))(Il2CppBase() + 0x15431A4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserCanChangeRequest*, uintptr_t))(Il2CppBase() + 0x15431DC))(this, input);
	}

};

}
