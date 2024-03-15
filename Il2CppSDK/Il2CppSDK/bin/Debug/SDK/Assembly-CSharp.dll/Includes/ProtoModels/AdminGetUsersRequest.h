#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetUsersRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetUsersRequest"));
	}

	 static MessageParser1ProtoModels::AdminGetUsersRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::AdminGetUsersRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1ProtoModels::AdminGetUsersRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::AdminGetUsersRequest*>* (*)(void *))(Il2CppBase() + 0x18B97C8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x18B982C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminGetUsersRequest*))(Il2CppBase() + 0x18B994C))(this);
	}
	template <typename R = ProtoModels::AdminGetUsersRequest*> R Clone() {
		return ((R (*)(AdminGetUsersRequest*))(Il2CppBase() + 0x18B99E4))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(AdminGetUsersRequest*))(Il2CppBase() + 0x18B9A50))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(AdminGetUsersRequest*, int64_t))(Il2CppBase() + 0x18B9A58))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminGetUsersRequest*, Il2CppObject*))(Il2CppBase() + 0x18B9A60))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminGetUsersRequest* other) {
		return ((R (*)(AdminGetUsersRequest*, ProtoModels::AdminGetUsersRequest*))(Il2CppBase() + 0x18B9AEC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminGetUsersRequest*))(Il2CppBase() + 0x18B9B1C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminGetUsersRequest*))(Il2CppBase() + 0x18B9B5C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminGetUsersRequest*, uintptr_t))(Il2CppBase() + 0x18B9BC0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminGetUsersRequest*))(Il2CppBase() + 0x18B9C18))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminGetUsersRequest* other) {
		return ((R (*)(AdminGetUsersRequest*, ProtoModels::AdminGetUsersRequest*))(Il2CppBase() + 0x18B9C94))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminGetUsersRequest*, uintptr_t))(Il2CppBase() + 0x18B9CA8))(this, input);
	}

};

}
