#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class TcpTransportRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "TcpTransportRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CommandFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& command_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& SizeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& size_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& MessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& message_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x16AC900))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x16AC964))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(TcpTransportRequest*))(Il2CppBase() + 0x16ACA84))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(TcpTransportRequest*))(Il2CppBase() + 0x16ACBE0))(this);
	}
	template <typename T = uintptr_t> T get_Command() {
		return ((T (*)(TcpTransportRequest*))(Il2CppBase() + 0x16ACC3C))(this);
	}
	template <typename T = void> T set_Command(uintptr_t value) {
		return ((T (*)(TcpTransportRequest*, uintptr_t))(Il2CppBase() + 0x16ACC44))(this, value);
	}
	template <typename T = int32_t> T get_Size() {
		return ((T (*)(TcpTransportRequest*))(Il2CppBase() + 0x16ACC4C))(this);
	}
	template <typename T = void> T set_Size(int32_t value) {
		return ((T (*)(TcpTransportRequest*, int32_t))(Il2CppBase() + 0x16ACC54))(this, value);
	}
	template <typename T = uintptr_t> T get_Message() {
		return ((T (*)(TcpTransportRequest*))(Il2CppBase() + 0x16ACC5C))(this);
	}
	template <typename T = void> T set_Message(uintptr_t value) {
		return ((T (*)(TcpTransportRequest*, uintptr_t))(Il2CppBase() + 0x16ACC64))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(TcpTransportRequest*, uintptr_t))(Il2CppBase() + 0x16ACCE4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(TcpTransportRequest*, uintptr_t))(Il2CppBase() + 0x16ACD54))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(TcpTransportRequest*))(Il2CppBase() + 0x16ACE18))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(TcpTransportRequest*))(Il2CppBase() + 0x16ACEB4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(TcpTransportRequest*, uintptr_t))(Il2CppBase() + 0x16ACF18))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(TcpTransportRequest*))(Il2CppBase() + 0x16ACFD4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(TcpTransportRequest*, uintptr_t))(Il2CppBase() + 0x16AD0E0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(TcpTransportRequest*, uintptr_t))(Il2CppBase() + 0x16AD148))(this, input);
	}

};

}
