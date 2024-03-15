#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetWorldsResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetWorldsResponse"));
	}

	 static MessageParser1<ProtoModels::AdminGetWorldsResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::AdminGetWorldsResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& WorldsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::MonitorWorld*>*& _repeated_worlds_codec() {
		return *(FieldCodec1<ProtoModels::MonitorWorld*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::MonitorWorld*>*& worlds_() {
		return *(RepeatedField1<ProtoModels::MonitorWorld*>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::AdminGetWorldsResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::AdminGetWorldsResponse*>* (*)(void *))(Il2CppBase() + 0x12925B4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1292618))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminGetWorldsResponse*))(Il2CppBase() + 0x1292738))(this);
	}
	template <typename R = ProtoModels::AdminGetWorldsResponse*> R Clone() {
		return ((R (*)(AdminGetWorldsResponse*))(Il2CppBase() + 0x12928CC))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(AdminGetWorldsResponse*))(Il2CppBase() + 0x1292928))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(AdminGetWorldsResponse*, int32_t))(Il2CppBase() + 0x1292930))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(AdminGetWorldsResponse*))(Il2CppBase() + 0x1292938))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(AdminGetWorldsResponse*, Il2CppString*))(Il2CppBase() + 0x1292940))(this, value);
	}
	 RepeatedField1<ProtoModels::MonitorWorld*>* get_Worlds() {
		return ((RepeatedField1<ProtoModels::MonitorWorld*>* (*)(AdminGetWorldsResponse*))(Il2CppBase() + 0x12929C0))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminGetWorldsResponse*, Il2CppObject*))(Il2CppBase() + 0x12929C8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminGetWorldsResponse* other) {
		return ((R (*)(AdminGetWorldsResponse*, ProtoModels::AdminGetWorldsResponse*))(Il2CppBase() + 0x1292A38))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminGetWorldsResponse*))(Il2CppBase() + 0x1292AE8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminGetWorldsResponse*))(Il2CppBase() + 0x1292B70))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminGetWorldsResponse*, uintptr_t))(Il2CppBase() + 0x1292BD4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminGetWorldsResponse*))(Il2CppBase() + 0x1292CE4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminGetWorldsResponse* other) {
		return ((R (*)(AdminGetWorldsResponse*, ProtoModels::AdminGetWorldsResponse*))(Il2CppBase() + 0x1292E14))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminGetWorldsResponse*, uintptr_t))(Il2CppBase() + 0x1292EB0))(this, input);
	}

};

}
