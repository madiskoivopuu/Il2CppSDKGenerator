#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ChatMessageParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ChatMessageParam"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& data_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ParamTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& paramType_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ParametersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_parameters_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& parameters_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x140394C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x14039B0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ChatMessageParam*))(Il2CppBase() + 0x1403AD0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ChatMessageParam*))(Il2CppBase() + 0x1403C68))(this);
	}
	template <typename T = Il2CppString*> T get_Data() {
		return ((T (*)(ChatMessageParam*))(Il2CppBase() + 0x1403CC4))(this);
	}
	template <typename T = void> T set_Data(Il2CppString* value) {
		return ((T (*)(ChatMessageParam*, Il2CppString*))(Il2CppBase() + 0x1403CCC))(this, value);
	}
	template <typename T = uintptr_t> T get_ParamType() {
		return ((T (*)(ChatMessageParam*))(Il2CppBase() + 0x1403D4C))(this);
	}
	template <typename T = void> T set_ParamType(uintptr_t value) {
		return ((T (*)(ChatMessageParam*, uintptr_t))(Il2CppBase() + 0x1403D54))(this, value);
	}
	template <typename T = void*> T get_Parameters() {
		return ((T (*)(ChatMessageParam*))(Il2CppBase() + 0x1403D5C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ChatMessageParam*, uintptr_t))(Il2CppBase() + 0x1403D64))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ChatMessageParam*, uintptr_t))(Il2CppBase() + 0x1403DD4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ChatMessageParam*))(Il2CppBase() + 0x1403E84))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ChatMessageParam*))(Il2CppBase() + 0x1403F0C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ChatMessageParam*, uintptr_t))(Il2CppBase() + 0x1403F70))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ChatMessageParam*))(Il2CppBase() + 0x1404070))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ChatMessageParam*, uintptr_t))(Il2CppBase() + 0x14041A0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ChatMessageParam*, uintptr_t))(Il2CppBase() + 0x140423C))(this, input);
	}

};

}
