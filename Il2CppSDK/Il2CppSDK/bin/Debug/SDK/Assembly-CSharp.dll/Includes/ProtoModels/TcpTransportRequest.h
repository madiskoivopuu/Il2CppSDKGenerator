#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class TcpTransportRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "TcpTransportRequest"));
	}

	 static MessageParser1ProtoModels::TcpTransportRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::TcpTransportRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CommandFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::TcpCommandEnum*> R& command_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& SizeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& size_() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> static R& MessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& message_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::TcpTransportRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::TcpTransportRequest*>* (*)(void *))(Il2CppBase() + 0x16AC900))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x16AC964))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(TcpTransportRequest*))(Il2CppBase() + 0x16ACA84))(this);
	}
	template <typename R = ProtoModels::TcpTransportRequest*> R Clone() {
		return ((R (*)(TcpTransportRequest*))(Il2CppBase() + 0x16ACBE0))(this);
	}
	template <typename R = ProtoModels::TcpCommandEnum*> R get_Command() {
		return ((R (*)(TcpTransportRequest*))(Il2CppBase() + 0x16ACC3C))(this);
	}
	template <typename R = void> R set_Command(ProtoModels::TcpCommandEnum* value) {
		return ((R (*)(TcpTransportRequest*, ProtoModels::TcpCommandEnum*))(Il2CppBase() + 0x16ACC44))(this, value);
	}
	template <typename R = int32_t> R get_Size() {
		return ((R (*)(TcpTransportRequest*))(Il2CppBase() + 0x16ACC4C))(this);
	}
	template <typename R = void> R set_Size(int32_t value) {
		return ((R (*)(TcpTransportRequest*, int32_t))(Il2CppBase() + 0x16ACC54))(this, value);
	}
	template <typename R = uintptr_t> R get_Message() {
		return ((R (*)(TcpTransportRequest*))(Il2CppBase() + 0x16ACC5C))(this);
	}
	template <typename R = void> R set_Message(uintptr_t value) {
		return ((R (*)(TcpTransportRequest*, uintptr_t))(Il2CppBase() + 0x16ACC64))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(TcpTransportRequest*, Il2CppObject*))(Il2CppBase() + 0x16ACCE4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::TcpTransportRequest* other) {
		return ((R (*)(TcpTransportRequest*, ProtoModels::TcpTransportRequest*))(Il2CppBase() + 0x16ACD54))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(TcpTransportRequest*))(Il2CppBase() + 0x16ACE18))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(TcpTransportRequest*))(Il2CppBase() + 0x16ACEB4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(TcpTransportRequest*, uintptr_t))(Il2CppBase() + 0x16ACF18))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(TcpTransportRequest*))(Il2CppBase() + 0x16ACFD4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::TcpTransportRequest* other) {
		return ((R (*)(TcpTransportRequest*, ProtoModels::TcpTransportRequest*))(Il2CppBase() + 0x16AD0E0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(TcpTransportRequest*, uintptr_t))(Il2CppBase() + 0x16AD148))(this, input);
	}

};

}
