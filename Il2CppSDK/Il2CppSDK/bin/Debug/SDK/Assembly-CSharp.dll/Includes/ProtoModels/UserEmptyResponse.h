#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserEmptyResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserEmptyResponse"));
	}

	 static MessageParser1<ProtoModels::UserEmptyResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::UserEmptyResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::UserEmptyResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::UserEmptyResponse*>* (*)(void *))(Il2CppBase() + 0x246634C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x24663B0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserEmptyResponse*))(Il2CppBase() + 0x24664D0))(this);
	}
	template <typename R = ProtoModels::UserEmptyResponse*> R Clone() {
		return ((R (*)(UserEmptyResponse*))(Il2CppBase() + 0x24665C4))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(UserEmptyResponse*))(Il2CppBase() + 0x2466620))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(UserEmptyResponse*, int32_t))(Il2CppBase() + 0x2466628))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(UserEmptyResponse*))(Il2CppBase() + 0x2466630))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(UserEmptyResponse*, Il2CppString*))(Il2CppBase() + 0x2466638))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserEmptyResponse*, Il2CppObject*))(Il2CppBase() + 0x24666B8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserEmptyResponse* other) {
		return ((R (*)(UserEmptyResponse*, ProtoModels::UserEmptyResponse*))(Il2CppBase() + 0x2466728))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserEmptyResponse*))(Il2CppBase() + 0x246677C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserEmptyResponse*))(Il2CppBase() + 0x24667F0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserEmptyResponse*, uintptr_t))(Il2CppBase() + 0x2466854))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserEmptyResponse*))(Il2CppBase() + 0x24668E0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserEmptyResponse* other) {
		return ((R (*)(UserEmptyResponse*, ProtoModels::UserEmptyResponse*))(Il2CppBase() + 0x24669A0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserEmptyResponse*, uintptr_t))(Il2CppBase() + 0x24669D4))(this, input);
	}

};

}
