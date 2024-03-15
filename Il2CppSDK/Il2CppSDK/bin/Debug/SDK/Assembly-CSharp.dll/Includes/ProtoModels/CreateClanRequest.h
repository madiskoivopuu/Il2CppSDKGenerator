#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CreateClanRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CreateClanRequest"));
	}

	 static MessageParser1ProtoModels::CreateClanRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::CreateClanRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1ProtoModels::CreateClanRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::CreateClanRequest*>* (*)(void *))(Il2CppBase() + 0x134BFC8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x134C02C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CreateClanRequest*))(Il2CppBase() + 0x134C14C))(this);
	}
	template <typename R = ProtoModels::CreateClanRequest*> R Clone() {
		return ((R (*)(CreateClanRequest*))(Il2CppBase() + 0x134C1EC))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(CreateClanRequest*))(Il2CppBase() + 0x134C248))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(CreateClanRequest*, int64_t))(Il2CppBase() + 0x134C250))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(CreateClanRequest*))(Il2CppBase() + 0x134C258))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(CreateClanRequest*, int64_t))(Il2CppBase() + 0x134C260))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CreateClanRequest*, Il2CppObject*))(Il2CppBase() + 0x134C268))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CreateClanRequest* other) {
		return ((R (*)(CreateClanRequest*, ProtoModels::CreateClanRequest*))(Il2CppBase() + 0x134C304))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CreateClanRequest*))(Il2CppBase() + 0x134C344))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CreateClanRequest*))(Il2CppBase() + 0x134C3B0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CreateClanRequest*, uintptr_t))(Il2CppBase() + 0x134C414))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CreateClanRequest*))(Il2CppBase() + 0x134C498))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CreateClanRequest* other) {
		return ((R (*)(CreateClanRequest*, ProtoModels::CreateClanRequest*))(Il2CppBase() + 0x134C54C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CreateClanRequest*, uintptr_t))(Il2CppBase() + 0x134C56C))(this, input);
	}

};

}
