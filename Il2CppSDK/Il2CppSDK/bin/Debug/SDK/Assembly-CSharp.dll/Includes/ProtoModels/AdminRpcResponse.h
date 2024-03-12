#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminRpcResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminRpcResponse"));
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
	template <typename T = int32_t> static T& AnswerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_answer_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& answer_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1294E18))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1294E7C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminRpcResponse*))(Il2CppBase() + 0x1294F9C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(AdminRpcResponse*))(Il2CppBase() + 0x1295130))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(AdminRpcResponse*))(Il2CppBase() + 0x129518C))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(AdminRpcResponse*, int32_t))(Il2CppBase() + 0x1295194))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(AdminRpcResponse*))(Il2CppBase() + 0x129519C))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(AdminRpcResponse*, Il2CppString*))(Il2CppBase() + 0x12951A4))(this, value);
	}
	template <typename T = void*> T get_Answer() {
		return ((T (*)(AdminRpcResponse*))(Il2CppBase() + 0x1295224))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(AdminRpcResponse*, uintptr_t))(Il2CppBase() + 0x129522C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(AdminRpcResponse*, uintptr_t))(Il2CppBase() + 0x129529C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminRpcResponse*))(Il2CppBase() + 0x129534C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminRpcResponse*))(Il2CppBase() + 0x12953D4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminRpcResponse*, uintptr_t))(Il2CppBase() + 0x1295438))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminRpcResponse*))(Il2CppBase() + 0x1295548))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(AdminRpcResponse*, uintptr_t))(Il2CppBase() + 0x1295678))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminRpcResponse*, uintptr_t))(Il2CppBase() + 0x1295714))(this, input);
	}

};

}
