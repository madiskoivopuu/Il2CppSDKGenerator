#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreProductDescription
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreProductDescription"));
	}

	 static MessageParser1ProtoModels::ArenaStoreProductDescription*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaStoreProductDescription*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& TextFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& text_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CaptionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& caption_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::ArenaStoreProductDescription*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaStoreProductDescription*>* (*)(void *))(Il2CppBase() + 0x271E620))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x271E684))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaStoreProductDescription*))(Il2CppBase() + 0x271E7A4))(this);
	}
	template <typename R = ProtoModels::ArenaStoreProductDescription*> R Clone() {
		return ((R (*)(ArenaStoreProductDescription*))(Il2CppBase() + 0x271AFCC))(this);
	}
	template <typename R = Il2CppString*> R get_Text() {
		return ((R (*)(ArenaStoreProductDescription*))(Il2CppBase() + 0x271E844))(this);
	}
	template <typename R = void> R set_Text(Il2CppString* value) {
		return ((R (*)(ArenaStoreProductDescription*, Il2CppString*))(Il2CppBase() + 0x271E84C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Caption() {
		return ((R (*)(ArenaStoreProductDescription*))(Il2CppBase() + 0x271E8CC))(this);
	}
	template <typename R = void> R set_Caption(Il2CppString* value) {
		return ((R (*)(ArenaStoreProductDescription*, Il2CppString*))(Il2CppBase() + 0x271E8D4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaStoreProductDescription*, Il2CppObject*))(Il2CppBase() + 0x271E954))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaStoreProductDescription* other) {
		return ((R (*)(ArenaStoreProductDescription*, ProtoModels::ArenaStoreProductDescription*))(Il2CppBase() + 0x271E9C4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaStoreProductDescription*))(Il2CppBase() + 0x271EA2C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaStoreProductDescription*))(Il2CppBase() + 0x271EA98))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaStoreProductDescription*, uintptr_t))(Il2CppBase() + 0x271EAFC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaStoreProductDescription*))(Il2CppBase() + 0x271EB90))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaStoreProductDescription* other) {
		return ((R (*)(ArenaStoreProductDescription*, ProtoModels::ArenaStoreProductDescription*))(Il2CppBase() + 0x271D72C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaStoreProductDescription*, uintptr_t))(Il2CppBase() + 0x271EC60))(this, input);
	}

};

}
