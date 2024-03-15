#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CompassEventResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CompassEventResponse"));
	}

	 static MessageParser1ProtoModels::CompassEventResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::CompassEventResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& MessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& message_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::CompassEventResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::CompassEventResponse*>* (*)(void *))(Il2CppBase() + 0xE2C5B4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xE2C618))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CompassEventResponse*))(Il2CppBase() + 0xE2C738))(this);
	}
	template <typename R = ProtoModels::CompassEventResponse*> R Clone() {
		return ((R (*)(CompassEventResponse*))(Il2CppBase() + 0xE2C84C))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(CompassEventResponse*))(Il2CppBase() + 0xE2C8A8))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(CompassEventResponse*, int32_t))(Il2CppBase() + 0xE2C8B0))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(CompassEventResponse*))(Il2CppBase() + 0xE2C8B8))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(CompassEventResponse*, Il2CppString*))(Il2CppBase() + 0xE2C8C0))(this, value);
	}
	template <typename R = Il2CppString*> R get_Message() {
		return ((R (*)(CompassEventResponse*))(Il2CppBase() + 0xE2C940))(this);
	}
	template <typename R = void> R set_Message(Il2CppString* value) {
		return ((R (*)(CompassEventResponse*, Il2CppString*))(Il2CppBase() + 0xE2C948))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CompassEventResponse*, Il2CppObject*))(Il2CppBase() + 0xE2C9C8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CompassEventResponse* other) {
		return ((R (*)(CompassEventResponse*, ProtoModels::CompassEventResponse*))(Il2CppBase() + 0xE2CA38))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CompassEventResponse*))(Il2CppBase() + 0xE2CAB0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CompassEventResponse*))(Il2CppBase() + 0xE2CB44))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CompassEventResponse*, uintptr_t))(Il2CppBase() + 0xE2CBA8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CompassEventResponse*))(Il2CppBase() + 0xE2CC68))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CompassEventResponse* other) {
		return ((R (*)(CompassEventResponse*, ProtoModels::CompassEventResponse*))(Il2CppBase() + 0xE2CD74))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CompassEventResponse*, uintptr_t))(Il2CppBase() + 0xE2CDE0))(this, input);
	}

};

}
