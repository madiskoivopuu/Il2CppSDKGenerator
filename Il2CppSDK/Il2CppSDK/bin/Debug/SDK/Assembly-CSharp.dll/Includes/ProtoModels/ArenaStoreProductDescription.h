#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreProductDescription
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreProductDescription"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TextFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& text_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CaptionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& caption_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x271E620))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x271E684))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaStoreProductDescription*))(Il2CppBase() + 0x271E7A4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaStoreProductDescription*))(Il2CppBase() + 0x271AFCC))(this);
	}
	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(ArenaStoreProductDescription*))(Il2CppBase() + 0x271E844))(this);
	}
	template <typename T = void> T set_Text(Il2CppString* value) {
		return ((T (*)(ArenaStoreProductDescription*, Il2CppString*))(Il2CppBase() + 0x271E84C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Caption() {
		return ((T (*)(ArenaStoreProductDescription*))(Il2CppBase() + 0x271E8CC))(this);
	}
	template <typename T = void> T set_Caption(Il2CppString* value) {
		return ((T (*)(ArenaStoreProductDescription*, Il2CppString*))(Il2CppBase() + 0x271E8D4))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaStoreProductDescription*, uintptr_t))(Il2CppBase() + 0x271E954))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaStoreProductDescription*, uintptr_t))(Il2CppBase() + 0x271E9C4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaStoreProductDescription*))(Il2CppBase() + 0x271EA2C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaStoreProductDescription*))(Il2CppBase() + 0x271EA98))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaStoreProductDescription*, uintptr_t))(Il2CppBase() + 0x271EAFC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaStoreProductDescription*))(Il2CppBase() + 0x271EB90))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaStoreProductDescription*, uintptr_t))(Il2CppBase() + 0x271D72C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaStoreProductDescription*, uintptr_t))(Il2CppBase() + 0x271EC60))(this, input);
	}

};

}
