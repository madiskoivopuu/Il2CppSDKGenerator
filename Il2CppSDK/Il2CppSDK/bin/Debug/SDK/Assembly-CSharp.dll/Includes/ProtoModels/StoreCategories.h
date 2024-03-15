#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class StoreCategories
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "StoreCategories"));
	}

	 static MessageParser1<ProtoModels::StoreCategories*>*& _parser() {
		return *(MessageParser1<ProtoModels::StoreCategories*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CategoriesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::StoreCategory*>*& _repeated_categories_codec() {
		return *(FieldCodec1<ProtoModels::StoreCategory*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::StoreCategory*>*& categories_() {
		return *(RepeatedField1<ProtoModels::StoreCategory*>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::StoreCategories*>* get_Parser() {
		return ((MessageParser1<ProtoModels::StoreCategories*>* (*)(void *))(Il2CppBase() + 0x1419A98))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1419AFC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(StoreCategories*))(Il2CppBase() + 0x1419C1C))(this);
	}
	template <typename R = ProtoModels::StoreCategories*> R Clone() {
		return ((R (*)(StoreCategories*))(Il2CppBase() + 0x1419D74))(this);
	}
	 RepeatedField1<ProtoModels::StoreCategory*>* get_Categories() {
		return ((RepeatedField1<ProtoModels::StoreCategory*>* (*)(StoreCategories*))(Il2CppBase() + 0x1419DD0))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(StoreCategories*, Il2CppObject*))(Il2CppBase() + 0x1419DD8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::StoreCategories* other) {
		return ((R (*)(StoreCategories*, ProtoModels::StoreCategories*))(Il2CppBase() + 0x1419E48))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(StoreCategories*))(Il2CppBase() + 0x1419ED4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(StoreCategories*))(Il2CppBase() + 0x1419F00))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(StoreCategories*, uintptr_t))(Il2CppBase() + 0x1419F64))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(StoreCategories*))(Il2CppBase() + 0x141A004))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::StoreCategories* other) {
		return ((R (*)(StoreCategories*, ProtoModels::StoreCategories*))(Il2CppBase() + 0x141A094))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(StoreCategories*, uintptr_t))(Il2CppBase() + 0x141A10C))(this, input);
	}

};

}
