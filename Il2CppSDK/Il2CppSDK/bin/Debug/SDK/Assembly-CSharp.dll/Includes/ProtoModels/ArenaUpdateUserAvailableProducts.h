#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUpdateUserAvailableProducts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUpdateUserAvailableProducts"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ProductsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_products_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& products_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xF54EA8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF54F0C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF5502C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF551C8))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF55224))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUpdateUserAvailableProducts*, int64_t))(Il2CppBase() + 0xF5522C))(this, value);
	}
	template <typename T = void*> T get_Products() {
		return ((T (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF55234))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF5523C))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaUpdateUserAvailableProducts*, int32_t))(Il2CppBase() + 0xF55244))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF5524C))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaUpdateUserAvailableProducts*, Il2CppString*))(Il2CppBase() + 0xF55254))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaUpdateUserAvailableProducts*, uintptr_t))(Il2CppBase() + 0xF552D4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaUpdateUserAvailableProducts*, uintptr_t))(Il2CppBase() + 0xF55344))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF55404))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF554B0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUpdateUserAvailableProducts*, uintptr_t))(Il2CppBase() + 0xF55514))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF55650))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaUpdateUserAvailableProducts*, uintptr_t))(Il2CppBase() + 0xF557C0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUpdateUserAvailableProducts*, uintptr_t))(Il2CppBase() + 0xF55868))(this, input);
	}

};

}
