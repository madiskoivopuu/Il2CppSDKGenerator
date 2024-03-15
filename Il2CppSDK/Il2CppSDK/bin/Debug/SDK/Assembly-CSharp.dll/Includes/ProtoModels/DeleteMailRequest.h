#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class DeleteMailRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "DeleteMailRequest"));
	}

	 static MessageParser1<ProtoModels::DeleteMailRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::DeleteMailRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& CountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& count_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::DeleteMailRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::DeleteMailRequest*>* (*)(void *))(Il2CppBase() + 0xEB96D4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xEB9738))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9858))(this);
	}
	template <typename R = ProtoModels::DeleteMailRequest*> R Clone() {
		return ((R (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9908))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9964))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(DeleteMailRequest*, int64_t))(Il2CppBase() + 0xEB996C))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9974))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(DeleteMailRequest*, int64_t))(Il2CppBase() + 0xEB997C))(this, value);
	}
	template <typename R = int64_t> R get_MailID() {
		return ((R (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9984))(this);
	}
	template <typename R = void> R set_MailID(int64_t value) {
		return ((R (*)(DeleteMailRequest*, int64_t))(Il2CppBase() + 0xEB998C))(this, value);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9994))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(DeleteMailRequest*, int32_t))(Il2CppBase() + 0xEB999C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(DeleteMailRequest*, Il2CppObject*))(Il2CppBase() + 0xEB99A4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::DeleteMailRequest* other) {
		return ((R (*)(DeleteMailRequest*, ProtoModels::DeleteMailRequest*))(Il2CppBase() + 0xEB9A14))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9A74))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9B1C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(DeleteMailRequest*, uintptr_t))(Il2CppBase() + 0xEB9B80))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9C5C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::DeleteMailRequest* other) {
		return ((R (*)(DeleteMailRequest*, ProtoModels::DeleteMailRequest*))(Il2CppBase() + 0xEB9D90))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(DeleteMailRequest*, uintptr_t))(Il2CppBase() + 0xEB9DC8))(this, input);
	}

};

}
