#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PackResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PackResponse"));
	}

	 static MessageParser1ProtoModels::PackResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::PackResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& OutcomeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::PackOutcome*>*& _repeated_outcome_codec() {
		return *(FieldCodec1ProtoModels::PackOutcome*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::PackOutcome*>*& outcome_() {
		return *(RepeatedField1ProtoModels::PackOutcome*>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::PackResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::PackResponse*>* (*)(void *))(Il2CppBase() + 0x11E8798))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11E87FC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PackResponse*))(Il2CppBase() + 0x11E891C))(this);
	}
	template <typename R = ProtoModels::PackResponse*> R Clone() {
		return ((R (*)(PackResponse*))(Il2CppBase() + 0x11E8AB0))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(PackResponse*))(Il2CppBase() + 0x11E8B0C))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(PackResponse*, int32_t))(Il2CppBase() + 0x11E8B14))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(PackResponse*))(Il2CppBase() + 0x11E8B1C))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(PackResponse*, Il2CppString*))(Il2CppBase() + 0x11E8B24))(this, value);
	}
	 RepeatedField1ProtoModels::PackOutcome*>* get_Outcome() {
		return ((RepeatedField1ProtoModels::PackOutcome*>* (*)(PackResponse*))(Il2CppBase() + 0x11E8BA4))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PackResponse*, Il2CppObject*))(Il2CppBase() + 0x11E8BAC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PackResponse* other) {
		return ((R (*)(PackResponse*, ProtoModels::PackResponse*))(Il2CppBase() + 0x11E8C1C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PackResponse*))(Il2CppBase() + 0x11E8CCC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PackResponse*))(Il2CppBase() + 0x11E8D54))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PackResponse*, uintptr_t))(Il2CppBase() + 0x11E8DB8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PackResponse*))(Il2CppBase() + 0x11E8EC8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PackResponse* other) {
		return ((R (*)(PackResponse*, ProtoModels::PackResponse*))(Il2CppBase() + 0x11E8FF8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PackResponse*, uintptr_t))(Il2CppBase() + 0x11E9094))(this, input);
	}

};

}
