#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ResetUserPveWorldResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ResetUserPveWorldResponse"));
	}

	 static MessageParser1ProtoModels::ResetUserPveWorldResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::ResetUserPveWorldResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& LocalizationErrorFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& localizationError_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ResetedFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& reseted_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::ResetUserPveWorldResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::ResetUserPveWorldResponse*>* (*)(void *))(Il2CppBase() + 0x119B7EC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x119B850))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119B970))(this);
	}
	template <typename R = ProtoModels::ResetUserPveWorldResponse*> R Clone() {
		return ((R (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BA90))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BAEC))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ResetUserPveWorldResponse*, int32_t))(Il2CppBase() + 0x119BAF4))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BAFC))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ResetUserPveWorldResponse*, Il2CppString*))(Il2CppBase() + 0x119BB04))(this, value);
	}
	template <typename R = Il2CppString*> R get_LocalizationError() {
		return ((R (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BB84))(this);
	}
	template <typename R = void> R set_LocalizationError(Il2CppString* value) {
		return ((R (*)(ResetUserPveWorldResponse*, Il2CppString*))(Il2CppBase() + 0x119BB8C))(this, value);
	}
	template <typename R = bool> R get_Reseted() {
		return ((R (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BC0C))(this);
	}
	template <typename R = void> R set_Reseted(bool value) {
		return ((R (*)(ResetUserPveWorldResponse*, bool))(Il2CppBase() + 0x119BC14))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ResetUserPveWorldResponse*, Il2CppObject*))(Il2CppBase() + 0x119BC20))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ResetUserPveWorldResponse* other) {
		return ((R (*)(ResetUserPveWorldResponse*, ProtoModels::ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BC90))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BD20))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BDD8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ResetUserPveWorldResponse*, uintptr_t))(Il2CppBase() + 0x119BE3C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BF28))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ResetUserPveWorldResponse* other) {
		return ((R (*)(ResetUserPveWorldResponse*, ProtoModels::ResetUserPveWorldResponse*))(Il2CppBase() + 0x119C048))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ResetUserPveWorldResponse*, uintptr_t))(Il2CppBase() + 0x119C0B8))(this, input);
	}

};

}
