#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class DisbandGuildResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "DisbandGuildResponse"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PlayersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_players_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& players_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1301938))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x130199C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(DisbandGuildResponse*))(Il2CppBase() + 0x1301ABC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(DisbandGuildResponse*))(Il2CppBase() + 0x1301C20))(this);
	}
	template <typename T = void*> T get_Players() {
		return ((T (*)(DisbandGuildResponse*))(Il2CppBase() + 0x1301C7C))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(DisbandGuildResponse*))(Il2CppBase() + 0x1301C84))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(DisbandGuildResponse*, int32_t))(Il2CppBase() + 0x1301C8C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(DisbandGuildResponse*, uintptr_t))(Il2CppBase() + 0x1301C94))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(DisbandGuildResponse*, uintptr_t))(Il2CppBase() + 0x1301D04))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DisbandGuildResponse*))(Il2CppBase() + 0x1301D9C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DisbandGuildResponse*))(Il2CppBase() + 0x1301DF8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(DisbandGuildResponse*, uintptr_t))(Il2CppBase() + 0x1301E5C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(DisbandGuildResponse*))(Il2CppBase() + 0x1301F38))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(DisbandGuildResponse*, uintptr_t))(Il2CppBase() + 0x1302024))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(DisbandGuildResponse*, uintptr_t))(Il2CppBase() + 0x130209C))(this, input);
	}

};

}
