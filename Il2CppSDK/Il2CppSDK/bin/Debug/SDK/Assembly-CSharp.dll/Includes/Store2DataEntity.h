#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Store2DataEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Store2DataEntity"));
	}

	template <typename R = GachaComponent*> static R& gachaComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = OldAmountComponent*> static R& oldAmountComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = ResettableComponent*> static R& resettableComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140A2C0))(this);
	}
	template <typename R = AddBonusCurrencyComponent*> R get_addBonusCurrency() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140A648))(this);
	}
	template <typename R = bool> R get_hasAddBonusCurrency() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140A6D0))(this);
	}
	template <typename R = void> R AddAddBonusCurrency(CurrencyType* newCurrency, int32_t newCount) {
		return ((R (*)(Store2DataEntity*, CurrencyType*, int32_t))(Il2CppBase() + 0x140A6DC))(this, newCurrency, newCount);
	}
	template <typename R = void> R ReplaceAddBonusCurrency(CurrencyType* newCurrency, int32_t newCount) {
		return ((R (*)(Store2DataEntity*, CurrencyType*, int32_t))(Il2CppBase() + 0x140A7E4))(this, newCurrency, newCount);
	}
	template <typename R = void> R RemoveAddBonusCurrency() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140A8EC))(this);
	}
	template <typename R = AddVipPointsComponent*> R get_addVipPoints() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140A8F8))(this);
	}
	template <typename R = bool> R get_hasAddVipPoints() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140A980))(this);
	}
	template <typename R = void> R AddAddVipPoints(int32_t newValue) {
		return ((R (*)(Store2DataEntity*, int32_t))(Il2CppBase() + 0x140A98C))(this, newValue);
	}
	template <typename R = void> R ReplaceAddVipPoints(int32_t newValue) {
		return ((R (*)(Store2DataEntity*, int32_t))(Il2CppBase() + 0x140AA90))(this, newValue);
	}
	template <typename R = void> R RemoveAddVipPoints() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140AB94))(this);
	}
	template <typename R = AdditionalChancesComponent*> R get_additionalChances() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140ABA0))(this);
	}
	template <typename R = bool> R get_hasAdditionalChances() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140AC28))(this);
	}
	template <typename R = void> R AddAdditionalChances(Il2CppArray<int32_t>* newValues) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<int32_t>*))(Il2CppBase() + 0x140AC34))(this, newValues);
	}
	template <typename R = void> R ReplaceAdditionalChances(Il2CppArray<int32_t>* newValues) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<int32_t>*))(Il2CppBase() + 0x140AD48))(this, newValues);
	}
	template <typename R = void> R RemoveAdditionalChances() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140AE5C))(this);
	}
	template <typename R = BannerBackgroundImageComponent*> R get_bannerBackgroundImage() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140AE68))(this);
	}
	template <typename R = bool> R get_hasBannerBackgroundImage() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140AEF0))(this);
	}
	template <typename R = void> R AddBannerBackgroundImage(Il2CppString* newName) {
		return ((R (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140AEFC))(this, newName);
	}
	template <typename R = void> R ReplaceBannerBackgroundImage(Il2CppString* newName) {
		return ((R (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140B010))(this, newName);
	}
	template <typename R = void> R RemoveBannerBackgroundImage() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140B124))(this);
	}
	template <typename R = BannerNamesComponent*> R get_bannerNames() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140B130))(this);
	}
	template <typename R = bool> R get_hasBannerNames() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140B19C))(this);
	}
	template <typename R = void> R AddBannerNames(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x140B1A8))(this, newValues);
	}
	template <typename R = void> R ReplaceBannerNames(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x140B2A0))(this, newValues);
	}
	template <typename R = void> R RemoveBannerNames() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140B398))(this);
	}
	template <typename R = BannerPrefabComponent*> R get_bannerPrefab() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140B3A4))(this);
	}
	template <typename R = bool> R get_hasBannerPrefab() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140B42C))(this);
	}
	template <typename R = void> R AddBannerPrefab(Il2CppString* newName) {
		return ((R (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140B438))(this, newName);
	}
	template <typename R = void> R ReplaceBannerPrefab(Il2CppString* newName) {
		return ((R (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140B54C))(this, newName);
	}
	template <typename R = void> R RemoveBannerPrefab() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140B660))(this);
	}
	template <typename R = BattlePassAddLevelsComponent*> R get_battlePassAddLevels() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140B66C))(this);
	}
	template <typename R = bool> R get_hasBattlePassAddLevels() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140B6F4))(this);
	}
	template <typename R = void> R AddBattlePassAddLevels(CurrencyType* newCurrencyType, int32_t newAddLevels) {
		return ((R (*)(Store2DataEntity*, CurrencyType*, int32_t))(Il2CppBase() + 0x140B700))(this, newCurrencyType, newAddLevels);
	}
	template <typename R = void> R ReplaceBattlePassAddLevels(CurrencyType* newCurrencyType, int32_t newAddLevels) {
		return ((R (*)(Store2DataEntity*, CurrencyType*, int32_t))(Il2CppBase() + 0x140B808))(this, newCurrencyType, newAddLevels);
	}
	template <typename R = void> R RemoveBattlePassAddLevels() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140B910))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140A52C))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140A520))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140B91C))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140BA30))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140BB44))(this);
	}
	template <typename R = BuyAmountComponent*> R get_buyAmount() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140BB50))(this);
	}
	template <typename R = bool> R get_hasBuyAmount() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140BBD8))(this);
	}
	template <typename R = void> R AddBuyAmount(int32_t newCount, Il2CppString* newParent) {
		return ((R (*)(Store2DataEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x140BBE4))(this, newCount, newParent);
	}
	template <typename R = void> R ReplaceBuyAmount(int32_t newCount, Il2CppString* newParent) {
		return ((R (*)(Store2DataEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x140BD00))(this, newCount, newParent);
	}
	template <typename R = void> R RemoveBuyAmount() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140BE1C))(this);
	}
	template <typename R = CategoryComponent*> R get_category() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140BE28))(this);
	}
	template <typename R = bool> R get_hasCategory() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140BE94))(this);
	}
	template <typename R = void> R AddCategory(Il2CppArray<Category*>* newList) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<Category*>*))(Il2CppBase() + 0x140BEA0))(this, newList);
	}
	template <typename R = void> R ReplaceCategory(Il2CppArray<Category*>* newList) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<Category*>*))(Il2CppBase() + 0x140BF98))(this, newList);
	}
	template <typename R = void> R RemoveCategory() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140C090))(this);
	}
	template <typename R = CoinsPackComponent*> R get_coinsPack() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140C09C))(this);
	}
	template <typename R = bool> R get_hasCoinsPack() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140C108))(this);
	}
	template <typename R = void> R AddCoinsPack(int32_t newCount) {
		return ((R (*)(Store2DataEntity*, int32_t))(Il2CppBase() + 0x140C114))(this, newCount);
	}
	template <typename R = void> R ReplaceCoinsPack(int32_t newCount) {
		return ((R (*)(Store2DataEntity*, int32_t))(Il2CppBase() + 0x140C1FC))(this, newCount);
	}
	template <typename R = void> R RemoveCoinsPack() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140C2E4))(this);
	}
	template <typename R = CommingSoonComponent*> R get_commingSoon() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140C2F0))(this);
	}
	template <typename R = bool> R get_hasCommingSoon() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140C378))(this);
	}
	template <typename R = void> R AddCommingSoon(bool newValue, Il2CppString* newName) {
		return ((R (*)(Store2DataEntity*, bool, Il2CppString*))(Il2CppBase() + 0x140C384))(this, newValue, newName);
	}
	template <typename R = void> R ReplaceCommingSoon(bool newValue, Il2CppString* newName) {
		return ((R (*)(Store2DataEntity*, bool, Il2CppString*))(Il2CppBase() + 0x140C4A4))(this, newValue, newName);
	}
	template <typename R = void> R RemoveCommingSoon() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140C5C4))(this);
	}
	template <typename R = ConsumeTypeComponent*> R get_consumeType() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140C5D0))(this);
	}
	template <typename R = bool> R get_hasConsumeType() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140C658))(this);
	}
	template <typename R = void> R AddConsumeType(ConsumeType* newType) {
		return ((R (*)(Store2DataEntity*, ConsumeType*))(Il2CppBase() + 0x140C664))(this, newType);
	}
	template <typename R = void> R ReplaceConsumeType(ConsumeType* newType) {
		return ((R (*)(Store2DataEntity*, ConsumeType*))(Il2CppBase() + 0x140C768))(this, newType);
	}
	template <typename R = void> R RemoveConsumeType() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140C86C))(this);
	}
	template <typename R = CountComponent*> R get_count() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140C878))(this);
	}
	template <typename R = bool> R get_hasCount() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140C900))(this);
	}
	template <typename R = void> R AddCount(int32_t newValue) {
		return ((R (*)(Store2DataEntity*, int32_t))(Il2CppBase() + 0x140C90C))(this, newValue);
	}
	template <typename R = void> R ReplaceCount(int32_t newValue) {
		return ((R (*)(Store2DataEntity*, int32_t))(Il2CppBase() + 0x140CA10))(this, newValue);
	}
	template <typename R = void> R RemoveCount() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140CB14))(this);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140CB20))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140CBA8))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(Store2DataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x140CBB4))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(Store2DataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x140CCDC))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140CE04))(this);
	}
	template <typename R = DiscountComponent*> R get_discount() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140CE10))(this);
	}
	template <typename R = bool> R get_hasDiscount() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140CE7C))(this);
	}
	template <typename R = void> R AddDiscount(Il2CppArray<Discount*>* newList) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<Discount*>*))(Il2CppBase() + 0x140CE88))(this, newList);
	}
	template <typename R = void> R ReplaceDiscount(Il2CppArray<Discount*>* newList) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<Discount*>*))(Il2CppBase() + 0x140CF80))(this, newList);
	}
	template <typename R = void> R RemoveDiscount() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140D078))(this);
	}
	template <typename R = ExperienceBoosterDurationComponent*> R get_experienceBoosterDuration() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140D084))(this);
	}
	template <typename R = bool> R get_hasExperienceBoosterDuration() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140D10C))(this);
	}
	template <typename R = void> R AddExperienceBoosterDuration(float newValue) {
		return ((R (*)(Store2DataEntity*, float))(Il2CppBase() + 0x140D118))(this, newValue);
	}
	template <typename R = void> R ReplaceExperienceBoosterDuration(float newValue) {
		return ((R (*)(Store2DataEntity*, float))(Il2CppBase() + 0x140D21C))(this, newValue);
	}
	template <typename R = void> R RemoveExperienceBoosterDuration() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140D320))(this);
	}
	template <typename R = ExpireTimeComponent*> R get_expireTime() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140D32C))(this);
	}
	template <typename R = bool> R get_hasExpireTime() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140D3B4))(this);
	}
	template <typename R = void> R AddExpireTime(int64_t newValue) {
		return ((R (*)(Store2DataEntity*, int64_t))(Il2CppBase() + 0x140D3C0))(this, newValue);
	}
	template <typename R = void> R ReplaceExpireTime(int64_t newValue) {
		return ((R (*)(Store2DataEntity*, int64_t))(Il2CppBase() + 0x140D4C4))(this, newValue);
	}
	template <typename R = void> R RemoveExpireTime() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140D5C8))(this);
	}
	template <typename R = bool> R get_isGacha() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140D5D4))(this);
	}
	template <typename R = void> R set_isGacha(bool value) {
		return ((R (*)(Store2DataEntity*, bool))(Il2CppBase() + 0x140D5E0))(this, value);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140D6F8))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140D780))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(Store2DataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x140D78C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(Store2DataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x140D8E4))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140DA3C))(this);
	}
	template <typename R = LinkToStoreProductComponent*> R get_linkToStoreProduct() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140DA48))(this);
	}
	template <typename R = bool> R get_hasLinkToStoreProduct() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140DAD0))(this);
	}
	template <typename R = void> R AddLinkToStoreProduct(Il2CppString* newName) {
		return ((R (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140DADC))(this, newName);
	}
	template <typename R = void> R ReplaceLinkToStoreProduct(Il2CppString* newName) {
		return ((R (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140DBF0))(this, newName);
	}
	template <typename R = void> R RemoveLinkToStoreProduct() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140DD04))(this);
	}
	template <typename R = NeedExpComponent*> R get_needExp() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140DD10))(this);
	}
	template <typename R = bool> R get_hasNeedExp() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140DD7C))(this);
	}
	template <typename R = void> R AddNeedExp(Il2CppArray<uint32_t>* newValues) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<uint32_t>*))(Il2CppBase() + 0x140DD88))(this, newValues);
	}
	template <typename R = void> R ReplaceNeedExp(Il2CppArray<uint32_t>* newValues) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<uint32_t>*))(Il2CppBase() + 0x140DE80))(this, newValues);
	}
	template <typename R = void> R RemoveNeedExp() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140DF78))(this);
	}
	template <typename R = bool> R get_isOldAmount() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140DF84))(this);
	}
	template <typename R = void> R set_isOldAmount(bool value) {
		return ((R (*)(Store2DataEntity*, bool))(Il2CppBase() + 0x140DF90))(this, value);
	}
	template <typename R = PriceComponent*> R get_price() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140E0A8))(this);
	}
	template <typename R = bool> R get_hasPrice() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140E114))(this);
	}
	template <typename R = void> R AddPrice(Il2CppArray<Price*>* newList) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<Price*>*))(Il2CppBase() + 0x140E120))(this, newList);
	}
	template <typename R = void> R ReplacePrice(Il2CppArray<Price*>* newList) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<Price*>*))(Il2CppBase() + 0x140E218))(this, newList);
	}
	template <typename R = void> R RemovePrice() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140E310))(this);
	}
	template <typename R = ProfitComponent*> R get_profit() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140E31C))(this);
	}
	template <typename R = bool> R get_hasProfit() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140E3A4))(this);
	}
	template <typename R = void> R AddProfit(int32_t newValue) {
		return ((R (*)(Store2DataEntity*, int32_t))(Il2CppBase() + 0x140E3B0))(this, newValue);
	}
	template <typename R = void> R ReplaceProfit(int32_t newValue) {
		return ((R (*)(Store2DataEntity*, int32_t))(Il2CppBase() + 0x140E4B4))(this, newValue);
	}
	template <typename R = void> R RemoveProfit() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140E5B8))(this);
	}
	template <typename R = PurchaseMoreComponent*> R get_purchaseMore() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140E5C4))(this);
	}
	template <typename R = bool> R get_hasPurchaseMore() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140E630))(this);
	}
	template <typename R = void> R AddPurchaseMore(Il2CppString* newDescription, Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(Store2DataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x140E63C))(this, newDescription, newValues);
	}
	template <typename R = void> R ReplacePurchaseMore(Il2CppString* newDescription, Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(Store2DataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x140E748))(this, newDescription, newValues);
	}
	template <typename R = void> R RemovePurchaseMore() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140E854))(this);
	}
	template <typename R = bool> R get_isResettable() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140E860))(this);
	}
	template <typename R = void> R set_isResettable(bool value) {
		return ((R (*)(Store2DataEntity*, bool))(Il2CppBase() + 0x140E86C))(this, value);
	}
	template <typename R = ResourcesComponent*> R get_resources() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140E984))(this);
	}
	template <typename R = bool> R get_hasResources() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140EA0C))(this);
	}
	template <typename R = void> R AddResources(Il2CppArray<Resource*>* newList) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x140EA18))(this, newList);
	}
	template <typename R = void> R ReplaceResources(Il2CppArray<Resource*>* newList) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x140EB2C))(this, newList);
	}
	template <typename R = void> R RemoveResources() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140EC40))(this);
	}
	template <typename R = SavingsPackTypeComponent*> R get_savingsPackType() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140EC4C))(this);
	}
	template <typename R = bool> R get_hasSavingsPackType() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140ECD4))(this);
	}
	template <typename R = void> R AddSavingsPackType(SavingsPackType* newType) {
		return ((R (*)(Store2DataEntity*, SavingsPackType*))(Il2CppBase() + 0x140ECE0))(this, newType);
	}
	template <typename R = void> R ReplaceSavingsPackType(SavingsPackType* newType) {
		return ((R (*)(Store2DataEntity*, SavingsPackType*))(Il2CppBase() + 0x140EDE4))(this, newType);
	}
	template <typename R = void> R RemoveSavingsPackType() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140EEE8))(this);
	}
	template <typename R = ShowcasePriorityComponent*> R get_showcasePriority() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140EEF4))(this);
	}
	template <typename R = bool> R get_hasShowcasePriority() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140EF7C))(this);
	}
	template <typename R = void> R AddShowcasePriority(Il2CppString* newValue) {
		return ((R (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140EF88))(this, newValue);
	}
	template <typename R = void> R ReplaceShowcasePriority(Il2CppString* newValue) {
		return ((R (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140F09C))(this, newValue);
	}
	template <typename R = void> R RemoveShowcasePriority() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140F1B0))(this);
	}
	template <typename R = SlotsRewardsComponent*> R get_slotsRewards() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140F1BC))(this);
	}
	template <typename R = bool> R get_hasSlotsRewards() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140F244))(this);
	}
	template <typename R = void> R AddSlotsRewards(Il2CppArray<Resource*>* newList) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x140F250))(this, newList);
	}
	template <typename R = void> R ReplaceSlotsRewards(Il2CppArray<Resource*>* newList) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x140F364))(this, newList);
	}
	template <typename R = void> R RemoveSlotsRewards() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140F478))(this);
	}
	template <typename R = SoldOutComponent*> R get_soldOut() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140F484))(this);
	}
	template <typename R = bool> R get_hasSoldOut() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140F50C))(this);
	}
	template <typename R = void> R AddSoldOut(Il2CppString* newName) {
		return ((R (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140F518))(this, newName);
	}
	template <typename R = void> R ReplaceSoldOut(Il2CppString* newName) {
		return ((R (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140F62C))(this, newName);
	}
	template <typename R = void> R RemoveSoldOut() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140F740))(this);
	}
	template <typename R = StoreIdComponent*> R get_storeId() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140A5C0))(this);
	}
	template <typename R = bool> R get_hasStoreId() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140A5B4))(this);
	}
	template <typename R = void> R AddStoreId(int64_t newId) {
		return ((R (*)(Store2DataEntity*, int64_t))(Il2CppBase() + 0x1409FC8))(this, newId);
	}
	template <typename R = void> R ReplaceStoreId(int64_t newId) {
		return ((R (*)(Store2DataEntity*, int64_t))(Il2CppBase() + 0x140F74C))(this, newId);
	}
	template <typename R = void> R RemoveStoreId() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140F850))(this);
	}
	template <typename R = StoreTypeComponent*> R get_storeType() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140F85C))(this);
	}
	template <typename R = bool> R get_hasStoreType() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140F8E4))(this);
	}
	template <typename R = void> R AddStoreType(StoreType* newType) {
		return ((R (*)(Store2DataEntity*, StoreType*))(Il2CppBase() + 0x140F8F0))(this, newType);
	}
	template <typename R = void> R ReplaceStoreType(StoreType* newType) {
		return ((R (*)(Store2DataEntity*, StoreType*))(Il2CppBase() + 0x140F9F4))(this, newType);
	}
	template <typename R = void> R RemoveStoreType() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140FAF8))(this);
	}
	template <typename R = TagsComponent*> R get_tags() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140FB04))(this);
	}
	template <typename R = bool> R get_hasTags() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140FB8C))(this);
	}
	template <typename R = void> R AddTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x140FB98))(this, newValues);
	}
	template <typename R = void> R ReplaceTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(Store2DataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x140FCAC))(this, newValues);
	}
	template <typename R = void> R RemoveTags() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140FDC0))(this);
	}
	template <typename R = UnlockPremiumComponent*> R get_unlockPremium() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140FDCC))(this);
	}
	template <typename R = bool> R get_hasUnlockPremium() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x140FE54))(this);
	}
	template <typename R = void> R AddUnlockPremium(Il2CppString* newName, int32_t newSeason, int32_t newCycle) {
		return ((R (*)(Store2DataEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x140FE60))(this, newName, newSeason, newCycle);
	}
	template <typename R = void> R ReplaceUnlockPremium(Il2CppString* newName, int32_t newSeason, int32_t newCycle) {
		return ((R (*)(Store2DataEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x140FF88))(this, newName, newSeason, newCycle);
	}
	template <typename R = void> R RemoveUnlockPremium() {
		return ((R (*)(Store2DataEntity*))(Il2CppBase() + 0x14100B0))(this);
	}

};

