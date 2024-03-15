#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUpdateUserAvailableProducts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUpdateUserAvailableProducts"));
	}

	 static MessageParser1ProtoModels::ArenaUpdateUserAvailableProducts*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaUpdateUserAvailableProducts*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ProductsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::ArenaUserAvailableProduct*>*& _repeated_products_codec() {
		return *(FieldCodec1ProtoModels::ArenaUserAvailableProduct*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::ArenaUserAvailableProduct*>*& products_() {
		return *(RepeatedField1ProtoModels::ArenaUserAvailableProduct*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::ArenaUpdateUserAvailableProducts*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaUpdateUserAvailableProducts*>* (*)(void *))(Il2CppBase() + 0xF54EA8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xF54F0C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF5502C))(this);
	}
	template <typename R = ProtoModels::ArenaUpdateUserAvailableProducts*> R Clone() {
		return ((R (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF551C8))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF55224))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUpdateUserAvailableProducts*, int64_t))(Il2CppBase() + 0xF5522C))(this, value);
	}
	 RepeatedField1ProtoModels::ArenaUserAvailableProduct*>* get_Products() {
		return ((RepeatedField1ProtoModels::ArenaUserAvailableProduct*>* (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF55234))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF5523C))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaUpdateUserAvailableProducts*, int32_t))(Il2CppBase() + 0xF55244))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF5524C))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaUpdateUserAvailableProducts*, Il2CppString*))(Il2CppBase() + 0xF55254))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUpdateUserAvailableProducts*, Il2CppObject*))(Il2CppBase() + 0xF552D4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUpdateUserAvailableProducts* other) {
		return ((R (*)(ArenaUpdateUserAvailableProducts*, ProtoModels::ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF55344))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF55404))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF554B0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUpdateUserAvailableProducts*, uintptr_t))(Il2CppBase() + 0xF55514))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF55650))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUpdateUserAvailableProducts* other) {
		return ((R (*)(ArenaUpdateUserAvailableProducts*, ProtoModels::ArenaUpdateUserAvailableProducts*))(Il2CppBase() + 0xF557C0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUpdateUserAvailableProducts*, uintptr_t))(Il2CppBase() + 0xF55868))(this, input);
	}

};

}
