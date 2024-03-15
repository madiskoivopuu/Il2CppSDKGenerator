#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserGetPeopleWorldsRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserGetPeopleWorldsRequest"));
	}

	 static MessageParser1<ProtoModels::UserGetPeopleWorldsRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::UserGetPeopleWorldsRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::UserGetPeopleWorldsRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::UserGetPeopleWorldsRequest*>* (*)(void *))(Il2CppBase() + 0x2469B7C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2469BE0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserGetPeopleWorldsRequest*))(Il2CppBase() + 0x2469D00))(this);
	}
	template <typename R = ProtoModels::UserGetPeopleWorldsRequest*> R Clone() {
		return ((R (*)(UserGetPeopleWorldsRequest*))(Il2CppBase() + 0x2469D98))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserGetPeopleWorldsRequest*))(Il2CppBase() + 0x2469E04))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserGetPeopleWorldsRequest*, int64_t))(Il2CppBase() + 0x2469E0C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserGetPeopleWorldsRequest*, Il2CppObject*))(Il2CppBase() + 0x2469E14))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserGetPeopleWorldsRequest* other) {
		return ((R (*)(UserGetPeopleWorldsRequest*, ProtoModels::UserGetPeopleWorldsRequest*))(Il2CppBase() + 0x2469EA0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserGetPeopleWorldsRequest*))(Il2CppBase() + 0x2469ED0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserGetPeopleWorldsRequest*))(Il2CppBase() + 0x2469F10))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserGetPeopleWorldsRequest*, uintptr_t))(Il2CppBase() + 0x2469F74))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserGetPeopleWorldsRequest*))(Il2CppBase() + 0x2469FCC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserGetPeopleWorldsRequest* other) {
		return ((R (*)(UserGetPeopleWorldsRequest*, ProtoModels::UserGetPeopleWorldsRequest*))(Il2CppBase() + 0x246A048))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserGetPeopleWorldsRequest*, uintptr_t))(Il2CppBase() + 0x246A05C))(this, input);
	}

};

}
