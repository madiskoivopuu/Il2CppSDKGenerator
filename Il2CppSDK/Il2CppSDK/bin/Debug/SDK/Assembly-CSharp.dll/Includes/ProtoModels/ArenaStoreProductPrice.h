#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreProductPrice
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreProductPrice"));
	}

	 static MessageParser1ProtoModels::ArenaStoreProductPrice*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaStoreProductPrice*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CurrencyTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::CurrencyTypeEnum*> R& currencyType_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& value_() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> static R& ProductIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& productID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::ArenaStoreProductPrice*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaStoreProductPrice*>* (*)(void *))(Il2CppBase() + 0x271F9B4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x271FA18))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaStoreProductPrice*))(Il2CppBase() + 0x271FB38))(this);
	}
	template <typename R = ProtoModels::ArenaStoreProductPrice*> R Clone() {
		return ((R (*)(ArenaStoreProductPrice*))(Il2CppBase() + 0x271FC34))(this);
	}
	template <typename R = ProtoModels::CurrencyTypeEnum*> R get_CurrencyType() {
		return ((R (*)(ArenaStoreProductPrice*))(Il2CppBase() + 0x271FC90))(this);
	}
	template <typename R = void> R set_CurrencyType(ProtoModels::CurrencyTypeEnum* value) {
		return ((R (*)(ArenaStoreProductPrice*, ProtoModels::CurrencyTypeEnum*))(Il2CppBase() + 0x271FC98))(this, value);
	}
	template <typename R = int32_t> R get_Value() {
		return ((R (*)(ArenaStoreProductPrice*))(Il2CppBase() + 0x271FCA0))(this);
	}
	template <typename R = void> R set_Value(int32_t value) {
		return ((R (*)(ArenaStoreProductPrice*, int32_t))(Il2CppBase() + 0x271FCA8))(this, value);
	}
	template <typename R = Il2CppString*> R get_ProductID() {
		return ((R (*)(ArenaStoreProductPrice*))(Il2CppBase() + 0x271FCB0))(this);
	}
	template <typename R = void> R set_ProductID(Il2CppString* value) {
		return ((R (*)(ArenaStoreProductPrice*, Il2CppString*))(Il2CppBase() + 0x271FCB8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaStoreProductPrice*, Il2CppObject*))(Il2CppBase() + 0x271FD38))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaStoreProductPrice* other) {
		return ((R (*)(ArenaStoreProductPrice*, ProtoModels::ArenaStoreProductPrice*))(Il2CppBase() + 0x271FDA8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaStoreProductPrice*))(Il2CppBase() + 0x271FE0C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaStoreProductPrice*))(Il2CppBase() + 0x271FE9C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaStoreProductPrice*, uintptr_t))(Il2CppBase() + 0x271FF00))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaStoreProductPrice*))(Il2CppBase() + 0x271FFB8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaStoreProductPrice* other) {
		return ((R (*)(ArenaStoreProductPrice*, ProtoModels::ArenaStoreProductPrice*))(Il2CppBase() + 0x27200BC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaStoreProductPrice*, uintptr_t))(Il2CppBase() + 0x27200FC))(this, input);
	}

};

}
