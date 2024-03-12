#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ReverseInviteResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ReverseInviteResponse"));
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
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ExpiredFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& expired_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x119F6EC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x119F750))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119F870))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119F978))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119F9D4))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ReverseInviteResponse*, int32_t))(Il2CppBase() + 0x119F9DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119F9E4))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ReverseInviteResponse*, Il2CppString*))(Il2CppBase() + 0x119F9EC))(this, value);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119FA6C))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(ReverseInviteResponse*, int64_t))(Il2CppBase() + 0x119FA74))(this, value);
	}
	template <typename T = int64_t> T get_Expired() {
		return ((T (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119FA7C))(this);
	}
	template <typename T = void> T set_Expired(int64_t value) {
		return ((T (*)(ReverseInviteResponse*, int64_t))(Il2CppBase() + 0x119FA84))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ReverseInviteResponse*, uintptr_t))(Il2CppBase() + 0x119FA8C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ReverseInviteResponse*, uintptr_t))(Il2CppBase() + 0x119FAFC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119FB7C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119FC2C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ReverseInviteResponse*, uintptr_t))(Il2CppBase() + 0x119FC90))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ReverseInviteResponse*))(Il2CppBase() + 0x119FD74))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ReverseInviteResponse*, uintptr_t))(Il2CppBase() + 0x119FEB4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ReverseInviteResponse*, uintptr_t))(Il2CppBase() + 0x119FF18))(this, input);
	}

};

}
