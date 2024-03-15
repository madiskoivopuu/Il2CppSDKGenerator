#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserConfirm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserConfirm"));
	}

	 static MessageParser1ProtoModels::UserConfirm*>*& _parser() {
		return *(MessageParser1ProtoModels::UserConfirm*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& AcceptFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& accept_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CancelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& cancel_() {
		return *(R*)((uintptr_t)this + 0x19);
	}

	 static MessageParser1ProtoModels::UserConfirm*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserConfirm*>* (*)(void *))(Il2CppBase() + 0x2464BEC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2464C50))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserConfirm*))(Il2CppBase() + 0x2464D70))(this);
	}
	template <typename R = ProtoModels::UserConfirm*> R Clone() {
		return ((R (*)(UserConfirm*))(Il2CppBase() + 0x2464E18))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserConfirm*))(Il2CppBase() + 0x2464E74))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserConfirm*, int64_t))(Il2CppBase() + 0x2464E7C))(this, value);
	}
	template <typename R = bool> R get_Accept() {
		return ((R (*)(UserConfirm*))(Il2CppBase() + 0x2464E84))(this);
	}
	template <typename R = void> R set_Accept(bool value) {
		return ((R (*)(UserConfirm*, bool))(Il2CppBase() + 0x2464E8C))(this, value);
	}
	template <typename R = bool> R get_Cancel() {
		return ((R (*)(UserConfirm*))(Il2CppBase() + 0x2464E98))(this);
	}
	template <typename R = void> R set_Cancel(bool value) {
		return ((R (*)(UserConfirm*, bool))(Il2CppBase() + 0x2464EA0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserConfirm*, Il2CppObject*))(Il2CppBase() + 0x2464EAC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserConfirm* other) {
		return ((R (*)(UserConfirm*, ProtoModels::UserConfirm*))(Il2CppBase() + 0x2464F1C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserConfirm*))(Il2CppBase() + 0x2464F88))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserConfirm*))(Il2CppBase() + 0x246501C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserConfirm*, uintptr_t))(Il2CppBase() + 0x2465080))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserConfirm*))(Il2CppBase() + 0x2465130))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserConfirm* other) {
		return ((R (*)(UserConfirm*, ProtoModels::UserConfirm*))(Il2CppBase() + 0x24651CC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserConfirm*, uintptr_t))(Il2CppBase() + 0x24651F8))(this, input);
	}

};

}
