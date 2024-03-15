#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminUserAvailableProducts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminUserAvailableProducts"));
	}

	 static MessageParser1<ProtoModels::AdminUserAvailableProducts*>*& _parser() {
		return *(MessageParser1<ProtoModels::AdminUserAvailableProducts*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ProductsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::AdminUserAvailableProduct*>*& _repeated_products_codec() {
		return *(FieldCodec1<ProtoModels::AdminUserAvailableProduct*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::AdminUserAvailableProduct*>*& products_() {
		return *(RepeatedField1<ProtoModels::AdminUserAvailableProduct*>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::AdminUserAvailableProducts*>* get_Parser() {
		return ((MessageParser1<ProtoModels::AdminUserAvailableProducts*>* (*)(void *))(Il2CppBase() + 0x12975F0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1297654))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminUserAvailableProducts*))(Il2CppBase() + 0x1297774))(this);
	}
	template <typename R = ProtoModels::AdminUserAvailableProducts*> R Clone() {
		return ((R (*)(AdminUserAvailableProducts*))(Il2CppBase() + 0x12978CC))(this);
	}
	 RepeatedField1<ProtoModels::AdminUserAvailableProduct*>* get_Products() {
		return ((RepeatedField1<ProtoModels::AdminUserAvailableProduct*>* (*)(AdminUserAvailableProducts*))(Il2CppBase() + 0x1297928))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminUserAvailableProducts*, Il2CppObject*))(Il2CppBase() + 0x1297930))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminUserAvailableProducts* other) {
		return ((R (*)(AdminUserAvailableProducts*, ProtoModels::AdminUserAvailableProducts*))(Il2CppBase() + 0x12979A0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminUserAvailableProducts*))(Il2CppBase() + 0x1297A2C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminUserAvailableProducts*))(Il2CppBase() + 0x1297A58))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminUserAvailableProducts*, uintptr_t))(Il2CppBase() + 0x1297ABC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminUserAvailableProducts*))(Il2CppBase() + 0x1297B5C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminUserAvailableProducts* other) {
		return ((R (*)(AdminUserAvailableProducts*, ProtoModels::AdminUserAvailableProducts*))(Il2CppBase() + 0x1297BEC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminUserAvailableProducts*, uintptr_t))(Il2CppBase() + 0x1297C64))(this, input);
	}

};

}
