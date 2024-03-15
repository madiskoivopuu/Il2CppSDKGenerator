#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreProductDiscount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreProductDiscount"));
	}

	 static MessageParser1ProtoModels::ArenaStoreProductDiscount*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaStoreProductDiscount*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& value_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& PercentFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& percent_() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> static R& ShowOnlyPercentFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& showOnlyPercent_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& DiscountedProductIdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& discountedProductId_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::ArenaStoreProductDiscount*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaStoreProductDiscount*>* (*)(void *))(Il2CppBase() + 0x271EE10))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x271EE74))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271EF94))(this);
	}
	template <typename R = ProtoModels::ArenaStoreProductDiscount*> R Clone() {
		return ((R (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F0B8))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F114))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(ArenaStoreProductDiscount*, Il2CppString*))(Il2CppBase() + 0x271F11C))(this, value);
	}
	template <typename R = int32_t> R get_Value() {
		return ((R (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F19C))(this);
	}
	template <typename R = void> R set_Value(int32_t value) {
		return ((R (*)(ArenaStoreProductDiscount*, int32_t))(Il2CppBase() + 0x271F1A4))(this, value);
	}
	template <typename R = int32_t> R get_Percent() {
		return ((R (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F1AC))(this);
	}
	template <typename R = void> R set_Percent(int32_t value) {
		return ((R (*)(ArenaStoreProductDiscount*, int32_t))(Il2CppBase() + 0x271F1B4))(this, value);
	}
	template <typename R = bool> R get_ShowOnlyPercent() {
		return ((R (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F1BC))(this);
	}
	template <typename R = void> R set_ShowOnlyPercent(bool value) {
		return ((R (*)(ArenaStoreProductDiscount*, bool))(Il2CppBase() + 0x271F1C4))(this, value);
	}
	template <typename R = Il2CppString*> R get_DiscountedProductId() {
		return ((R (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F1D0))(this);
	}
	template <typename R = void> R set_DiscountedProductId(Il2CppString* value) {
		return ((R (*)(ArenaStoreProductDiscount*, Il2CppString*))(Il2CppBase() + 0x271F1D8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaStoreProductDiscount*, Il2CppObject*))(Il2CppBase() + 0x271F258))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaStoreProductDiscount* other) {
		return ((R (*)(ArenaStoreProductDiscount*, ProtoModels::ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F2C8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F370))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F444))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaStoreProductDiscount*, uintptr_t))(Il2CppBase() + 0x271F4A8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F5C0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaStoreProductDiscount* other) {
		return ((R (*)(ArenaStoreProductDiscount*, ProtoModels::ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F720))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaStoreProductDiscount*, uintptr_t))(Il2CppBase() + 0x271F7A4))(this, input);
	}

};

}
