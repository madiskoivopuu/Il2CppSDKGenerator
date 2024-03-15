#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SubstructMailRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SubstructMailRequest"));
	}

	 static MessageParser1ProtoModels::SubstructMailRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::SubstructMailRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& MailIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& mailID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::SubstructMailRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::SubstructMailRequest*>* (*)(void *))(Il2CppBase() + 0x16A1250))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x16A12B4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(SubstructMailRequest*))(Il2CppBase() + 0x16A13D4))(this);
	}
	template <typename R = ProtoModels::SubstructMailRequest*> R Clone() {
		return ((R (*)(SubstructMailRequest*))(Il2CppBase() + 0x16A147C))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(SubstructMailRequest*))(Il2CppBase() + 0x16A14D8))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(SubstructMailRequest*, int64_t))(Il2CppBase() + 0x16A14E0))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(SubstructMailRequest*))(Il2CppBase() + 0x16A14E8))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(SubstructMailRequest*, int64_t))(Il2CppBase() + 0x16A14F0))(this, value);
	}
	template <typename R = int64_t> R get_MailID() {
		return ((R (*)(SubstructMailRequest*))(Il2CppBase() + 0x16A14F8))(this);
	}
	template <typename R = void> R set_MailID(int64_t value) {
		return ((R (*)(SubstructMailRequest*, int64_t))(Il2CppBase() + 0x16A1500))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(SubstructMailRequest*, Il2CppObject*))(Il2CppBase() + 0x16A1508))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::SubstructMailRequest* other) {
		return ((R (*)(SubstructMailRequest*, ProtoModels::SubstructMailRequest*))(Il2CppBase() + 0x16A15B4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(SubstructMailRequest*))(Il2CppBase() + 0x16A1604))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(SubstructMailRequest*))(Il2CppBase() + 0x16A168C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(SubstructMailRequest*, uintptr_t))(Il2CppBase() + 0x16A16F0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(SubstructMailRequest*))(Il2CppBase() + 0x16A17A0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::SubstructMailRequest* other) {
		return ((R (*)(SubstructMailRequest*, ProtoModels::SubstructMailRequest*))(Il2CppBase() + 0x16A1898))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(SubstructMailRequest*, uintptr_t))(Il2CppBase() + 0x16A18C4))(this, input);
	}

};

}
