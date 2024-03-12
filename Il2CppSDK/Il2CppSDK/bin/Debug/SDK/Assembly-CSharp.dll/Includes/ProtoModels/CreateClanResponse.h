#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CreateClanResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CreateClanResponse"));
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
	template <typename T = int32_t> static T& NewClanFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& newClan_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x134C70C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x134C770))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CreateClanResponse*))(Il2CppBase() + 0x134C890))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(CreateClanResponse*))(Il2CppBase() + 0x134C9AC))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(CreateClanResponse*))(Il2CppBase() + 0x134CA08))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(CreateClanResponse*, int32_t))(Il2CppBase() + 0x134CA10))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(CreateClanResponse*))(Il2CppBase() + 0x134CA18))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(CreateClanResponse*, Il2CppString*))(Il2CppBase() + 0x134CA20))(this, value);
	}
	template <typename T = uintptr_t> T get_NewClan() {
		return ((T (*)(CreateClanResponse*))(Il2CppBase() + 0x134CAA0))(this);
	}
	template <typename T = void> T set_NewClan(uintptr_t value) {
		return ((T (*)(CreateClanResponse*, uintptr_t))(Il2CppBase() + 0x134CAA8))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(CreateClanResponse*, uintptr_t))(Il2CppBase() + 0x134CAB0))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(CreateClanResponse*, uintptr_t))(Il2CppBase() + 0x134CB20))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CreateClanResponse*))(Il2CppBase() + 0x134CB94))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CreateClanResponse*))(Il2CppBase() + 0x134CC20))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CreateClanResponse*, uintptr_t))(Il2CppBase() + 0x134CC84))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CreateClanResponse*))(Il2CppBase() + 0x134CD3C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(CreateClanResponse*, uintptr_t))(Il2CppBase() + 0x134CE40))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CreateClanResponse*, uintptr_t))(Il2CppBase() + 0x134CF10))(this, input);
	}

};

}
