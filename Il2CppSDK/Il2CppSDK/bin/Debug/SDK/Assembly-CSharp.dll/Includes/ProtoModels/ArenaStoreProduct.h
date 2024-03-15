#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreProduct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreProduct"));
	}

	 static MessageParser1<ProtoModels::ArenaStoreProduct*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaStoreProduct*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& DescriptionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaStoreProductDescription*> R& description_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& IconFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& icon_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ExperienceBoosterDurationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& experienceBoosterDuration_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& CurrencyPackFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ArenaStoreCurrencyPack*>*& _repeated_currencyPack_codec() {
		return *(FieldCodec1<ProtoModels::ArenaStoreCurrencyPack*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::ArenaStoreCurrencyPack*>*& currencyPack_() {
		return *(RepeatedField1<ProtoModels::ArenaStoreCurrencyPack*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& CountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& count_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& PricesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ArenaStoreProductPrice*>*& _repeated_prices_codec() {
		return *(FieldCodec1<ProtoModels::ArenaStoreProductPrice*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1<ProtoModels::ArenaStoreProductPrice*>*& prices_() {
		return *(RepeatedField1<ProtoModels::ArenaStoreProductPrice*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& TagsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<Il2CppString*>*& _repeated_tags_codec() {
		return *(FieldCodec1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 RepeatedField1<Il2CppString*>*& tags_() {
		return *(RepeatedField1<Il2CppString*>**)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& UnlockPremiumNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& unlockPremiumName_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& CategoriesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ArenaStoreCategory*>*& _repeated_categories_codec() {
		return *(FieldCodec1<ProtoModels::ArenaStoreCategory*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 RepeatedField1<ProtoModels::ArenaStoreCategory*>*& categories_() {
		return *(RepeatedField1<ProtoModels::ArenaStoreCategory*>**)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& ResourcesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ArenaStoreResource*>*& _repeated_resources_codec() {
		return *(FieldCodec1<ProtoModels::ArenaStoreResource*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 RepeatedField1<ProtoModels::ArenaStoreResource*>*& resources_() {
		return *(RepeatedField1<ProtoModels::ArenaStoreResource*>**)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& NeedExpFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<int64_t>*& _repeated_needExp_codec() {
		return *(FieldCodec1<int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 RepeatedField1<int64_t>*& needExp_() {
		return *(RepeatedField1<int64_t>**)((uintptr_t)this + 0x70);
	}
	template <typename R = int32_t> static R& SoldOutNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& soldOutName_() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> static R& SavingsGroupFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaStoreSavingsGroup*> R& savingsGroup_() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> static R& StartTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& startTime_() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> static R& EndTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endTime_() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> static R& BuyAmountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaStoreBuyAmount*> R& buyAmount_() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = int32_t> static R& PurchaseMoreFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<Il2CppString*>*& _repeated_purchaseMore_codec() {
		return *(FieldCodec1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 RepeatedField1<Il2CppString*>*& purchaseMore_() {
		return *(RepeatedField1<Il2CppString*>**)((uintptr_t)this + 0xA0);
	}
	template <typename R = int32_t> static R& RaritiesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<int32_t>*& _repeated_rarities_codec() {
		return *(FieldCodec1<int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 RepeatedField1<int32_t>*& rarities_() {
		return *(RepeatedField1<int32_t>**)((uintptr_t)this + 0xA8);
	}
	template <typename R = int32_t> static R& HackedTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::HackProductType> R& hackedType_() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = int32_t> static R& BattlePassLevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::BattlePassLevelType*> R& battlePassLevel_() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = int32_t> static R& ShowcasePriorityFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& showcasePriority_() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = int32_t> static R& SavingsPackTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& savingsPackType_() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = int32_t> static R& ProfitFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& profit_() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = int32_t> static R& StoreTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& storeType_() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = int32_t> static R& BannerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaProductBanner*> R& banner_() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = int32_t> static R& UnlockSeassonNumberFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& unlockSeassonNumber_() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = int32_t> static R& SlotsRewardsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ArenaStoreResource*>*& _repeated_slotsRewards_codec() {
		return *(FieldCodec1<ProtoModels::ArenaStoreResource*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 RepeatedField1<ProtoModels::ArenaStoreResource*>*& slotsRewards_() {
		return *(RepeatedField1<ProtoModels::ArenaStoreResource*>**)((uintptr_t)this + 0xF0);
	}
	template <typename R = int32_t> static R& DiscountsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ArenaStoreProductDiscount*>*& _repeated_discounts_codec() {
		return *(FieldCodec1<ProtoModels::ArenaStoreProductDiscount*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 RepeatedField1<ProtoModels::ArenaStoreProductDiscount*>*& discounts_() {
		return *(RepeatedField1<ProtoModels::ArenaStoreProductDiscount*>**)((uintptr_t)this + 0xF8);
	}
	template <typename R = int32_t> static R& ConsumeTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& consumeType_() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = int32_t> static R& PackDescriptionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& packDescription_() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = int32_t> static R& IsResettableFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isResettable_() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = int32_t> static R& BonusCurrencyFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::CurrencyTypeEnum> R& bonusCurrency_() {
		return *(R*)((uintptr_t)this + 0x114);
	}
	template <typename R = int32_t> static R& BonusCurrencyCountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& bonusCurrencyCount_() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = int32_t> static R& CommingSoonFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& commingSoon_() {
		return *(R*)((uintptr_t)this + 0x11C);
	}
	template <typename R = int32_t> static R& CommingSoonNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& commingSoonName_() {
		return *(R*)((uintptr_t)this + 0x120);
	}

	 static MessageParser1<ProtoModels::ArenaStoreProduct*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaStoreProduct*>* (*)(void *))(Il2CppBase() + 0x271A650))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x271A6B4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271A7D4))(this);
	}
	template <typename R = ProtoModels::ArenaStoreProduct*> R Clone() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B084))(this);
	}
	template <typename R = int32_t> R get_ID() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B0E0))(this);
	}
	template <typename R = void> R set_ID(int32_t value) {
		return ((R (*)(ArenaStoreProduct*, int32_t))(Il2CppBase() + 0x271B0E8))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B0F0))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B0F8))(this, value);
	}
	template <typename R = ProtoModels::ArenaStoreProductDescription*> R get_Description() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B178))(this);
	}
	template <typename R = void> R set_Description(ProtoModels::ArenaStoreProductDescription* value) {
		return ((R (*)(ArenaStoreProduct*, ProtoModels::ArenaStoreProductDescription*))(Il2CppBase() + 0x271B180))(this, value);
	}
	template <typename R = Il2CppString*> R get_Icon() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B188))(this);
	}
	template <typename R = void> R set_Icon(Il2CppString* value) {
		return ((R (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B190))(this, value);
	}
	template <typename R = int32_t> R get_ExperienceBoosterDuration() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B210))(this);
	}
	template <typename R = void> R set_ExperienceBoosterDuration(int32_t value) {
		return ((R (*)(ArenaStoreProduct*, int32_t))(Il2CppBase() + 0x271B218))(this, value);
	}
	 RepeatedField1<ProtoModels::ArenaStoreCurrencyPack*>* get_CurrencyPack() {
		return ((RepeatedField1<ProtoModels::ArenaStoreCurrencyPack*>* (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B220))(this);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B228))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(ArenaStoreProduct*, int32_t))(Il2CppBase() + 0x271B230))(this, value);
	}
	 RepeatedField1<ProtoModels::ArenaStoreProductPrice*>* get_Prices() {
		return ((RepeatedField1<ProtoModels::ArenaStoreProductPrice*>* (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B238))(this);
	}
	 RepeatedField1<Il2CppString*>* get_Tags() {
		return ((RepeatedField1<Il2CppString*>* (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B240))(this);
	}
	template <typename R = Il2CppString*> R get_UnlockPremiumName() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B248))(this);
	}
	template <typename R = void> R set_UnlockPremiumName(Il2CppString* value) {
		return ((R (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B250))(this, value);
	}
	 RepeatedField1<ProtoModels::ArenaStoreCategory*>* get_Categories() {
		return ((RepeatedField1<ProtoModels::ArenaStoreCategory*>* (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B2D0))(this);
	}
	 RepeatedField1<ProtoModels::ArenaStoreResource*>* get_Resources() {
		return ((RepeatedField1<ProtoModels::ArenaStoreResource*>* (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B2D8))(this);
	}
	 RepeatedField1<int64_t>* get_NeedExp() {
		return ((RepeatedField1<int64_t>* (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B2E0))(this);
	}
	template <typename R = Il2CppString*> R get_SoldOutName() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B2E8))(this);
	}
	template <typename R = void> R set_SoldOutName(Il2CppString* value) {
		return ((R (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B2F0))(this, value);
	}
	template <typename R = ProtoModels::ArenaStoreSavingsGroup*> R get_SavingsGroup() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B370))(this);
	}
	template <typename R = void> R set_SavingsGroup(ProtoModels::ArenaStoreSavingsGroup* value) {
		return ((R (*)(ArenaStoreProduct*, ProtoModels::ArenaStoreSavingsGroup*))(Il2CppBase() + 0x271B378))(this, value);
	}
	template <typename R = int64_t> R get_StartTime() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B380))(this);
	}
	template <typename R = void> R set_StartTime(int64_t value) {
		return ((R (*)(ArenaStoreProduct*, int64_t))(Il2CppBase() + 0x271B388))(this, value);
	}
	template <typename R = int64_t> R get_EndTime() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B390))(this);
	}
	template <typename R = void> R set_EndTime(int64_t value) {
		return ((R (*)(ArenaStoreProduct*, int64_t))(Il2CppBase() + 0x271B398))(this, value);
	}
	template <typename R = ProtoModels::ArenaStoreBuyAmount*> R get_BuyAmount() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B3A0))(this);
	}
	template <typename R = void> R set_BuyAmount(ProtoModels::ArenaStoreBuyAmount* value) {
		return ((R (*)(ArenaStoreProduct*, ProtoModels::ArenaStoreBuyAmount*))(Il2CppBase() + 0x271B3A8))(this, value);
	}
	 RepeatedField1<Il2CppString*>* get_PurchaseMore() {
		return ((RepeatedField1<Il2CppString*>* (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B3B0))(this);
	}
	 RepeatedField1<int32_t>* get_Rarities() {
		return ((RepeatedField1<int32_t>* (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B3B8))(this);
	}
	template <typename R = ProtoModels::HackProductType> R get_HackedType() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B3C0))(this);
	}
	template <typename R = void> R set_HackedType(ProtoModels::HackProductType value) {
		return ((R (*)(ArenaStoreProduct*, ProtoModels::HackProductType))(Il2CppBase() + 0x271B3C8))(this, value);
	}
	template <typename R = ProtoModels::BattlePassLevelType*> R get_BattlePassLevel() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B3D0))(this);
	}
	template <typename R = void> R set_BattlePassLevel(ProtoModels::BattlePassLevelType* value) {
		return ((R (*)(ArenaStoreProduct*, ProtoModels::BattlePassLevelType*))(Il2CppBase() + 0x271B3D8))(this, value);
	}
	template <typename R = Il2CppString*> R get_ShowcasePriority() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B3E0))(this);
	}
	template <typename R = void> R set_ShowcasePriority(Il2CppString* value) {
		return ((R (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B3E8))(this, value);
	}
	template <typename R = Il2CppString*> R get_SavingsPackType() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B468))(this);
	}
	template <typename R = void> R set_SavingsPackType(Il2CppString* value) {
		return ((R (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B470))(this, value);
	}
	template <typename R = int32_t> R get_Profit() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B4F0))(this);
	}
	template <typename R = void> R set_Profit(int32_t value) {
		return ((R (*)(ArenaStoreProduct*, int32_t))(Il2CppBase() + 0x271B4F8))(this, value);
	}
	template <typename R = Il2CppString*> R get_StoreType() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B500))(this);
	}
	template <typename R = void> R set_StoreType(Il2CppString* value) {
		return ((R (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B508))(this, value);
	}
	template <typename R = ProtoModels::ArenaProductBanner*> R get_Banner() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B588))(this);
	}
	template <typename R = void> R set_Banner(ProtoModels::ArenaProductBanner* value) {
		return ((R (*)(ArenaStoreProduct*, ProtoModels::ArenaProductBanner*))(Il2CppBase() + 0x271B590))(this, value);
	}
	template <typename R = int32_t> R get_UnlockSeassonNumber() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B598))(this);
	}
	template <typename R = void> R set_UnlockSeassonNumber(int32_t value) {
		return ((R (*)(ArenaStoreProduct*, int32_t))(Il2CppBase() + 0x271B5A0))(this, value);
	}
	 RepeatedField1<ProtoModels::ArenaStoreResource*>* get_SlotsRewards() {
		return ((RepeatedField1<ProtoModels::ArenaStoreResource*>* (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B5A8))(this);
	}
	 RepeatedField1<ProtoModels::ArenaStoreProductDiscount*>* get_Discounts() {
		return ((RepeatedField1<ProtoModels::ArenaStoreProductDiscount*>* (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B5B0))(this);
	}
	template <typename R = int32_t> R get_ConsumeType() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B5B8))(this);
	}
	template <typename R = void> R set_ConsumeType(int32_t value) {
		return ((R (*)(ArenaStoreProduct*, int32_t))(Il2CppBase() + 0x271B5C0))(this, value);
	}
	template <typename R = Il2CppString*> R get_PackDescription() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B5C8))(this);
	}
	template <typename R = void> R set_PackDescription(Il2CppString* value) {
		return ((R (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B5D0))(this, value);
	}
	template <typename R = bool> R get_IsResettable() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B650))(this);
	}
	template <typename R = void> R set_IsResettable(bool value) {
		return ((R (*)(ArenaStoreProduct*, bool))(Il2CppBase() + 0x271B658))(this, value);
	}
	template <typename R = ProtoModels::CurrencyTypeEnum> R get_BonusCurrency() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B664))(this);
	}
	template <typename R = void> R set_BonusCurrency(ProtoModels::CurrencyTypeEnum value) {
		return ((R (*)(ArenaStoreProduct*, ProtoModels::CurrencyTypeEnum))(Il2CppBase() + 0x271B66C))(this, value);
	}
	template <typename R = int32_t> R get_BonusCurrencyCount() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B674))(this);
	}
	template <typename R = void> R set_BonusCurrencyCount(int32_t value) {
		return ((R (*)(ArenaStoreProduct*, int32_t))(Il2CppBase() + 0x271B67C))(this, value);
	}
	template <typename R = bool> R get_CommingSoon() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B684))(this);
	}
	template <typename R = void> R set_CommingSoon(bool value) {
		return ((R (*)(ArenaStoreProduct*, bool))(Il2CppBase() + 0x271B68C))(this, value);
	}
	template <typename R = Il2CppString*> R get_CommingSoonName() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B698))(this);
	}
	template <typename R = void> R set_CommingSoonName(Il2CppString* value) {
		return ((R (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B6A0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaStoreProduct*, Il2CppObject*))(Il2CppBase() + 0x271B720))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaStoreProduct* other) {
		return ((R (*)(ArenaStoreProduct*, ProtoModels::ArenaStoreProduct*))(Il2CppBase() + 0x271B790))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271BB90))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271C004))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaStoreProduct*, uintptr_t))(Il2CppBase() + 0x271C068))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271C87C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaStoreProduct* other) {
		return ((R (*)(ArenaStoreProduct*, ProtoModels::ArenaStoreProduct*))(Il2CppBase() + 0x271D1C0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaStoreProduct*, uintptr_t))(Il2CppBase() + 0x271D834))(this, input);
	}

};

}
