#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetUsersRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetUsersRequest"));
	}

	template <typename T = MessageParser1AdminGetUsersRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1AdminGetUsersRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B97C8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B982C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminGetUsersRequest*))(Il2CppBase() + 0x18B994C))(this);
	}
	template <typename T = AdminGetUsersRequest*> T Clone() {
		return ((T (*)(AdminGetUsersRequest*))(Il2CppBase() + 0x18B99E4))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(AdminGetUsersRequest*))(Il2CppBase() + 0x18B9A50))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(AdminGetUsersRequest*, int64_t))(Il2CppBase() + 0x18B9A58))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(AdminGetUsersRequest*, Il2CppObject*))(Il2CppBase() + 0x18B9A60))(this, other);
	}
	template <typename T = bool> T Equals_1(AdminGetUsersRequest* other) {
		return ((T (*)(AdminGetUsersRequest*, AdminGetUsersRequest*))(Il2CppBase() + 0x18B9AEC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminGetUsersRequest*))(Il2CppBase() + 0x18B9B1C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminGetUsersRequest*))(Il2CppBase() + 0x18B9B5C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminGetUsersRequest*, uintptr_t))(Il2CppBase() + 0x18B9BC0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminGetUsersRequest*))(Il2CppBase() + 0x18B9C18))(this);
	}
	template <typename T = void> T MergeFrom(AdminGetUsersRequest* other) {
		return ((T (*)(AdminGetUsersRequest*, AdminGetUsersRequest*))(Il2CppBase() + 0x18B9C94))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminGetUsersRequest*, uintptr_t))(Il2CppBase() + 0x18B9CA8))(this, input);
	}

};

}
