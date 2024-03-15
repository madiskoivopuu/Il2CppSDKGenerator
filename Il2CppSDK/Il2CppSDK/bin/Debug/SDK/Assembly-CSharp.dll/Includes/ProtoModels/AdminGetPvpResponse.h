#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetPvpResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetPvpResponse"));
	}

	 static MessageParser1<ProtoModels::AdminGetPvpResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::AdminGetPvpResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& PvpFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::MonitorPvpGroup*>*& _repeated_pvp_codec() {
		return *(FieldCodec1<ProtoModels::MonitorPvpGroup*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::MonitorPvpGroup*>*& pvp_() {
		return *(RepeatedField1<ProtoModels::MonitorPvpGroup*>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::AdminGetPvpResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::AdminGetPvpResponse*>* (*)(void *))(Il2CppBase() + 0x18B5CB0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x18B5D14))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminGetPvpResponse*))(Il2CppBase() + 0x18B5E34))(this);
	}
	template <typename R = ProtoModels::AdminGetPvpResponse*> R Clone() {
		return ((R (*)(AdminGetPvpResponse*))(Il2CppBase() + 0x18B5FC8))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(AdminGetPvpResponse*))(Il2CppBase() + 0x18B6024))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(AdminGetPvpResponse*, int32_t))(Il2CppBase() + 0x18B602C))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(AdminGetPvpResponse*))(Il2CppBase() + 0x18B6034))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(AdminGetPvpResponse*, Il2CppString*))(Il2CppBase() + 0x18B603C))(this, value);
	}
	 RepeatedField1<ProtoModels::MonitorPvpGroup*>* get_Pvp() {
		return ((RepeatedField1<ProtoModels::MonitorPvpGroup*>* (*)(AdminGetPvpResponse*))(Il2CppBase() + 0x18B60BC))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminGetPvpResponse*, Il2CppObject*))(Il2CppBase() + 0x18B60C4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminGetPvpResponse* other) {
		return ((R (*)(AdminGetPvpResponse*, ProtoModels::AdminGetPvpResponse*))(Il2CppBase() + 0x18B6134))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminGetPvpResponse*))(Il2CppBase() + 0x18B61E4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminGetPvpResponse*))(Il2CppBase() + 0x18B626C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminGetPvpResponse*, uintptr_t))(Il2CppBase() + 0x18B62D0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminGetPvpResponse*))(Il2CppBase() + 0x18B63E0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminGetPvpResponse* other) {
		return ((R (*)(AdminGetPvpResponse*, ProtoModels::AdminGetPvpResponse*))(Il2CppBase() + 0x18B6510))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminGetPvpResponse*, uintptr_t))(Il2CppBase() + 0x18B65AC))(this, input);
	}

};

}
