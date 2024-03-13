#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserEmptyResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserEmptyResponse"));
	}

	template <typename T = MessageParser1UserEmptyResponse*>*> static T& _parser() {
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

	template <typename T = MessageParser1UserEmptyResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x246634C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x24663B0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserEmptyResponse*))(Il2CppBase() + 0x24664D0))(this);
	}
	template <typename T = UserEmptyResponse*> T Clone() {
		return ((T (*)(UserEmptyResponse*))(Il2CppBase() + 0x24665C4))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(UserEmptyResponse*))(Il2CppBase() + 0x2466620))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(UserEmptyResponse*, int32_t))(Il2CppBase() + 0x2466628))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(UserEmptyResponse*))(Il2CppBase() + 0x2466630))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(UserEmptyResponse*, Il2CppString*))(Il2CppBase() + 0x2466638))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserEmptyResponse*, Il2CppObject*))(Il2CppBase() + 0x24666B8))(this, other);
	}
	template <typename T = bool> T Equals_1(UserEmptyResponse* other) {
		return ((T (*)(UserEmptyResponse*, UserEmptyResponse*))(Il2CppBase() + 0x2466728))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserEmptyResponse*))(Il2CppBase() + 0x246677C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserEmptyResponse*))(Il2CppBase() + 0x24667F0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserEmptyResponse*, uintptr_t))(Il2CppBase() + 0x2466854))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserEmptyResponse*))(Il2CppBase() + 0x24668E0))(this);
	}
	template <typename T = void> T MergeFrom(UserEmptyResponse* other) {
		return ((T (*)(UserEmptyResponse*, UserEmptyResponse*))(Il2CppBase() + 0x24669A0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserEmptyResponse*, uintptr_t))(Il2CppBase() + 0x24669D4))(this, input);
	}

};

}
