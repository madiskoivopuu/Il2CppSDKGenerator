#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreProductDiscount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreProductDiscount"));
	}

	template <typename T = MessageParser1ArenaStoreProductDiscount*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& value_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& PercentFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& percent_() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& ShowOnlyPercentFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& showOnlyPercent_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& DiscountedProductIdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& discountedProductId_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1ArenaStoreProductDiscount*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x271EE10))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x271EE74))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271EF94))(this);
	}
	template <typename T = ArenaStoreProductDiscount*> T Clone() {
		return ((T (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F0B8))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F114))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ArenaStoreProductDiscount*, Il2CppString*))(Il2CppBase() + 0x271F11C))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F19C))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(ArenaStoreProductDiscount*, int32_t))(Il2CppBase() + 0x271F1A4))(this, value);
	}
	template <typename T = int32_t> T get_Percent() {
		return ((T (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F1AC))(this);
	}
	template <typename T = void> T set_Percent(int32_t value) {
		return ((T (*)(ArenaStoreProductDiscount*, int32_t))(Il2CppBase() + 0x271F1B4))(this, value);
	}
	template <typename T = bool> T get_ShowOnlyPercent() {
		return ((T (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F1BC))(this);
	}
	template <typename T = void> T set_ShowOnlyPercent(bool value) {
		return ((T (*)(ArenaStoreProductDiscount*, bool))(Il2CppBase() + 0x271F1C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_DiscountedProductId() {
		return ((T (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F1D0))(this);
	}
	template <typename T = void> T set_DiscountedProductId(Il2CppString* value) {
		return ((T (*)(ArenaStoreProductDiscount*, Il2CppString*))(Il2CppBase() + 0x271F1D8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaStoreProductDiscount*, Il2CppObject*))(Il2CppBase() + 0x271F258))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaStoreProductDiscount* other) {
		return ((T (*)(ArenaStoreProductDiscount*, ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F2C8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F370))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F444))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaStoreProductDiscount*, uintptr_t))(Il2CppBase() + 0x271F4A8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F5C0))(this);
	}
	template <typename T = void> T MergeFrom(ArenaStoreProductDiscount* other) {
		return ((T (*)(ArenaStoreProductDiscount*, ArenaStoreProductDiscount*))(Il2CppBase() + 0x271F720))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaStoreProductDiscount*, uintptr_t))(Il2CppBase() + 0x271F7A4))(this, input);
	}

};

}
