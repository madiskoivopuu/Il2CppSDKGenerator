#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreProduct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreProduct"));
	}

	template <typename T = MessageParser1ArenaStoreProduct*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& DescriptionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaStoreProductDescription*> T& description_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& IconFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& icon_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ExperienceBoosterDurationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& experienceBoosterDuration_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& CurrencyPackFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaStoreCurrencyPack*>*> static T& _repeated_currencyPack_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1ArenaStoreCurrencyPack*>*> T& currencyPack_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& CountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& count_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& PricesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaStoreProductPrice*>*> static T& _repeated_prices_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = RepeatedField1ArenaStoreProductPrice*>*> T& prices_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& TagsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Il2CppString*>*> static T& _repeated_tags_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T& tags_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& UnlockPremiumNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& unlockPremiumName_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& CategoriesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaStoreCategory*>*> static T& _repeated_categories_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = RepeatedField1ArenaStoreCategory*>*> T& categories_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& ResourcesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaStoreResource*>*> static T& _repeated_resources_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = RepeatedField1ArenaStoreResource*>*> T& resources_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& NeedExpFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int64_t>*> static T& _repeated_needExp_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = RepeatedField1int64_t>*> T& needExp_() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& SoldOutNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& soldOutName_() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> static T& SavingsGroupFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaStoreSavingsGroup*> T& savingsGroup_() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> static T& StartTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& startTime_() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> static T& EndTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endTime_() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> static T& BuyAmountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaStoreBuyAmount*> T& buyAmount_() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> static T& PurchaseMoreFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Il2CppString*>*> static T& _repeated_purchaseMore_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T& purchaseMore_() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> static T& RaritiesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int32_t>*> static T& _repeated_rarities_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = RepeatedField1int32_t>*> T& rarities_() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> static T& HackedTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = HackProductType*> T& hackedType_() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> static T& BattlePassLevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BattlePassLevelType*> T& battlePassLevel_() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> static T& ShowcasePriorityFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& showcasePriority_() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> static T& SavingsPackTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& savingsPackType_() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> static T& ProfitFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& profit_() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> static T& StoreTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& storeType_() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> static T& BannerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaProductBanner*> T& banner_() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> static T& UnlockSeassonNumberFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& unlockSeassonNumber_() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> static T& SlotsRewardsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaStoreResource*>*> static T& _repeated_slotsRewards_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = RepeatedField1ArenaStoreResource*>*> T& slotsRewards_() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> static T& DiscountsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaStoreProductDiscount*>*> static T& _repeated_discounts_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = RepeatedField1ArenaStoreProductDiscount*>*> T& discounts_() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> static T& ConsumeTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& consumeType_() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> static T& PackDescriptionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& packDescription_() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> static T& IsResettableFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isResettable_() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> static T& BonusCurrencyFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CurrencyTypeEnum*> T& bonusCurrency_() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = int32_t> static T& BonusCurrencyCountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& bonusCurrencyCount_() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> static T& CommingSoonFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& commingSoon_() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> static T& CommingSoonNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& commingSoonName_() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = MessageParser1ArenaStoreProduct*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x271A650))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x271A6B4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271A7D4))(this);
	}
	template <typename T = ArenaStoreProduct*> T Clone() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B084))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B0E0))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(ArenaStoreProduct*, int32_t))(Il2CppBase() + 0x271B0E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B0F0))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B0F8))(this, value);
	}
	template <typename T = ArenaStoreProductDescription*> T get_Description() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B178))(this);
	}
	template <typename T = void> T set_Description(ArenaStoreProductDescription* value) {
		return ((T (*)(ArenaStoreProduct*, ArenaStoreProductDescription*))(Il2CppBase() + 0x271B180))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B188))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B190))(this, value);
	}
	template <typename T = int32_t> T get_ExperienceBoosterDuration() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B210))(this);
	}
	template <typename T = void> T set_ExperienceBoosterDuration(int32_t value) {
		return ((T (*)(ArenaStoreProduct*, int32_t))(Il2CppBase() + 0x271B218))(this, value);
	}
	template <typename T = RepeatedField1ArenaStoreCurrencyPack*>*> T get_CurrencyPack() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B220))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B228))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(ArenaStoreProduct*, int32_t))(Il2CppBase() + 0x271B230))(this, value);
	}
	template <typename T = RepeatedField1ArenaStoreProductPrice*>*> T get_Prices() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B238))(this);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T get_Tags() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B240))(this);
	}
	template <typename T = Il2CppString*> T get_UnlockPremiumName() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B248))(this);
	}
	template <typename T = void> T set_UnlockPremiumName(Il2CppString* value) {
		return ((T (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B250))(this, value);
	}
	template <typename T = RepeatedField1ArenaStoreCategory*>*> T get_Categories() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B2D0))(this);
	}
	template <typename T = RepeatedField1ArenaStoreResource*>*> T get_Resources() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B2D8))(this);
	}
	template <typename T = RepeatedField1int64_t>*> T get_NeedExp() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B2E0))(this);
	}
	template <typename T = Il2CppString*> T get_SoldOutName() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B2E8))(this);
	}
	template <typename T = void> T set_SoldOutName(Il2CppString* value) {
		return ((T (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B2F0))(this, value);
	}
	template <typename T = ArenaStoreSavingsGroup*> T get_SavingsGroup() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B370))(this);
	}
	template <typename T = void> T set_SavingsGroup(ArenaStoreSavingsGroup* value) {
		return ((T (*)(ArenaStoreProduct*, ArenaStoreSavingsGroup*))(Il2CppBase() + 0x271B378))(this, value);
	}
	template <typename T = int64_t> T get_StartTime() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B380))(this);
	}
	template <typename T = void> T set_StartTime(int64_t value) {
		return ((T (*)(ArenaStoreProduct*, int64_t))(Il2CppBase() + 0x271B388))(this, value);
	}
	template <typename T = int64_t> T get_EndTime() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B390))(this);
	}
	template <typename T = void> T set_EndTime(int64_t value) {
		return ((T (*)(ArenaStoreProduct*, int64_t))(Il2CppBase() + 0x271B398))(this, value);
	}
	template <typename T = ArenaStoreBuyAmount*> T get_BuyAmount() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B3A0))(this);
	}
	template <typename T = void> T set_BuyAmount(ArenaStoreBuyAmount* value) {
		return ((T (*)(ArenaStoreProduct*, ArenaStoreBuyAmount*))(Il2CppBase() + 0x271B3A8))(this, value);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T get_PurchaseMore() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B3B0))(this);
	}
	template <typename T = RepeatedField1int32_t>*> T get_Rarities() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B3B8))(this);
	}
	template <typename T = HackProductType*> T get_HackedType() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B3C0))(this);
	}
	template <typename T = void> T set_HackedType(HackProductType* value) {
		return ((T (*)(ArenaStoreProduct*, HackProductType*))(Il2CppBase() + 0x271B3C8))(this, value);
	}
	template <typename T = BattlePassLevelType*> T get_BattlePassLevel() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B3D0))(this);
	}
	template <typename T = void> T set_BattlePassLevel(BattlePassLevelType* value) {
		return ((T (*)(ArenaStoreProduct*, BattlePassLevelType*))(Il2CppBase() + 0x271B3D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_ShowcasePriority() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B3E0))(this);
	}
	template <typename T = void> T set_ShowcasePriority(Il2CppString* value) {
		return ((T (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B3E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_SavingsPackType() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B468))(this);
	}
	template <typename T = void> T set_SavingsPackType(Il2CppString* value) {
		return ((T (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B470))(this, value);
	}
	template <typename T = int32_t> T get_Profit() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B4F0))(this);
	}
	template <typename T = void> T set_Profit(int32_t value) {
		return ((T (*)(ArenaStoreProduct*, int32_t))(Il2CppBase() + 0x271B4F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_StoreType() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B500))(this);
	}
	template <typename T = void> T set_StoreType(Il2CppString* value) {
		return ((T (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B508))(this, value);
	}
	template <typename T = ArenaProductBanner*> T get_Banner() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B588))(this);
	}
	template <typename T = void> T set_Banner(ArenaProductBanner* value) {
		return ((T (*)(ArenaStoreProduct*, ArenaProductBanner*))(Il2CppBase() + 0x271B590))(this, value);
	}
	template <typename T = int32_t> T get_UnlockSeassonNumber() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B598))(this);
	}
	template <typename T = void> T set_UnlockSeassonNumber(int32_t value) {
		return ((T (*)(ArenaStoreProduct*, int32_t))(Il2CppBase() + 0x271B5A0))(this, value);
	}
	template <typename T = RepeatedField1ArenaStoreResource*>*> T get_SlotsRewards() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B5A8))(this);
	}
	template <typename T = RepeatedField1ArenaStoreProductDiscount*>*> T get_Discounts() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B5B0))(this);
	}
	template <typename T = int32_t> T get_ConsumeType() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B5B8))(this);
	}
	template <typename T = void> T set_ConsumeType(int32_t value) {
		return ((T (*)(ArenaStoreProduct*, int32_t))(Il2CppBase() + 0x271B5C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_PackDescription() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B5C8))(this);
	}
	template <typename T = void> T set_PackDescription(Il2CppString* value) {
		return ((T (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B5D0))(this, value);
	}
	template <typename T = bool> T get_IsResettable() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B650))(this);
	}
	template <typename T = void> T set_IsResettable(bool value) {
		return ((T (*)(ArenaStoreProduct*, bool))(Il2CppBase() + 0x271B658))(this, value);
	}
	template <typename T = CurrencyTypeEnum*> T get_BonusCurrency() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B664))(this);
	}
	template <typename T = void> T set_BonusCurrency(CurrencyTypeEnum* value) {
		return ((T (*)(ArenaStoreProduct*, CurrencyTypeEnum*))(Il2CppBase() + 0x271B66C))(this, value);
	}
	template <typename T = int32_t> T get_BonusCurrencyCount() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B674))(this);
	}
	template <typename T = void> T set_BonusCurrencyCount(int32_t value) {
		return ((T (*)(ArenaStoreProduct*, int32_t))(Il2CppBase() + 0x271B67C))(this, value);
	}
	template <typename T = bool> T get_CommingSoon() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B684))(this);
	}
	template <typename T = void> T set_CommingSoon(bool value) {
		return ((T (*)(ArenaStoreProduct*, bool))(Il2CppBase() + 0x271B68C))(this, value);
	}
	template <typename T = Il2CppString*> T get_CommingSoonName() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271B698))(this);
	}
	template <typename T = void> T set_CommingSoonName(Il2CppString* value) {
		return ((T (*)(ArenaStoreProduct*, Il2CppString*))(Il2CppBase() + 0x271B6A0))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaStoreProduct*, Il2CppObject*))(Il2CppBase() + 0x271B720))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaStoreProduct* other) {
		return ((T (*)(ArenaStoreProduct*, ArenaStoreProduct*))(Il2CppBase() + 0x271B790))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271BB90))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271C004))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaStoreProduct*, uintptr_t))(Il2CppBase() + 0x271C068))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaStoreProduct*))(Il2CppBase() + 0x271C87C))(this);
	}
	template <typename T = void> T MergeFrom(ArenaStoreProduct* other) {
		return ((T (*)(ArenaStoreProduct*, ArenaStoreProduct*))(Il2CppBase() + 0x271D1C0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaStoreProduct*, uintptr_t))(Il2CppBase() + 0x271D834))(this, input);
	}

};

}
