#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserCheater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserCheater"));
	}

	 static MessageParser1ProtoModels::UserCheater*>*& _parser() {
		return *(MessageParser1ProtoModels::UserCheater*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& EventTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& eventTime_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::UserCheater*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserCheater*>* (*)(void *))(Il2CppBase() + 0x24644A8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x246450C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserCheater*))(Il2CppBase() + 0x246462C))(this);
	}
	template <typename R = ProtoModels::UserCheater*> R Clone() {
		return ((R (*)(UserCheater*))(Il2CppBase() + 0x24646CC))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserCheater*))(Il2CppBase() + 0x2464728))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserCheater*, int64_t))(Il2CppBase() + 0x2464730))(this, value);
	}
	template <typename R = int64_t> R get_EventTime() {
		return ((R (*)(UserCheater*))(Il2CppBase() + 0x2464738))(this);
	}
	template <typename R = void> R set_EventTime(int64_t value) {
		return ((R (*)(UserCheater*, int64_t))(Il2CppBase() + 0x2464740))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserCheater*, Il2CppObject*))(Il2CppBase() + 0x2464748))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserCheater* other) {
		return ((R (*)(UserCheater*, ProtoModels::UserCheater*))(Il2CppBase() + 0x24647E4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserCheater*))(Il2CppBase() + 0x2464824))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserCheater*))(Il2CppBase() + 0x2464890))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserCheater*, uintptr_t))(Il2CppBase() + 0x24648F4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserCheater*))(Il2CppBase() + 0x2464978))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserCheater* other) {
		return ((R (*)(UserCheater*, ProtoModels::UserCheater*))(Il2CppBase() + 0x2464A2C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserCheater*, uintptr_t))(Il2CppBase() + 0x2464A4C))(this, input);
	}

};

}
