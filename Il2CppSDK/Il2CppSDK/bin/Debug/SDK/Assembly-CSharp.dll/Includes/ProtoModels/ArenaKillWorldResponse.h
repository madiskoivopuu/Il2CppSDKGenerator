#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaKillWorldResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaKillWorldResponse"));
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
		return ((T (*)(void *))(Il2CppBase() + 0x1E2BB14))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2BB78))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaKillWorldResponse*))(Il2CppBase() + 0x1E2BC98))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaKillWorldResponse*))(Il2CppBase() + 0x1E2BD8C))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaKillWorldResponse*))(Il2CppBase() + 0x1E2BDE8))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaKillWorldResponse*, int32_t))(Il2CppBase() + 0x1E2BDF0))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaKillWorldResponse*))(Il2CppBase() + 0x1E2BDF8))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaKillWorldResponse*, Il2CppString*))(Il2CppBase() + 0x1E2BE00))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaKillWorldResponse*, uintptr_t))(Il2CppBase() + 0x1E2BE80))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaKillWorldResponse*, uintptr_t))(Il2CppBase() + 0x1E2BEF0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaKillWorldResponse*))(Il2CppBase() + 0x1E2BF44))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaKillWorldResponse*))(Il2CppBase() + 0x1E2BFB8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaKillWorldResponse*, uintptr_t))(Il2CppBase() + 0x1E2C01C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaKillWorldResponse*))(Il2CppBase() + 0x1E2C0A8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaKillWorldResponse*, uintptr_t))(Il2CppBase() + 0x1E2C168))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaKillWorldResponse*, uintptr_t))(Il2CppBase() + 0x1E2C19C))(this, input);
	}

};

}
