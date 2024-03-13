#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Store2DataEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Store2DataEntity"));
	}

	template <typename T = GachaComponent*> static T& gachaComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = OldAmountComponent*> static T& oldAmountComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = ResettableComponent*> static T& resettableComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140A2C0))(this);
	}
	template <typename T = AddBonusCurrencyComponent*> T get_addBonusCurrency() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140A648))(this);
	}
	template <typename T = bool> T get_hasAddBonusCurrency() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140A6D0))(this);
	}
	template <typename T = void> T AddAddBonusCurrency(CurrencyType* newCurrency, int32_t newCount) {
		return ((T (*)(Store2DataEntity*, CurrencyType*, int32_t))(Il2CppBase() + 0x140A6DC))(this, newCurrency, newCount);
	}
	template <typename T = void> T ReplaceAddBonusCurrency(CurrencyType* newCurrency, int32_t newCount) {
		return ((T (*)(Store2DataEntity*, CurrencyType*, int32_t))(Il2CppBase() + 0x140A7E4))(this, newCurrency, newCount);
	}
	template <typename T = void> T RemoveAddBonusCurrency() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140A8EC))(this);
	}
	template <typename T = AddVipPointsComponent*> T get_addVipPoints() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140A8F8))(this);
	}
	template <typename T = bool> T get_hasAddVipPoints() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140A980))(this);
	}
	template <typename T = void> T AddAddVipPoints(int32_t newValue) {
		return ((T (*)(Store2DataEntity*, int32_t))(Il2CppBase() + 0x140A98C))(this, newValue);
	}
	template <typename T = void> T ReplaceAddVipPoints(int32_t newValue) {
		return ((T (*)(Store2DataEntity*, int32_t))(Il2CppBase() + 0x140AA90))(this, newValue);
	}
	template <typename T = void> T RemoveAddVipPoints() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140AB94))(this);
	}
	template <typename T = AdditionalChancesComponent*> T get_additionalChances() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140ABA0))(this);
	}
	template <typename T = bool> T get_hasAdditionalChances() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140AC28))(this);
	}
	template <typename T = void> T AddAdditionalChances(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140AC34))(this, newValues);
	}
	template <typename T = void> T ReplaceAdditionalChances(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140AD48))(this, newValues);
	}
	template <typename T = void> T RemoveAdditionalChances() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140AE5C))(this);
	}
	template <typename T = BannerBackgroundImageComponent*> T get_bannerBackgroundImage() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140AE68))(this);
	}
	template <typename T = bool> T get_hasBannerBackgroundImage() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140AEF0))(this);
	}
	template <typename T = void> T AddBannerBackgroundImage(Il2CppString* newName) {
		return ((T (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140AEFC))(this, newName);
	}
	template <typename T = void> T ReplaceBannerBackgroundImage(Il2CppString* newName) {
		return ((T (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140B010))(this, newName);
	}
	template <typename T = void> T RemoveBannerBackgroundImage() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140B124))(this);
	}
	template <typename T = BannerNamesComponent*> T get_bannerNames() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140B130))(this);
	}
	template <typename T = bool> T get_hasBannerNames() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140B19C))(this);
	}
	template <typename T = void> T AddBannerNames(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140B1A8))(this, newValues);
	}
	template <typename T = void> T ReplaceBannerNames(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140B2A0))(this, newValues);
	}
	template <typename T = void> T RemoveBannerNames() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140B398))(this);
	}
	template <typename T = BannerPrefabComponent*> T get_bannerPrefab() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140B3A4))(this);
	}
	template <typename T = bool> T get_hasBannerPrefab() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140B42C))(this);
	}
	template <typename T = void> T AddBannerPrefab(Il2CppString* newName) {
		return ((T (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140B438))(this, newName);
	}
	template <typename T = void> T ReplaceBannerPrefab(Il2CppString* newName) {
		return ((T (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140B54C))(this, newName);
	}
	template <typename T = void> T RemoveBannerPrefab() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140B660))(this);
	}
	template <typename T = BattlePassAddLevelsComponent*> T get_battlePassAddLevels() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140B66C))(this);
	}
	template <typename T = bool> T get_hasBattlePassAddLevels() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140B6F4))(this);
	}
	template <typename T = void> T AddBattlePassAddLevels(CurrencyType* newCurrencyType, int32_t newAddLevels) {
		return ((T (*)(Store2DataEntity*, CurrencyType*, int32_t))(Il2CppBase() + 0x140B700))(this, newCurrencyType, newAddLevels);
	}
	template <typename T = void> T ReplaceBattlePassAddLevels(CurrencyType* newCurrencyType, int32_t newAddLevels) {
		return ((T (*)(Store2DataEntity*, CurrencyType*, int32_t))(Il2CppBase() + 0x140B808))(this, newCurrencyType, newAddLevels);
	}
	template <typename T = void> T RemoveBattlePassAddLevels() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140B910))(this);
	}
	template <typename T = BlueprintComponent*> T get_blueprint() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140A52C))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140A520))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140B91C))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140BA30))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140BB44))(this);
	}
	template <typename T = BuyAmountComponent*> T get_buyAmount() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140BB50))(this);
	}
	template <typename T = bool> T get_hasBuyAmount() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140BBD8))(this);
	}
	template <typename T = void> T AddBuyAmount(int32_t newCount, Il2CppString* newParent) {
		return ((T (*)(Store2DataEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x140BBE4))(this, newCount, newParent);
	}
	template <typename T = void> T ReplaceBuyAmount(int32_t newCount, Il2CppString* newParent) {
		return ((T (*)(Store2DataEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x140BD00))(this, newCount, newParent);
	}
	template <typename T = void> T RemoveBuyAmount() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140BE1C))(this);
	}
	template <typename T = CategoryComponent*> T get_category() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140BE28))(this);
	}
	template <typename T = bool> T get_hasCategory() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140BE94))(this);
	}
	template <typename T = void> T AddCategory(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140BEA0))(this, newList);
	}
	template <typename T = void> T ReplaceCategory(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140BF98))(this, newList);
	}
	template <typename T = void> T RemoveCategory() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140C090))(this);
	}
	template <typename T = CoinsPackComponent*> T get_coinsPack() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140C09C))(this);
	}
	template <typename T = bool> T get_hasCoinsPack() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140C108))(this);
	}
	template <typename T = void> T AddCoinsPack(int32_t newCount) {
		return ((T (*)(Store2DataEntity*, int32_t))(Il2CppBase() + 0x140C114))(this, newCount);
	}
	template <typename T = void> T ReplaceCoinsPack(int32_t newCount) {
		return ((T (*)(Store2DataEntity*, int32_t))(Il2CppBase() + 0x140C1FC))(this, newCount);
	}
	template <typename T = void> T RemoveCoinsPack() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140C2E4))(this);
	}
	template <typename T = CommingSoonComponent*> T get_commingSoon() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140C2F0))(this);
	}
	template <typename T = bool> T get_hasCommingSoon() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140C378))(this);
	}
	template <typename T = void> T AddCommingSoon(bool newValue, Il2CppString* newName) {
		return ((T (*)(Store2DataEntity*, bool, Il2CppString*))(Il2CppBase() + 0x140C384))(this, newValue, newName);
	}
	template <typename T = void> T ReplaceCommingSoon(bool newValue, Il2CppString* newName) {
		return ((T (*)(Store2DataEntity*, bool, Il2CppString*))(Il2CppBase() + 0x140C4A4))(this, newValue, newName);
	}
	template <typename T = void> T RemoveCommingSoon() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140C5C4))(this);
	}
	template <typename T = ConsumeTypeComponent*> T get_consumeType() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140C5D0))(this);
	}
	template <typename T = bool> T get_hasConsumeType() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140C658))(this);
	}
	template <typename T = void> T AddConsumeType(ConsumeType* newType) {
		return ((T (*)(Store2DataEntity*, ConsumeType*))(Il2CppBase() + 0x140C664))(this, newType);
	}
	template <typename T = void> T ReplaceConsumeType(ConsumeType* newType) {
		return ((T (*)(Store2DataEntity*, ConsumeType*))(Il2CppBase() + 0x140C768))(this, newType);
	}
	template <typename T = void> T RemoveConsumeType() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140C86C))(this);
	}
	template <typename T = CountComponent*> T get_count() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140C878))(this);
	}
	template <typename T = bool> T get_hasCount() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140C900))(this);
	}
	template <typename T = void> T AddCount(int32_t newValue) {
		return ((T (*)(Store2DataEntity*, int32_t))(Il2CppBase() + 0x140C90C))(this, newValue);
	}
	template <typename T = void> T ReplaceCount(int32_t newValue) {
		return ((T (*)(Store2DataEntity*, int32_t))(Il2CppBase() + 0x140CA10))(this, newValue);
	}
	template <typename T = void> T RemoveCount() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140CB14))(this);
	}
	template <typename T = DescriptionComponent*> T get_description() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140CB20))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140CBA8))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(Store2DataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x140CBB4))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(Store2DataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x140CCDC))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140CE04))(this);
	}
	template <typename T = DiscountComponent*> T get_discount() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140CE10))(this);
	}
	template <typename T = bool> T get_hasDiscount() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140CE7C))(this);
	}
	template <typename T = void> T AddDiscount(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140CE88))(this, newList);
	}
	template <typename T = void> T ReplaceDiscount(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140CF80))(this, newList);
	}
	template <typename T = void> T RemoveDiscount() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140D078))(this);
	}
	template <typename T = ExperienceBoosterDurationComponent*> T get_experienceBoosterDuration() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140D084))(this);
	}
	template <typename T = bool> T get_hasExperienceBoosterDuration() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140D10C))(this);
	}
	template <typename T = void> T AddExperienceBoosterDuration(float newValue) {
		return ((T (*)(Store2DataEntity*, float))(Il2CppBase() + 0x140D118))(this, newValue);
	}
	template <typename T = void> T ReplaceExperienceBoosterDuration(float newValue) {
		return ((T (*)(Store2DataEntity*, float))(Il2CppBase() + 0x140D21C))(this, newValue);
	}
	template <typename T = void> T RemoveExperienceBoosterDuration() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140D320))(this);
	}
	template <typename T = ExpireTimeComponent*> T get_expireTime() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140D32C))(this);
	}
	template <typename T = bool> T get_hasExpireTime() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140D3B4))(this);
	}
	template <typename T = void> T AddExpireTime(int64_t newValue) {
		return ((T (*)(Store2DataEntity*, int64_t))(Il2CppBase() + 0x140D3C0))(this, newValue);
	}
	template <typename T = void> T ReplaceExpireTime(int64_t newValue) {
		return ((T (*)(Store2DataEntity*, int64_t))(Il2CppBase() + 0x140D4C4))(this, newValue);
	}
	template <typename T = void> T RemoveExpireTime() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140D5C8))(this);
	}
	template <typename T = bool> T get_isGacha() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140D5D4))(this);
	}
	template <typename T = void> T set_isGacha(bool value) {
		return ((T (*)(Store2DataEntity*, bool))(Il2CppBase() + 0x140D5E0))(this, value);
	}
	template <typename T = IconComponent*> T get_icon() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140D6F8))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140D780))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(Store2DataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x140D78C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(Store2DataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x140D8E4))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140DA3C))(this);
	}
	template <typename T = LinkToStoreProductComponent*> T get_linkToStoreProduct() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140DA48))(this);
	}
	template <typename T = bool> T get_hasLinkToStoreProduct() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140DAD0))(this);
	}
	template <typename T = void> T AddLinkToStoreProduct(Il2CppString* newName) {
		return ((T (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140DADC))(this, newName);
	}
	template <typename T = void> T ReplaceLinkToStoreProduct(Il2CppString* newName) {
		return ((T (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140DBF0))(this, newName);
	}
	template <typename T = void> T RemoveLinkToStoreProduct() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140DD04))(this);
	}
	template <typename T = NeedExpComponent*> T get_needExp() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140DD10))(this);
	}
	template <typename T = bool> T get_hasNeedExp() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140DD7C))(this);
	}
	template <typename T = void> T AddNeedExp(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140DD88))(this, newValues);
	}
	template <typename T = void> T ReplaceNeedExp(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140DE80))(this, newValues);
	}
	template <typename T = void> T RemoveNeedExp() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140DF78))(this);
	}
	template <typename T = bool> T get_isOldAmount() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140DF84))(this);
	}
	template <typename T = void> T set_isOldAmount(bool value) {
		return ((T (*)(Store2DataEntity*, bool))(Il2CppBase() + 0x140DF90))(this, value);
	}
	template <typename T = PriceComponent*> T get_price() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140E0A8))(this);
	}
	template <typename T = bool> T get_hasPrice() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140E114))(this);
	}
	template <typename T = void> T AddPrice(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140E120))(this, newList);
	}
	template <typename T = void> T ReplacePrice(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140E218))(this, newList);
	}
	template <typename T = void> T RemovePrice() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140E310))(this);
	}
	template <typename T = ProfitComponent*> T get_profit() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140E31C))(this);
	}
	template <typename T = bool> T get_hasProfit() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140E3A4))(this);
	}
	template <typename T = void> T AddProfit(int32_t newValue) {
		return ((T (*)(Store2DataEntity*, int32_t))(Il2CppBase() + 0x140E3B0))(this, newValue);
	}
	template <typename T = void> T ReplaceProfit(int32_t newValue) {
		return ((T (*)(Store2DataEntity*, int32_t))(Il2CppBase() + 0x140E4B4))(this, newValue);
	}
	template <typename T = void> T RemoveProfit() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140E5B8))(this);
	}
	template <typename T = PurchaseMoreComponent*> T get_purchaseMore() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140E5C4))(this);
	}
	template <typename T = bool> T get_hasPurchaseMore() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140E630))(this);
	}
	template <typename T = void> T AddPurchaseMore(Il2CppString* newDescription, Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(Store2DataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140E63C))(this, newDescription, newValues);
	}
	template <typename T = void> T ReplacePurchaseMore(Il2CppString* newDescription, Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(Store2DataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140E748))(this, newDescription, newValues);
	}
	template <typename T = void> T RemovePurchaseMore() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140E854))(this);
	}
	template <typename T = bool> T get_isResettable() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140E860))(this);
	}
	template <typename T = void> T set_isResettable(bool value) {
		return ((T (*)(Store2DataEntity*, bool))(Il2CppBase() + 0x140E86C))(this, value);
	}
	template <typename T = ResourcesComponent*> T get_resources() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140E984))(this);
	}
	template <typename T = bool> T get_hasResources() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140EA0C))(this);
	}
	template <typename T = void> T AddResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140EA18))(this, newList);
	}
	template <typename T = void> T ReplaceResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140EB2C))(this, newList);
	}
	template <typename T = void> T RemoveResources() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140EC40))(this);
	}
	template <typename T = SavingsPackTypeComponent*> T get_savingsPackType() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140EC4C))(this);
	}
	template <typename T = bool> T get_hasSavingsPackType() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140ECD4))(this);
	}
	template <typename T = void> T AddSavingsPackType(SavingsPackType* newType) {
		return ((T (*)(Store2DataEntity*, SavingsPackType*))(Il2CppBase() + 0x140ECE0))(this, newType);
	}
	template <typename T = void> T ReplaceSavingsPackType(SavingsPackType* newType) {
		return ((T (*)(Store2DataEntity*, SavingsPackType*))(Il2CppBase() + 0x140EDE4))(this, newType);
	}
	template <typename T = void> T RemoveSavingsPackType() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140EEE8))(this);
	}
	template <typename T = ShowcasePriorityComponent*> T get_showcasePriority() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140EEF4))(this);
	}
	template <typename T = bool> T get_hasShowcasePriority() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140EF7C))(this);
	}
	template <typename T = void> T AddShowcasePriority(Il2CppString* newValue) {
		return ((T (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140EF88))(this, newValue);
	}
	template <typename T = void> T ReplaceShowcasePriority(Il2CppString* newValue) {
		return ((T (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140F09C))(this, newValue);
	}
	template <typename T = void> T RemoveShowcasePriority() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140F1B0))(this);
	}
	template <typename T = SlotsRewardsComponent*> T get_slotsRewards() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140F1BC))(this);
	}
	template <typename T = bool> T get_hasSlotsRewards() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140F244))(this);
	}
	template <typename T = void> T AddSlotsRewards(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140F250))(this, newList);
	}
	template <typename T = void> T ReplaceSlotsRewards(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140F364))(this, newList);
	}
	template <typename T = void> T RemoveSlotsRewards() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140F478))(this);
	}
	template <typename T = SoldOutComponent*> T get_soldOut() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140F484))(this);
	}
	template <typename T = bool> T get_hasSoldOut() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140F50C))(this);
	}
	template <typename T = void> T AddSoldOut(Il2CppString* newName) {
		return ((T (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140F518))(this, newName);
	}
	template <typename T = void> T ReplaceSoldOut(Il2CppString* newName) {
		return ((T (*)(Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x140F62C))(this, newName);
	}
	template <typename T = void> T RemoveSoldOut() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140F740))(this);
	}
	template <typename T = StoreIdComponent*> T get_storeId() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140A5C0))(this);
	}
	template <typename T = bool> T get_hasStoreId() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140A5B4))(this);
	}
	template <typename T = void> T AddStoreId(int64_t newId) {
		return ((T (*)(Store2DataEntity*, int64_t))(Il2CppBase() + 0x1409FC8))(this, newId);
	}
	template <typename T = void> T ReplaceStoreId(int64_t newId) {
		return ((T (*)(Store2DataEntity*, int64_t))(Il2CppBase() + 0x140F74C))(this, newId);
	}
	template <typename T = void> T RemoveStoreId() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140F850))(this);
	}
	template <typename T = StoreTypeComponent*> T get_storeType() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140F85C))(this);
	}
	template <typename T = bool> T get_hasStoreType() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140F8E4))(this);
	}
	template <typename T = void> T AddStoreType(StoreType* newType) {
		return ((T (*)(Store2DataEntity*, StoreType*))(Il2CppBase() + 0x140F8F0))(this, newType);
	}
	template <typename T = void> T ReplaceStoreType(StoreType* newType) {
		return ((T (*)(Store2DataEntity*, StoreType*))(Il2CppBase() + 0x140F9F4))(this, newType);
	}
	template <typename T = void> T RemoveStoreType() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140FAF8))(this);
	}
	template <typename T = TagsComponent*> T get_tags() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140FB04))(this);
	}
	template <typename T = bool> T get_hasTags() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140FB8C))(this);
	}
	template <typename T = void> T AddTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140FB98))(this, newValues);
	}
	template <typename T = void> T ReplaceTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(Store2DataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x140FCAC))(this, newValues);
	}
	template <typename T = void> T RemoveTags() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140FDC0))(this);
	}
	template <typename T = UnlockPremiumComponent*> T get_unlockPremium() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140FDCC))(this);
	}
	template <typename T = bool> T get_hasUnlockPremium() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x140FE54))(this);
	}
	template <typename T = void> T AddUnlockPremium(Il2CppString* newName, int32_t newSeason, int32_t newCycle) {
		return ((T (*)(Store2DataEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x140FE60))(this, newName, newSeason, newCycle);
	}
	template <typename T = void> T ReplaceUnlockPremium(Il2CppString* newName, int32_t newSeason, int32_t newCycle) {
		return ((T (*)(Store2DataEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x140FF88))(this, newName, newSeason, newCycle);
	}
	template <typename T = void> T RemoveUnlockPremium() {
		return ((T (*)(Store2DataEntity*))(Il2CppBase() + 0x14100B0))(this);
	}

};

