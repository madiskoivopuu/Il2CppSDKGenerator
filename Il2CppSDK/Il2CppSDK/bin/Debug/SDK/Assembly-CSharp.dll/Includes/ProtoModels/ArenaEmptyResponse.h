#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaEmptyResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaEmptyResponse"));
	}

	 static MessageParser1ProtoModels::ArenaEmptyResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaEmptyResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1ProtoModels::ArenaEmptyResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaEmptyResponse*>* (*)(void *))(Il2CppBase() + 0x1E1DC00))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E1DC64))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaEmptyResponse*))(Il2CppBase() + 0x1E1DD84))(this);
	}
	template <typename R = ProtoModels::ArenaEmptyResponse*> R Clone() {
		return ((R (*)(ArenaEmptyResponse*))(Il2CppBase() + 0x1E1DE78))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaEmptyResponse*))(Il2CppBase() + 0x1E1DED4))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaEmptyResponse*, int32_t))(Il2CppBase() + 0x1E1DEDC))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaEmptyResponse*))(Il2CppBase() + 0x1E1DEE4))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaEmptyResponse*, Il2CppString*))(Il2CppBase() + 0x1E1DEEC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaEmptyResponse*, Il2CppObject*))(Il2CppBase() + 0x1E1DF6C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaEmptyResponse* other) {
		return ((R (*)(ArenaEmptyResponse*, ProtoModels::ArenaEmptyResponse*))(Il2CppBase() + 0x1E1DFDC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaEmptyResponse*))(Il2CppBase() + 0x1E1E030))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaEmptyResponse*))(Il2CppBase() + 0x1E1E0A4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaEmptyResponse*, uintptr_t))(Il2CppBase() + 0x1E1E108))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaEmptyResponse*))(Il2CppBase() + 0x1E1E194))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaEmptyResponse* other) {
		return ((R (*)(ArenaEmptyResponse*, ProtoModels::ArenaEmptyResponse*))(Il2CppBase() + 0x1E1E254))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaEmptyResponse*, uintptr_t))(Il2CppBase() + 0x1E1E288))(this, input);
	}

};

}
