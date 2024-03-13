#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ResetUserPveWorldResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ResetUserPveWorldResponse"));
	}

	template <typename T = MessageParser1ResetUserPveWorldResponse*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& LocalizationErrorFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& localizationError_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ResetedFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& reseted_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1ResetUserPveWorldResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x119B7EC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x119B850))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119B970))(this);
	}
	template <typename T = ResetUserPveWorldResponse*> T Clone() {
		return ((T (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BA90))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BAEC))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ResetUserPveWorldResponse*, int32_t))(Il2CppBase() + 0x119BAF4))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BAFC))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ResetUserPveWorldResponse*, Il2CppString*))(Il2CppBase() + 0x119BB04))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocalizationError() {
		return ((T (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BB84))(this);
	}
	template <typename T = void> T set_LocalizationError(Il2CppString* value) {
		return ((T (*)(ResetUserPveWorldResponse*, Il2CppString*))(Il2CppBase() + 0x119BB8C))(this, value);
	}
	template <typename T = bool> T get_Reseted() {
		return ((T (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BC0C))(this);
	}
	template <typename T = void> T set_Reseted(bool value) {
		return ((T (*)(ResetUserPveWorldResponse*, bool))(Il2CppBase() + 0x119BC14))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ResetUserPveWorldResponse*, Il2CppObject*))(Il2CppBase() + 0x119BC20))(this, other);
	}
	template <typename T = bool> T Equals_1(ResetUserPveWorldResponse* other) {
		return ((T (*)(ResetUserPveWorldResponse*, ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BC90))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BD20))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BDD8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ResetUserPveWorldResponse*, uintptr_t))(Il2CppBase() + 0x119BE3C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ResetUserPveWorldResponse*))(Il2CppBase() + 0x119BF28))(this);
	}
	template <typename T = void> T MergeFrom(ResetUserPveWorldResponse* other) {
		return ((T (*)(ResetUserPveWorldResponse*, ResetUserPveWorldResponse*))(Il2CppBase() + 0x119C048))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ResetUserPveWorldResponse*, uintptr_t))(Il2CppBase() + 0x119C0B8))(this, input);
	}

};

}
