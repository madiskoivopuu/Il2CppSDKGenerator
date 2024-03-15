#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ResetUserCooldownRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ResetUserCooldownRequest"));
	}

	 static MessageParser1ProtoModels::ResetUserCooldownRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ResetUserCooldownRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1ProtoModels::ResetUserCooldownRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ResetUserCooldownRequest*>* (*)(void *))(Il2CppBase() + 0x119A7D8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x119A83C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ResetUserCooldownRequest*))(Il2CppBase() + 0x119A95C))(this);
	}
	template <typename R = ProtoModels::ResetUserCooldownRequest*> R Clone() {
		return ((R (*)(ResetUserCooldownRequest*))(Il2CppBase() + 0x119A9FC))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ResetUserCooldownRequest*))(Il2CppBase() + 0x119AA58))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ResetUserCooldownRequest*, int64_t))(Il2CppBase() + 0x119AA60))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ResetUserCooldownRequest*))(Il2CppBase() + 0x119AA68))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ResetUserCooldownRequest*, int64_t))(Il2CppBase() + 0x119AA70))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ResetUserCooldownRequest*, Il2CppObject*))(Il2CppBase() + 0x119AA78))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ResetUserCooldownRequest* other) {
		return ((R (*)(ResetUserCooldownRequest*, ProtoModels::ResetUserCooldownRequest*))(Il2CppBase() + 0x119AB14))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ResetUserCooldownRequest*))(Il2CppBase() + 0x119AB54))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ResetUserCooldownRequest*))(Il2CppBase() + 0x119ABC0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ResetUserCooldownRequest*, uintptr_t))(Il2CppBase() + 0x119AC24))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ResetUserCooldownRequest*))(Il2CppBase() + 0x119ACA8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ResetUserCooldownRequest* other) {
		return ((R (*)(ResetUserCooldownRequest*, ProtoModels::ResetUserCooldownRequest*))(Il2CppBase() + 0x119AD5C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ResetUserCooldownRequest*, uintptr_t))(Il2CppBase() + 0x119AD7C))(this, input);
	}

};

}
