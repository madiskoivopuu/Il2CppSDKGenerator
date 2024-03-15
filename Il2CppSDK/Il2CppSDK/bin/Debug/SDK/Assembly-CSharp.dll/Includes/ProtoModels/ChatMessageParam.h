#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ChatMessageParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ChatMessageParam"));
	}

	 static MessageParser1ProtoModels::ChatMessageParam*>*& _parser() {
		return *(MessageParser1ProtoModels::ChatMessageParam*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& DataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& data_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ParamTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ChatMessageParamType*> R& paramType_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ParametersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1Il2CppString*>*& _repeated_parameters_codec() {
		return *(FieldCodec1Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1Il2CppString*>*& parameters_() {
		return *(RepeatedField1Il2CppString*>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ChatMessageParam*>* get_Parser() {
		return ((MessageParser1ProtoModels::ChatMessageParam*>* (*)(void *))(Il2CppBase() + 0x140394C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x14039B0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ChatMessageParam*))(Il2CppBase() + 0x1403AD0))(this);
	}
	template <typename R = ProtoModels::ChatMessageParam*> R Clone() {
		return ((R (*)(ChatMessageParam*))(Il2CppBase() + 0x1403C68))(this);
	}
	template <typename R = Il2CppString*> R get_Data() {
		return ((R (*)(ChatMessageParam*))(Il2CppBase() + 0x1403CC4))(this);
	}
	template <typename R = void> R set_Data(Il2CppString* value) {
		return ((R (*)(ChatMessageParam*, Il2CppString*))(Il2CppBase() + 0x1403CCC))(this, value);
	}
	template <typename R = ProtoModels::ChatMessageParamType*> R get_ParamType() {
		return ((R (*)(ChatMessageParam*))(Il2CppBase() + 0x1403D4C))(this);
	}
	template <typename R = void> R set_ParamType(ProtoModels::ChatMessageParamType* value) {
		return ((R (*)(ChatMessageParam*, ProtoModels::ChatMessageParamType*))(Il2CppBase() + 0x1403D54))(this, value);
	}
	 RepeatedField1Il2CppString*>* get_Parameters() {
		return ((RepeatedField1Il2CppString*>* (*)(ChatMessageParam*))(Il2CppBase() + 0x1403D5C))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ChatMessageParam*, Il2CppObject*))(Il2CppBase() + 0x1403D64))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ChatMessageParam* other) {
		return ((R (*)(ChatMessageParam*, ProtoModels::ChatMessageParam*))(Il2CppBase() + 0x1403DD4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ChatMessageParam*))(Il2CppBase() + 0x1403E84))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ChatMessageParam*))(Il2CppBase() + 0x1403F0C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ChatMessageParam*, uintptr_t))(Il2CppBase() + 0x1403F70))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ChatMessageParam*))(Il2CppBase() + 0x1404070))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ChatMessageParam* other) {
		return ((R (*)(ChatMessageParam*, ProtoModels::ChatMessageParam*))(Il2CppBase() + 0x14041A0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ChatMessageParam*, uintptr_t))(Il2CppBase() + 0x140423C))(this, input);
	}

};

}
