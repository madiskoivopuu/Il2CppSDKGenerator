#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ShortStoreProduct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ShortStoreProduct"));
	}

	template <typename T = MessageParser1ShortStoreProduct*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IapNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& iapName_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& PriceCentFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& priceCent_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& VipFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& vip_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& DescriptionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaStoreProductDescription*> T& description_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& IconFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& icon_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& MaxCountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& maxCount_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& CategoriesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaStoreCategory*>*> static T& _repeated_categories_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1ArenaStoreCategory*>*> T& categories_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& ResourcesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaStoreResource*>*> static T& _repeated_resources_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = RepeatedField1ArenaStoreResource*>*> T& resources_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& StartTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& startTime_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& EndTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endTime_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& DiscountsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaStoreProductDiscount*>*> static T& _repeated_discounts_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = RepeatedField1ArenaStoreProductDiscount*>*> T& discounts_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& PackDescriptionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& packDescription_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& CoinCompensationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& coinCompensation_() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = MessageParser1ShortStoreProduct*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1631544))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x16315A8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x16316C8))(this);
	}
	template <typename T = ShortStoreProduct*> T Clone() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631A24))(this);
	}
	template <typename T = Il2CppString*> T get_IapName() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631A80))(this);
	}
	template <typename T = void> T set_IapName(Il2CppString* value) {
		return ((T (*)(ShortStoreProduct*, Il2CppString*))(Il2CppBase() + 0x1631A88))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631B08))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ShortStoreProduct*, Il2CppString*))(Il2CppBase() + 0x1631B10))(this, value);
	}
	template <typename T = int32_t> T get_PriceCent() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631B90))(this);
	}
	template <typename T = void> T set_PriceCent(int32_t value) {
		return ((T (*)(ShortStoreProduct*, int32_t))(Il2CppBase() + 0x1631B98))(this, value);
	}
	template <typename T = int32_t> T get_Vip() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631BA0))(this);
	}
	template <typename T = void> T set_Vip(int32_t value) {
		return ((T (*)(ShortStoreProduct*, int32_t))(Il2CppBase() + 0x1631BA8))(this, value);
	}
	template <typename T = ArenaStoreProductDescription*> T get_Description() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631BB0))(this);
	}
	template <typename T = void> T set_Description(ArenaStoreProductDescription* value) {
		return ((T (*)(ShortStoreProduct*, ArenaStoreProductDescription*))(Il2CppBase() + 0x1631BB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631BC0))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(ShortStoreProduct*, Il2CppString*))(Il2CppBase() + 0x1631BC8))(this, value);
	}
	template <typename T = int32_t> T get_MaxCount() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631C48))(this);
	}
	template <typename T = void> T set_MaxCount(int32_t value) {
		return ((T (*)(ShortStoreProduct*, int32_t))(Il2CppBase() + 0x1631C50))(this, value);
	}
	template <typename T = RepeatedField1ArenaStoreCategory*>*> T get_Categories() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631C58))(this);
	}
	template <typename T = RepeatedField1ArenaStoreResource*>*> T get_Resources() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631C60))(this);
	}
	template <typename T = int64_t> T get_StartTime() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631C68))(this);
	}
	template <typename T = void> T set_StartTime(int64_t value) {
		return ((T (*)(ShortStoreProduct*, int64_t))(Il2CppBase() + 0x1631C70))(this, value);
	}
	template <typename T = int64_t> T get_EndTime() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631C78))(this);
	}
	template <typename T = void> T set_EndTime(int64_t value) {
		return ((T (*)(ShortStoreProduct*, int64_t))(Il2CppBase() + 0x1631C80))(this, value);
	}
	template <typename T = RepeatedField1ArenaStoreProductDiscount*>*> T get_Discounts() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631C88))(this);
	}
	template <typename T = Il2CppString*> T get_PackDescription() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631C90))(this);
	}
	template <typename T = void> T set_PackDescription(Il2CppString* value) {
		return ((T (*)(ShortStoreProduct*, Il2CppString*))(Il2CppBase() + 0x1631C98))(this, value);
	}
	template <typename T = int32_t> T get_CoinCompensation() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631D18))(this);
	}
	template <typename T = void> T set_CoinCompensation(int32_t value) {
		return ((T (*)(ShortStoreProduct*, int32_t))(Il2CppBase() + 0x1631D20))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ShortStoreProduct*, Il2CppObject*))(Il2CppBase() + 0x1631D28))(this, other);
	}
	template <typename T = bool> T Equals_1(ShortStoreProduct* other) {
		return ((T (*)(ShortStoreProduct*, ShortStoreProduct*))(Il2CppBase() + 0x1631D98))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1631F3C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x1632108))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ShortStoreProduct*, uintptr_t))(Il2CppBase() + 0x163216C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ShortStoreProduct*))(Il2CppBase() + 0x16324A4))(this);
	}
	template <typename T = void> T MergeFrom(ShortStoreProduct* other) {
		return ((T (*)(ShortStoreProduct*, ShortStoreProduct*))(Il2CppBase() + 0x163289C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ShortStoreProduct*, uintptr_t))(Il2CppBase() + 0x1632A60))(this, input);
	}

};

}
