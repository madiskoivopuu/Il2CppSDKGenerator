#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaKillWorldResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaKillWorldResponse"));
	}

	 static MessageParser1ProtoModels::ArenaKillWorldResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaKillWorldResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1ProtoModels::ArenaKillWorldResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaKillWorldResponse*>* (*)(void *))(Il2CppBase() + 0x1E2BB14))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E2BB78))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaKillWorldResponse*))(Il2CppBase() + 0x1E2BC98))(this);
	}
	template <typename R = ProtoModels::ArenaKillWorldResponse*> R Clone() {
		return ((R (*)(ArenaKillWorldResponse*))(Il2CppBase() + 0x1E2BD8C))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaKillWorldResponse*))(Il2CppBase() + 0x1E2BDE8))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaKillWorldResponse*, int32_t))(Il2CppBase() + 0x1E2BDF0))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaKillWorldResponse*))(Il2CppBase() + 0x1E2BDF8))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaKillWorldResponse*, Il2CppString*))(Il2CppBase() + 0x1E2BE00))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaKillWorldResponse*, Il2CppObject*))(Il2CppBase() + 0x1E2BE80))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaKillWorldResponse* other) {
		return ((R (*)(ArenaKillWorldResponse*, ProtoModels::ArenaKillWorldResponse*))(Il2CppBase() + 0x1E2BEF0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaKillWorldResponse*))(Il2CppBase() + 0x1E2BF44))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaKillWorldResponse*))(Il2CppBase() + 0x1E2BFB8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaKillWorldResponse*, uintptr_t))(Il2CppBase() + 0x1E2C01C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaKillWorldResponse*))(Il2CppBase() + 0x1E2C0A8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaKillWorldResponse* other) {
		return ((R (*)(ArenaKillWorldResponse*, ProtoModels::ArenaKillWorldResponse*))(Il2CppBase() + 0x1E2C168))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaKillWorldResponse*, uintptr_t))(Il2CppBase() + 0x1E2C19C))(this, input);
	}

};

}
