#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetPveWorldsResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetPveWorldsResponse"));
	}

	 static MessageParser1ProtoModels::AdminGetPveWorldsResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::AdminGetPveWorldsResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	 static FieldCodec1ProtoModels::MonitorPveWorld*>*& _repeated_worlds_codec() {
		return *(FieldCodec1ProtoModels::MonitorPveWorld*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::MonitorPveWorld*>*& worlds_() {
		return *(RepeatedField1ProtoModels::MonitorPveWorld*>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::AdminGetPveWorldsResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::AdminGetPveWorldsResponse*>* (*)(void *))(Il2CppBase() + 0x18B4A5C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x18B4AC0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B4BE0))(this);
	}
	template <typename R = ProtoModels::AdminGetPveWorldsResponse*> R Clone() {
		return ((R (*)(AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B4D74))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B4DD0))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(AdminGetPveWorldsResponse*, int32_t))(Il2CppBase() + 0x18B4DD8))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B4DE0))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(AdminGetPveWorldsResponse*, Il2CppString*))(Il2CppBase() + 0x18B4DE8))(this, value);
	}
	 RepeatedField1ProtoModels::MonitorPveWorld*>* get_Worlds() {
		return ((RepeatedField1ProtoModels::MonitorPveWorld*>* (*)(AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B4E68))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminGetPveWorldsResponse*, Il2CppObject*))(Il2CppBase() + 0x18B4E70))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminGetPveWorldsResponse* other) {
		return ((R (*)(AdminGetPveWorldsResponse*, ProtoModels::AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B4EE0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B4F90))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B5018))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminGetPveWorldsResponse*, uintptr_t))(Il2CppBase() + 0x18B507C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B518C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminGetPveWorldsResponse* other) {
		return ((R (*)(AdminGetPveWorldsResponse*, ProtoModels::AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B52BC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminGetPveWorldsResponse*, uintptr_t))(Il2CppBase() + 0x18B5358))(this, input);
	}

};

}
