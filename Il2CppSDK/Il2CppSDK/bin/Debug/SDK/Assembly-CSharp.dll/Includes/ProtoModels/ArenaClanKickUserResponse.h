#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaClanKickUserResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaClanKickUserResponse"));
	}

	 static MessageParser1ProtoModels::ArenaClanKickUserResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaClanKickUserResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& DisbandFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& disband_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaClanKickUserResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaClanKickUserResponse*>* (*)(void *))(Il2CppBase() + 0x1A1CCA4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A1CD08))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1CE28))(this);
	}
	template <typename R = ProtoModels::ArenaClanKickUserResponse*> R Clone() {
		return ((R (*)(ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1CF28))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1CF84))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaClanKickUserResponse*, int32_t))(Il2CppBase() + 0x1A1CF8C))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1CF94))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaClanKickUserResponse*, Il2CppString*))(Il2CppBase() + 0x1A1CF9C))(this, value);
	}
	template <typename R = bool> R get_Disband() {
		return ((R (*)(ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1D01C))(this);
	}
	template <typename R = void> R set_Disband(bool value) {
		return ((R (*)(ArenaClanKickUserResponse*, bool))(Il2CppBase() + 0x1A1D024))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaClanKickUserResponse*, Il2CppObject*))(Il2CppBase() + 0x1A1D030))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaClanKickUserResponse* other) {
		return ((R (*)(ArenaClanKickUserResponse*, ProtoModels::ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1D0A0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1D11C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1D1B4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaClanKickUserResponse*, uintptr_t))(Il2CppBase() + 0x1A1D218))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1D2D0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaClanKickUserResponse* other) {
		return ((R (*)(ArenaClanKickUserResponse*, ProtoModels::ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1D3AC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaClanKickUserResponse*, uintptr_t))(Il2CppBase() + 0x1A1D404))(this, input);
	}

};

}
