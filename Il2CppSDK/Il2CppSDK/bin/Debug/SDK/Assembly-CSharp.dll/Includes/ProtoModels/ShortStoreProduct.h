#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ShortStoreProduct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ShortStoreProduct"));
	}

	 static MessageParser1ProtoModels::ShortStoreProduct*>*& _parser() {
		return *(MessageParser1ProtoModels::ShortStoreProduct*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IapNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& iapName_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& PriceCentFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& priceCent_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& VipFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& vip_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& DescriptionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaStoreProductDescription*> R& description_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& IconFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& icon_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& MaxCountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& maxCount_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& CategoriesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::ArenaStoreCategory*>*& _repeated_categories_codec() {
		return *(FieldCodec1ProtoModels::ArenaStoreCategory*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::ArenaStoreCategory*>*& categories_() {
		return *(RepeatedField1ProtoModels::ArenaStoreCategory*>**)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& ResourcesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::ArenaStoreResource*>*& _repeated_resources_codec() {
		return *(FieldCodec1ProtoModels::ArenaStoreResource*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1ProtoModels::ArenaStoreResource*>*& resources_() {
		return *(RepeatedField1ProtoModels::ArenaStoreResource*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& StartTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& startTime_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& EndTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endTime_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& DiscountsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::ArenaStoreProductDiscount*>*& _repeated_discounts_codec() {
		return *(FieldCodec1ProtoModels::ArenaStoreProductDiscount*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 RepeatedField1ProtoModels::ArenaStoreProductDiscount*>*& discounts_() {
		return *(RepeatedField1ProtoModels::ArenaStoreProductDiscount*>**)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& PackDescriptionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& packDescription_() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& CoinCompensationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& coinCompensation_() {
		return *(R*)((uintptr_t)this + 0x70);
	}

	 static MessageParser1ProtoModels::ShortStoreProduct*>* get_Parser() {
		return ((MessageParser1ProtoModels::ShortStoreProduct*>* (*)(void *))(Il2CppBase() + 0x1631544))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x16315A8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ShortStoreProduct*))(Il2CppBase() + 0x16316C8))(this);
	}
	template <typename R = ProtoModels::ShortStoreProduct*> R Clone() {
		return ((R (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631A24))(this);
	}
	template <typename R = Il2CppString*> R get_IapName() {
		return ((R (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631A80))(this);
	}
	template <typename R = void> R set_IapName(Il2CppString* value) {
		return ((R (*)(ShortStoreProduct*, Il2CppString*))(Il2CppBase() + 0x1631A88))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631B08))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(ShortStoreProduct*, Il2CppString*))(Il2CppBase() + 0x1631B10))(this, value);
	}
	template <typename R = int32_t> R get_PriceCent() {
		return ((R (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631B90))(this);
	}
	template <typename R = void> R set_PriceCent(int32_t value) {
		return ((R (*)(ShortStoreProduct*, int32_t))(Il2CppBase() + 0x1631B98))(this, value);
	}
	template <typename R = int32_t> R get_Vip() {
		return ((R (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631BA0))(this);
	}
	template <typename R = void> R set_Vip(int32_t value) {
		return ((R (*)(ShortStoreProduct*, int32_t))(Il2CppBase() + 0x1631BA8))(this, value);
	}
	template <typename R = ProtoModels::ArenaStoreProductDescription*> R get_Description() {
		return ((R (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631BB0))(this);
	}
	template <typename R = void> R set_Description(ProtoModels::ArenaStoreProductDescription* value) {
		return ((R (*)(ShortStoreProduct*, ProtoModels::ArenaStoreProductDescription*))(Il2CppBase() + 0x1631BB8))(this, value);
	}
	template <typename R = Il2CppString*> R get_Icon() {
		return ((R (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631BC0))(this);
	}
	template <typename R = void> R set_Icon(Il2CppString* value) {
		return ((R (*)(ShortStoreProduct*, Il2CppString*))(Il2CppBase() + 0x1631BC8))(this, value);
	}
	template <typename R = int32_t> R get_MaxCount() {
		return ((R (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631C48))(this);
	}
	template <typename R = void> R set_MaxCount(int32_t value) {
		return ((R (*)(ShortStoreProduct*, int32_t))(Il2CppBase() + 0x1631C50))(this, value);
	}
	 RepeatedField1ProtoModels::ArenaStoreCategory*>* get_Categories() {
		return ((RepeatedField1ProtoModels::ArenaStoreCategory*>* (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631C58))(this);
	}
	 RepeatedField1ProtoModels::ArenaStoreResource*>* get_Resources() {
		return ((RepeatedField1ProtoModels::ArenaStoreResource*>* (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631C60))(this);
	}
	template <typename R = int64_t> R get_StartTime() {
		return ((R (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631C68))(this);
	}
	template <typename R = void> R set_StartTime(int64_t value) {
		return ((R (*)(ShortStoreProduct*, int64_t))(Il2CppBase() + 0x1631C70))(this, value);
	}
	template <typename R = int64_t> R get_EndTime() {
		return ((R (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631C78))(this);
	}
	template <typename R = void> R set_EndTime(int64_t value) {
		return ((R (*)(ShortStoreProduct*, int64_t))(Il2CppBase() + 0x1631C80))(this, value);
	}
	 RepeatedField1ProtoModels::ArenaStoreProductDiscount*>* get_Discounts() {
		return ((RepeatedField1ProtoModels::ArenaStoreProductDiscount*>* (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631C88))(this);
	}
	template <typename R = Il2CppString*> R get_PackDescription() {
		return ((R (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631C90))(this);
	}
	template <typename R = void> R set_PackDescription(Il2CppString* value) {
		return ((R (*)(ShortStoreProduct*, Il2CppString*))(Il2CppBase() + 0x1631C98))(this, value);
	}
	template <typename R = int32_t> R get_CoinCompensation() {
		return ((R (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631D18))(this);
	}
	template <typename R = void> R set_CoinCompensation(int32_t value) {
		return ((R (*)(ShortStoreProduct*, int32_t))(Il2CppBase() + 0x1631D20))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ShortStoreProduct*, Il2CppObject*))(Il2CppBase() + 0x1631D28))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ShortStoreProduct* other) {
		return ((R (*)(ShortStoreProduct*, ProtoModels::ShortStoreProduct*))(Il2CppBase() + 0x1631D98))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631F3C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ShortStoreProduct*))(Il2CppBase() + 0x1632108))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ShortStoreProduct*, uintptr_t))(Il2CppBase() + 0x163216C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ShortStoreProduct*))(Il2CppBase() + 0x16324A4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ShortStoreProduct* other) {
		return ((R (*)(ShortStoreProduct*, ProtoModels::ShortStoreProduct*))(Il2CppBase() + 0x163289C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ShortStoreProduct*, uintptr_t))(Il2CppBase() + 0x1632A60))(this, input);
	}

};

}
