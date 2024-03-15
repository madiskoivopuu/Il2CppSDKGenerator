#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserGetPeopleWorldInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserGetPeopleWorldInfo"));
	}

	 static MessageParser1ProtoModels::UserGetPeopleWorldInfo*>*& _parser() {
		return *(MessageParser1ProtoModels::UserGetPeopleWorldInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& EmailFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& email_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::UserGetPeopleWorldInfo*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserGetPeopleWorldInfo*>* (*)(void *))(Il2CppBase() + 0x246868C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x24686F0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468810))(this);
	}
	template <typename R = ProtoModels::UserGetPeopleWorldInfo*> R Clone() {
		return ((R (*)(UserGetPeopleWorldInfo*))(Il2CppBase() + 0x246890C))(this);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468968))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(UserGetPeopleWorldInfo*, int64_t))(Il2CppBase() + 0x2468970))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468978))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserGetPeopleWorldInfo*, int64_t))(Il2CppBase() + 0x2468980))(this, value);
	}
	template <typename R = Il2CppString*> R get_Email() {
		return ((R (*)(UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468988))(this);
	}
	template <typename R = void> R set_Email(Il2CppString* value) {
		return ((R (*)(UserGetPeopleWorldInfo*, Il2CppString*))(Il2CppBase() + 0x2468990))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserGetPeopleWorldInfo*, Il2CppObject*))(Il2CppBase() + 0x2468A10))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserGetPeopleWorldInfo* other) {
		return ((R (*)(UserGetPeopleWorldInfo*, ProtoModels::UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468A80))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468AE4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468B74))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserGetPeopleWorldInfo*, uintptr_t))(Il2CppBase() + 0x2468BD8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468C90))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserGetPeopleWorldInfo* other) {
		return ((R (*)(UserGetPeopleWorldInfo*, ProtoModels::UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468D94))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserGetPeopleWorldInfo*, uintptr_t))(Il2CppBase() + 0x2468DD4))(this, input);
	}

};

}
