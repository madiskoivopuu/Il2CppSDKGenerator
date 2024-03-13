#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetUserBackupRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetUserBackupRequest"));
	}

	template <typename T = MessageParser1AdminGetUserBackupRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& AccountIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& accountID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1AdminGetUserBackupRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B8494))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B84F8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B8618))(this);
	}
	template <typename T = AdminGetUserBackupRequest*> T Clone() {
		return ((T (*)(AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B86B8))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B8714))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(AdminGetUserBackupRequest*, int64_t))(Il2CppBase() + 0x18B871C))(this, value);
	}
	template <typename T = int64_t> T get_AccountID() {
		return ((T (*)(AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B8724))(this);
	}
	template <typename T = void> T set_AccountID(int64_t value) {
		return ((T (*)(AdminGetUserBackupRequest*, int64_t))(Il2CppBase() + 0x18B872C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(AdminGetUserBackupRequest*, Il2CppObject*))(Il2CppBase() + 0x18B8734))(this, other);
	}
	template <typename T = bool> T Equals_1(AdminGetUserBackupRequest* other) {
		return ((T (*)(AdminGetUserBackupRequest*, AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B87D0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B8810))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B887C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminGetUserBackupRequest*, uintptr_t))(Il2CppBase() + 0x18B88E0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B8964))(this);
	}
	template <typename T = void> T MergeFrom(AdminGetUserBackupRequest* other) {
		return ((T (*)(AdminGetUserBackupRequest*, AdminGetUserBackupRequest*))(Il2CppBase() + 0x18B8A18))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminGetUserBackupRequest*, uintptr_t))(Il2CppBase() + 0x18B8A38))(this, input);
	}

};

}
