#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetUserBackupRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetUserBackupRequest"));
	}

	 static MessageParser1ProtoModels::AdminGetUserBackupRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::AdminGetUserBackupRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& AccountIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& accountID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::AdminGetUserBackupRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::AdminGetUserBackupRequest*>* (*)(void *))(Il2CppBase() + 0x18B8494))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x18B84F8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B8618))(this);
	}
	template <typename R = ProtoModels::AdminGetUserBackupRequest*> R Clone() {
		return ((R (*)(AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B86B8))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B8714))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(AdminGetUserBackupRequest*, int64_t))(Il2CppBase() + 0x18B871C))(this, value);
	}
	template <typename R = int64_t> R get_AccountID() {
		return ((R (*)(AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B8724))(this);
	}
	template <typename R = void> R set_AccountID(int64_t value) {
		return ((R (*)(AdminGetUserBackupRequest*, int64_t))(Il2CppBase() + 0x18B872C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminGetUserBackupRequest*, Il2CppObject*))(Il2CppBase() + 0x18B8734))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminGetUserBackupRequest* other) {
		return ((R (*)(AdminGetUserBackupRequest*, ProtoModels::AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B87D0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B8810))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B887C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminGetUserBackupRequest*, uintptr_t))(Il2CppBase() + 0x18B88E0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B8964))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminGetUserBackupRequest* other) {
		return ((R (*)(AdminGetUserBackupRequest*, ProtoModels::AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B8A18))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminGetUserBackupRequest*, uintptr_t))(Il2CppBase() + 0x18B8A38))(this, input);
	}

};

}
