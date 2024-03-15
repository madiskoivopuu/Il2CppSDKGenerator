#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminRpcResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminRpcResponse"));
	}

	 static MessageParser1ProtoModels::AdminRpcResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::AdminRpcResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& AnswerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1Il2CppString*>*& _repeated_answer_codec() {
		return *(FieldCodec1Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1Il2CppString*>*& answer_() {
		return *(RepeatedField1Il2CppString*>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::AdminRpcResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::AdminRpcResponse*>* (*)(void *))(Il2CppBase() + 0x1294E18))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1294E7C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminRpcResponse*))(Il2CppBase() + 0x1294F9C))(this);
	}
	template <typename R = ProtoModels::AdminRpcResponse*> R Clone() {
		return ((R (*)(AdminRpcResponse*))(Il2CppBase() + 0x1295130))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(AdminRpcResponse*))(Il2CppBase() + 0x129518C))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(AdminRpcResponse*, int32_t))(Il2CppBase() + 0x1295194))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(AdminRpcResponse*))(Il2CppBase() + 0x129519C))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(AdminRpcResponse*, Il2CppString*))(Il2CppBase() + 0x12951A4))(this, value);
	}
	 RepeatedField1Il2CppString*>* get_Answer() {
		return ((RepeatedField1Il2CppString*>* (*)(AdminRpcResponse*))(Il2CppBase() + 0x1295224))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminRpcResponse*, Il2CppObject*))(Il2CppBase() + 0x129522C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminRpcResponse* other) {
		return ((R (*)(AdminRpcResponse*, ProtoModels::AdminRpcResponse*))(Il2CppBase() + 0x129529C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminRpcResponse*))(Il2CppBase() + 0x129534C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminRpcResponse*))(Il2CppBase() + 0x12953D4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminRpcResponse*, uintptr_t))(Il2CppBase() + 0x1295438))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminRpcResponse*))(Il2CppBase() + 0x1295548))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminRpcResponse* other) {
		return ((R (*)(AdminRpcResponse*, ProtoModels::AdminRpcResponse*))(Il2CppBase() + 0x1295678))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminRpcResponse*, uintptr_t))(Il2CppBase() + 0x1295714))(this, input);
	}

};

}
