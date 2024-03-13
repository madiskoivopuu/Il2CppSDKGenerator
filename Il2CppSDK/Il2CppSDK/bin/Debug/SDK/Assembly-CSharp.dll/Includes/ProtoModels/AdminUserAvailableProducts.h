#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminUserAvailableProducts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminUserAvailableProducts"));
	}

	template <typename T = MessageParser1AdminUserAvailableProducts*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ProductsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1AdminUserAvailableProduct*>*> static T& _repeated_products_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1AdminUserAvailableProduct*>*> T& products_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1AdminUserAvailableProducts*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12975F0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1297654))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminUserAvailableProducts*))(Il2CppBase() + 0x1297774))(this);
	}
	template <typename T = AdminUserAvailableProducts*> T Clone() {
		return ((T (*)(AdminUserAvailableProducts*))(Il2CppBase() + 0x12978CC))(this);
	}
	template <typename T = RepeatedField1AdminUserAvailableProduct*>*> T get_Products() {
		return ((T (*)(AdminUserAvailableProducts*))(Il2CppBase() + 0x1297928))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(AdminUserAvailableProducts*, Il2CppObject*))(Il2CppBase() + 0x1297930))(this, other);
	}
	template <typename T = bool> T Equals_1(AdminUserAvailableProducts* other) {
		return ((T (*)(AdminUserAvailableProducts*, AdminUserAvailableProducts*))(Il2CppBase() + 0x12979A0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminUserAvailableProducts*))(Il2CppBase() + 0x1297A2C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminUserAvailableProducts*))(Il2CppBase() + 0x1297A58))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminUserAvailableProducts*, uintptr_t))(Il2CppBase() + 0x1297ABC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminUserAvailableProducts*))(Il2CppBase() + 0x1297B5C))(this);
	}
	template <typename T = void> T MergeFrom(AdminUserAvailableProducts* other) {
		return ((T (*)(AdminUserAvailableProducts*, AdminUserAvailableProducts*))(Il2CppBase() + 0x1297BEC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminUserAvailableProducts*, uintptr_t))(Il2CppBase() + 0x1297C64))(this, input);
	}

};

}
