#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserPurchasedProducts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserPurchasedProducts"));
	}

	 static MessageParser1<ProtoModels::UserPurchasedProducts*>*& _parser() {
		return *(MessageParser1<ProtoModels::UserPurchasedProducts*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ProductsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, ProtoModels::UserPurchasedProduct*>*& _map_products_codec() {
		return *(Codec<Il2CppString*, ProtoModels::UserPurchasedProduct*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 MapField2<Il2CppString*, ProtoModels::UserPurchasedProduct*>*& products_() {
		return *(MapField2<Il2CppString*, ProtoModels::UserPurchasedProduct*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ProductProgressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, ProtoModels::UserProductProgress*>*& _map_productProgress_codec() {
		return *(Codec<Il2CppString*, ProtoModels::UserProductProgress*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 MapField2<Il2CppString*, ProtoModels::UserProductProgress*>*& productProgress_() {
		return *(MapField2<Il2CppString*, ProtoModels::UserProductProgress*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& SlotsProgressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, ProtoModels::UserSlotsProgress*>*& _map_slotsProgress_codec() {
		return *(Codec<Il2CppString*, ProtoModels::UserSlotsProgress*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 MapField2<Il2CppString*, ProtoModels::UserSlotsProgress*>*& slotsProgress_() {
		return *(MapField2<Il2CppString*, ProtoModels::UserSlotsProgress*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& MigratedFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& migrated_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& MigratedStoreExpFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& migratedStoreExp_() {
		return *(R*)((uintptr_t)this + 0x29);
	}
	template <typename R = int32_t> static R& MigrationsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, bool>*& _map_migrations_codec() {
		return *(Codec<Il2CppString*, bool>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 MapField2<Il2CppString*, bool>*& migrations_() {
		return *(MapField2<Il2CppString*, bool>**)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& IncompletePurchaseHistoryFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::IncompletePurchaseHistory*>*& _repeated_incompletePurchaseHistory_codec() {
		return *(FieldCodec1<ProtoModels::IncompletePurchaseHistory*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 RepeatedField1<ProtoModels::IncompletePurchaseHistory*>*& incompletePurchaseHistory_() {
		return *(RepeatedField1<ProtoModels::IncompletePurchaseHistory*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& PredefinedUserRollProgressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, ProtoModels::PredefinedRollProgress*>*& _map_predefinedUserRollProgress_codec() {
		return *(Codec<Il2CppString*, ProtoModels::PredefinedRollProgress*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 MapField2<Il2CppString*, ProtoModels::PredefinedRollProgress*>*& predefinedUserRollProgress_() {
		return *(MapField2<Il2CppString*, ProtoModels::PredefinedRollProgress*>**)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& PredefinedRollPoolProgressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, ProtoModels::PredefinedRollPoolProgress*>*& _map_predefinedRollPoolProgress_codec() {
		return *(Codec<Il2CppString*, ProtoModels::PredefinedRollPoolProgress*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 MapField2<Il2CppString*, ProtoModels::PredefinedRollPoolProgress*>*& predefinedRollPoolProgress_() {
		return *(MapField2<Il2CppString*, ProtoModels::PredefinedRollPoolProgress*>**)((uintptr_t)this + 0x48);
	}

	 static MessageParser1<ProtoModels::UserPurchasedProducts*>* get_Parser() {
		return ((MessageParser1<ProtoModels::UserPurchasedProducts*>* (*)(void *))(Il2CppBase() + 0x2472E00))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2472E64))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserPurchasedProducts*))(Il2CppBase() + 0x2472F84))(this);
	}
	template <typename R = ProtoModels::UserPurchasedProducts*> R Clone() {
		return ((R (*)(UserPurchasedProducts*))(Il2CppBase() + 0x24733F0))(this);
	}
	 MapField2<Il2CppString*, ProtoModels::UserPurchasedProduct*>* get_Products() {
		return ((MapField2<Il2CppString*, ProtoModels::UserPurchasedProduct*>* (*)(UserPurchasedProducts*))(Il2CppBase() + 0x247344C))(this);
	}
	 MapField2<Il2CppString*, ProtoModels::UserProductProgress*>* get_ProductProgress() {
		return ((MapField2<Il2CppString*, ProtoModels::UserProductProgress*>* (*)(UserPurchasedProducts*))(Il2CppBase() + 0x2473454))(this);
	}
	 MapField2<Il2CppString*, ProtoModels::UserSlotsProgress*>* get_SlotsProgress() {
		return ((MapField2<Il2CppString*, ProtoModels::UserSlotsProgress*>* (*)(UserPurchasedProducts*))(Il2CppBase() + 0x247345C))(this);
	}
	template <typename R = bool> R get_Migrated() {
		return ((R (*)(UserPurchasedProducts*))(Il2CppBase() + 0x2473464))(this);
	}
	template <typename R = void> R set_Migrated(bool value) {
		return ((R (*)(UserPurchasedProducts*, bool))(Il2CppBase() + 0x247346C))(this, value);
	}
	template <typename R = bool> R get_MigratedStoreExp() {
		return ((R (*)(UserPurchasedProducts*))(Il2CppBase() + 0x2473478))(this);
	}
	template <typename R = void> R set_MigratedStoreExp(bool value) {
		return ((R (*)(UserPurchasedProducts*, bool))(Il2CppBase() + 0x2473480))(this, value);
	}
	 MapField2<Il2CppString*, bool>* get_Migrations() {
		return ((MapField2<Il2CppString*, bool>* (*)(UserPurchasedProducts*))(Il2CppBase() + 0x247348C))(this);
	}
	 RepeatedField1<ProtoModels::IncompletePurchaseHistory*>* get_IncompletePurchaseHistory() {
		return ((RepeatedField1<ProtoModels::IncompletePurchaseHistory*>* (*)(UserPurchasedProducts*))(Il2CppBase() + 0x2473494))(this);
	}
	 MapField2<Il2CppString*, ProtoModels::PredefinedRollProgress*>* get_PredefinedUserRollProgress() {
		return ((MapField2<Il2CppString*, ProtoModels::PredefinedRollProgress*>* (*)(UserPurchasedProducts*))(Il2CppBase() + 0x247349C))(this);
	}
	 MapField2<Il2CppString*, ProtoModels::PredefinedRollPoolProgress*>* get_PredefinedRollPoolProgress() {
		return ((MapField2<Il2CppString*, ProtoModels::PredefinedRollPoolProgress*>* (*)(UserPurchasedProducts*))(Il2CppBase() + 0x24734A4))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserPurchasedProducts*, Il2CppObject*))(Il2CppBase() + 0x24734AC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserPurchasedProducts* other) {
		return ((R (*)(UserPurchasedProducts*, ProtoModels::UserPurchasedProducts*))(Il2CppBase() + 0x247351C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserPurchasedProducts*))(Il2CppBase() + 0x24736F0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserPurchasedProducts*))(Il2CppBase() + 0x247382C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserPurchasedProducts*, uintptr_t))(Il2CppBase() + 0x2473890))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserPurchasedProducts*))(Il2CppBase() + 0x2473ADC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserPurchasedProducts* other) {
		return ((R (*)(UserPurchasedProducts*, ProtoModels::UserPurchasedProducts*))(Il2CppBase() + 0x2473D14))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserPurchasedProducts*, uintptr_t))(Il2CppBase() + 0x2473E94))(this, input);
	}

};

}
