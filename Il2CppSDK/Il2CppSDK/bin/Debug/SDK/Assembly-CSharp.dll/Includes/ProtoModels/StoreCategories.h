#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class StoreCategories
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "StoreCategories"));
	}

	template <typename T = MessageParser1StoreCategories*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CategoriesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1StoreCategory*>*> static T& _repeated_categories_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1StoreCategory*>*> T& categories_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1StoreCategories*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1419A98))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1419AFC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(StoreCategories*))(Il2CppBase() + 0x1419C1C))(this);
	}
	template <typename T = StoreCategories*> T Clone() {
		return ((T (*)(StoreCategories*))(Il2CppBase() + 0x1419D74))(this);
	}
	template <typename T = RepeatedField1StoreCategory*>*> T get_Categories() {
		return ((T (*)(StoreCategories*))(Il2CppBase() + 0x1419DD0))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(StoreCategories*, Il2CppObject*))(Il2CppBase() + 0x1419DD8))(this, other);
	}
	template <typename T = bool> T Equals_1(StoreCategories* other) {
		return ((T (*)(StoreCategories*, StoreCategories*))(Il2CppBase() + 0x1419E48))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(StoreCategories*))(Il2CppBase() + 0x1419ED4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(StoreCategories*))(Il2CppBase() + 0x1419F00))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(StoreCategories*, uintptr_t))(Il2CppBase() + 0x1419F64))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(StoreCategories*))(Il2CppBase() + 0x141A004))(this);
	}
	template <typename T = void> T MergeFrom(StoreCategories* other) {
		return ((T (*)(StoreCategories*, StoreCategories*))(Il2CppBase() + 0x141A094))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(StoreCategories*, uintptr_t))(Il2CppBase() + 0x141A10C))(this, input);
	}

};

}
