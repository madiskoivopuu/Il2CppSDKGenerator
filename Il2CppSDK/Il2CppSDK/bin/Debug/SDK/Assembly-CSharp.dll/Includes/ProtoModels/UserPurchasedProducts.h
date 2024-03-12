#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserPurchasedProducts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserPurchasedProducts"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ProductsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_products_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& products_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ProductProgressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_productProgress_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& productProgress_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& SlotsProgressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_slotsProgress_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> T& slotsProgress_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& MigratedFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& migrated_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& MigratedStoreExpFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& migratedStoreExp_() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = int32_t> static T& MigrationsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_migrations_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> T& migrations_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& IncompletePurchaseHistoryFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_incompletePurchaseHistory_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> T& incompletePurchaseHistory_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& PredefinedUserRollProgressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_predefinedUserRollProgress_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> T& predefinedUserRollProgress_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& PredefinedRollPoolProgressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_predefinedRollPoolProgress_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> T& predefinedRollPoolProgress_() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2472E00))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2472E64))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserPurchasedProducts*))(Il2CppBase() + 0x2472F84))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserPurchasedProducts*))(Il2CppBase() + 0x24733F0))(this);
	}
	template <typename T = void*> T get_Products() {
		return ((T (*)(UserPurchasedProducts*))(Il2CppBase() + 0x247344C))(this);
	}
	template <typename T = void*> T get_ProductProgress() {
		return ((T (*)(UserPurchasedProducts*))(Il2CppBase() + 0x2473454))(this);
	}
	template <typename T = void*> T get_SlotsProgress() {
		return ((T (*)(UserPurchasedProducts*))(Il2CppBase() + 0x247345C))(this);
	}
	template <typename T = bool> T get_Migrated() {
		return ((T (*)(UserPurchasedProducts*))(Il2CppBase() + 0x2473464))(this);
	}
	template <typename T = void> T set_Migrated(bool value) {
		return ((T (*)(UserPurchasedProducts*, bool))(Il2CppBase() + 0x247346C))(this, value);
	}
	template <typename T = bool> T get_MigratedStoreExp() {
		return ((T (*)(UserPurchasedProducts*))(Il2CppBase() + 0x2473478))(this);
	}
	template <typename T = void> T set_MigratedStoreExp(bool value) {
		return ((T (*)(UserPurchasedProducts*, bool))(Il2CppBase() + 0x2473480))(this, value);
	}
	template <typename T = void*> T get_Migrations() {
		return ((T (*)(UserPurchasedProducts*))(Il2CppBase() + 0x247348C))(this);
	}
	template <typename T = void*> T get_IncompletePurchaseHistory() {
		return ((T (*)(UserPurchasedProducts*))(Il2CppBase() + 0x2473494))(this);
	}
	template <typename T = void*> T get_PredefinedUserRollProgress() {
		return ((T (*)(UserPurchasedProducts*))(Il2CppBase() + 0x247349C))(this);
	}
	template <typename T = void*> T get_PredefinedRollPoolProgress() {
		return ((T (*)(UserPurchasedProducts*))(Il2CppBase() + 0x24734A4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserPurchasedProducts*, uintptr_t))(Il2CppBase() + 0x24734AC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserPurchasedProducts*, uintptr_t))(Il2CppBase() + 0x247351C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserPurchasedProducts*))(Il2CppBase() + 0x24736F0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserPurchasedProducts*))(Il2CppBase() + 0x247382C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserPurchasedProducts*, uintptr_t))(Il2CppBase() + 0x2473890))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserPurchasedProducts*))(Il2CppBase() + 0x2473ADC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserPurchasedProducts*, uintptr_t))(Il2CppBase() + 0x2473D14))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserPurchasedProducts*, uintptr_t))(Il2CppBase() + 0x2473E94))(this, input);
	}

};

}
