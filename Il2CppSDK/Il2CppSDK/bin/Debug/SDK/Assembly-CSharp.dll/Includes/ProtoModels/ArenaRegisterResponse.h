#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaRegisterResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaRegisterResponse"));
	}

	template <typename T = MessageParser1ArenaRegisterResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ConfigurationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaConfiguration*> T& configuration_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaRegisterResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A945E8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A9464C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaRegisterResponse*))(Il2CppBase() + 0x1A9476C))(this);
	}
	template <typename T = ArenaRegisterResponse*> T Clone() {
		return ((T (*)(ArenaRegisterResponse*))(Il2CppBase() + 0x1A94888))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaRegisterResponse*))(Il2CppBase() + 0x1A948E4))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaRegisterResponse*, int32_t))(Il2CppBase() + 0x1A948EC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaRegisterResponse*))(Il2CppBase() + 0x1A948F4))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaRegisterResponse*, Il2CppString*))(Il2CppBase() + 0x1A948FC))(this, value);
	}
	template <typename T = ArenaConfiguration*> T get_Configuration() {
		return ((T (*)(ArenaRegisterResponse*))(Il2CppBase() + 0x1A9497C))(this);
	}
	template <typename T = void> T set_Configuration(ArenaConfiguration* value) {
		return ((T (*)(ArenaRegisterResponse*, ArenaConfiguration*))(Il2CppBase() + 0x1A94984))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaRegisterResponse*, Il2CppObject*))(Il2CppBase() + 0x1A9498C))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaRegisterResponse* other) {
		return ((T (*)(ArenaRegisterResponse*, ArenaRegisterResponse*))(Il2CppBase() + 0x1A949FC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaRegisterResponse*))(Il2CppBase() + 0x1A94A70))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaRegisterResponse*))(Il2CppBase() + 0x1A94AFC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaRegisterResponse*, uintptr_t))(Il2CppBase() + 0x1A94B60))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaRegisterResponse*))(Il2CppBase() + 0x1A94C1C))(this);
	}
	template <typename T = void> T MergeFrom(ArenaRegisterResponse* other) {
		return ((T (*)(ArenaRegisterResponse*, ArenaRegisterResponse*))(Il2CppBase() + 0x1A94D20))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaRegisterResponse*, uintptr_t))(Il2CppBase() + 0x1A94DF0))(this, input);
	}

};

}
