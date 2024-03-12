#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetUsersResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetUsersResponse"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& UsersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_users_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& users_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B9E2C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B9E90))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminGetUsersResponse*))(Il2CppBase() + 0x18B9FB0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(AdminGetUsersResponse*))(Il2CppBase() + 0x18BA144))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(AdminGetUsersResponse*))(Il2CppBase() + 0x18BA1A0))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(AdminGetUsersResponse*, int32_t))(Il2CppBase() + 0x18BA1A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(AdminGetUsersResponse*))(Il2CppBase() + 0x18BA1B0))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(AdminGetUsersResponse*, Il2CppString*))(Il2CppBase() + 0x18BA1B8))(this, value);
	}
	template <typename T = void*> T get_Users() {
		return ((T (*)(AdminGetUsersResponse*))(Il2CppBase() + 0x18BA238))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(AdminGetUsersResponse*, uintptr_t))(Il2CppBase() + 0x18BA240))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(AdminGetUsersResponse*, uintptr_t))(Il2CppBase() + 0x18BA2B0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminGetUsersResponse*))(Il2CppBase() + 0x18BA360))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminGetUsersResponse*))(Il2CppBase() + 0x18BA3E8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminGetUsersResponse*, uintptr_t))(Il2CppBase() + 0x18BA44C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminGetUsersResponse*))(Il2CppBase() + 0x18BA55C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(AdminGetUsersResponse*, uintptr_t))(Il2CppBase() + 0x18BA68C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminGetUsersResponse*, uintptr_t))(Il2CppBase() + 0x18BA728))(this, input);
	}

};

}
