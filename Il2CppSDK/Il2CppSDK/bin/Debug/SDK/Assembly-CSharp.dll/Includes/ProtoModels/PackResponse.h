#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PackResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PackResponse"));
	}

	template <typename T = void*> static T& _parser() {
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
	template <typename T = int32_t> static T& OutcomeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_outcome_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& outcome_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11E8798))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11E87FC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PackResponse*))(Il2CppBase() + 0x11E891C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PackResponse*))(Il2CppBase() + 0x11E8AB0))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(PackResponse*))(Il2CppBase() + 0x11E8B0C))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(PackResponse*, int32_t))(Il2CppBase() + 0x11E8B14))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(PackResponse*))(Il2CppBase() + 0x11E8B1C))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(PackResponse*, Il2CppString*))(Il2CppBase() + 0x11E8B24))(this, value);
	}
	template <typename T = void*> T get_Outcome() {
		return ((T (*)(PackResponse*))(Il2CppBase() + 0x11E8BA4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(PackResponse*, uintptr_t))(Il2CppBase() + 0x11E8BAC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(PackResponse*, uintptr_t))(Il2CppBase() + 0x11E8C1C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PackResponse*))(Il2CppBase() + 0x11E8CCC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PackResponse*))(Il2CppBase() + 0x11E8D54))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PackResponse*, uintptr_t))(Il2CppBase() + 0x11E8DB8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PackResponse*))(Il2CppBase() + 0x11E8EC8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(PackResponse*, uintptr_t))(Il2CppBase() + 0x11E8FF8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PackResponse*, uintptr_t))(Il2CppBase() + 0x11E9094))(this, input);
	}

};

}
