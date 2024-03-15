#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaRegisterResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaRegisterResponse"));
	}

	 static MessageParser1<ProtoModels::ArenaRegisterResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaRegisterResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& ConfigurationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaConfiguration*> R& configuration_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::ArenaRegisterResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaRegisterResponse*>* (*)(void *))(Il2CppBase() + 0x1A945E8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A9464C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaRegisterResponse*))(Il2CppBase() + 0x1A9476C))(this);
	}
	template <typename R = ProtoModels::ArenaRegisterResponse*> R Clone() {
		return ((R (*)(ArenaRegisterResponse*))(Il2CppBase() + 0x1A94888))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaRegisterResponse*))(Il2CppBase() + 0x1A948E4))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaRegisterResponse*, int32_t))(Il2CppBase() + 0x1A948EC))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaRegisterResponse*))(Il2CppBase() + 0x1A948F4))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaRegisterResponse*, Il2CppString*))(Il2CppBase() + 0x1A948FC))(this, value);
	}
	template <typename R = ProtoModels::ArenaConfiguration*> R get_Configuration() {
		return ((R (*)(ArenaRegisterResponse*))(Il2CppBase() + 0x1A9497C))(this);
	}
	template <typename R = void> R set_Configuration(ProtoModels::ArenaConfiguration* value) {
		return ((R (*)(ArenaRegisterResponse*, ProtoModels::ArenaConfiguration*))(Il2CppBase() + 0x1A94984))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaRegisterResponse*, Il2CppObject*))(Il2CppBase() + 0x1A9498C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaRegisterResponse* other) {
		return ((R (*)(ArenaRegisterResponse*, ProtoModels::ArenaRegisterResponse*))(Il2CppBase() + 0x1A949FC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaRegisterResponse*))(Il2CppBase() + 0x1A94A70))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaRegisterResponse*))(Il2CppBase() + 0x1A94AFC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaRegisterResponse*, uintptr_t))(Il2CppBase() + 0x1A94B60))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaRegisterResponse*))(Il2CppBase() + 0x1A94C1C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaRegisterResponse* other) {
		return ((R (*)(ArenaRegisterResponse*, ProtoModels::ArenaRegisterResponse*))(Il2CppBase() + 0x1A94D20))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaRegisterResponse*, uintptr_t))(Il2CppBase() + 0x1A94DF0))(this, input);
	}

};

}
