#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaEmptyResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaEmptyResponse"));
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

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E1DC00))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E1DC64))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaEmptyResponse*))(Il2CppBase() + 0x1E1DD84))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaEmptyResponse*))(Il2CppBase() + 0x1E1DE78))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaEmptyResponse*))(Il2CppBase() + 0x1E1DED4))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaEmptyResponse*, int32_t))(Il2CppBase() + 0x1E1DEDC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaEmptyResponse*))(Il2CppBase() + 0x1E1DEE4))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaEmptyResponse*, Il2CppString*))(Il2CppBase() + 0x1E1DEEC))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaEmptyResponse*, uintptr_t))(Il2CppBase() + 0x1E1DF6C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaEmptyResponse*, uintptr_t))(Il2CppBase() + 0x1E1DFDC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaEmptyResponse*))(Il2CppBase() + 0x1E1E030))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaEmptyResponse*))(Il2CppBase() + 0x1E1E0A4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaEmptyResponse*, uintptr_t))(Il2CppBase() + 0x1E1E108))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaEmptyResponse*))(Il2CppBase() + 0x1E1E194))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaEmptyResponse*, uintptr_t))(Il2CppBase() + 0x1E1E254))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaEmptyResponse*, uintptr_t))(Il2CppBase() + 0x1E1E288))(this, input);
	}

};

}
