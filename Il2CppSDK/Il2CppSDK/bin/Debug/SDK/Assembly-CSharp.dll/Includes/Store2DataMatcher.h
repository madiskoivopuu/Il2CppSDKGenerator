#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Store2DataMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Store2DataMatcher"));
	}

	template <typename T = void*> static T& _matcherAddBonusCurrency() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherAddVipPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherAdditionalChances() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherBannerBackgroundImage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherBannerNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherBannerPrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherBattlePassAddLevels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherBuyAmount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherCoinsPack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& _matcherCommingSoon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& _matcherConsumeType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& _matcherCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& _matcherDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& _matcherDiscount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& _matcherExperienceBoosterDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& _matcherExpireTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = void*> static T& _matcherGacha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = void*> static T& _matcherIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = void*> static T& _matcherLinkToStoreProduct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = void*> static T& _matcherNeedExp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = void*> static T& _matcherOldAmount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = void*> static T& _matcherPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = void*> static T& _matcherProfit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = void*> static T& _matcherPurchaseMore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = void*> static T& _matcherResettable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = void*> static T& _matcherResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = void*> static T& _matcherSavingsPackType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = void*> static T& _matcherShowcasePriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = void*> static T& _matcherSlotsRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = void*> static T& _matcherSoldOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = void*> static T& _matcherStoreId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = void*> static T& _matcherStoreType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = void*> static T& _matcherTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = void*> static T& _matcherUnlockPremium() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}

	template <typename T = void*> static T get_AddBonusCurrency() {
		return ((T (*)(void *))(Il2CppBase() + 0x14101B4))(0);
	}
	template <typename T = void*> static T get_AddVipPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x1410334))(0);
	}
	template <typename T = void*> static T get_AdditionalChances() {
		return ((T (*)(void *))(Il2CppBase() + 0x14104D0))(0);
	}
	template <typename T = void*> static T get_BannerBackgroundImage() {
		return ((T (*)(void *))(Il2CppBase() + 0x141066C))(0);
	}
	template <typename T = void*> static T get_BannerNames() {
		return ((T (*)(void *))(Il2CppBase() + 0x1410808))(0);
	}
	template <typename T = void*> static T get_BannerPrefab() {
		return ((T (*)(void *))(Il2CppBase() + 0x14109A4))(0);
	}
	template <typename T = void*> static T get_BattlePassAddLevels() {
		return ((T (*)(void *))(Il2CppBase() + 0x1410B40))(0);
	}
	template <typename T = void*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1409914))(0);
	}
	template <typename T = void*> static T get_BuyAmount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1410CDC))(0);
	}
	template <typename T = void*> static T get_Category() {
		return ((T (*)(void *))(Il2CppBase() + 0x1410E78))(0);
	}
	template <typename T = void*> static T get_CoinsPack() {
		return ((T (*)(void *))(Il2CppBase() + 0x1411014))(0);
	}
	template <typename T = void*> static T get_CommingSoon() {
		return ((T (*)(void *))(Il2CppBase() + 0x14111B0))(0);
	}
	template <typename T = void*> static T get_ConsumeType() {
		return ((T (*)(void *))(Il2CppBase() + 0x141134C))(0);
	}
	template <typename T = void*> static T get_Count() {
		return ((T (*)(void *))(Il2CppBase() + 0x14114E8))(0);
	}
	template <typename T = void*> static T get_Description() {
		return ((T (*)(void *))(Il2CppBase() + 0x1411684))(0);
	}
	template <typename T = void*> static T get_Discount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1411820))(0);
	}
	template <typename T = void*> static T get_ExperienceBoosterDuration() {
		return ((T (*)(void *))(Il2CppBase() + 0x14119BC))(0);
	}
	template <typename T = void*> static T get_ExpireTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1411B58))(0);
	}
	template <typename T = void*> static T get_Gacha() {
		return ((T (*)(void *))(Il2CppBase() + 0x1411CF4))(0);
	}
	template <typename T = void*> static T get_Icon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1411E90))(0);
	}
	template <typename T = void*> static T get_LinkToStoreProduct() {
		return ((T (*)(void *))(Il2CppBase() + 0x141202C))(0);
	}
	template <typename T = void*> static T get_NeedExp() {
		return ((T (*)(void *))(Il2CppBase() + 0x14121C8))(0);
	}
	template <typename T = void*> static T get_OldAmount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1412364))(0);
	}
	template <typename T = void*> static T get_Price() {
		return ((T (*)(void *))(Il2CppBase() + 0x1412500))(0);
	}
	template <typename T = void*> static T get_Profit() {
		return ((T (*)(void *))(Il2CppBase() + 0x141269C))(0);
	}
	template <typename T = void*> static T get_PurchaseMore() {
		return ((T (*)(void *))(Il2CppBase() + 0x1412838))(0);
	}
	template <typename T = void*> static T get_Resettable() {
		return ((T (*)(void *))(Il2CppBase() + 0x14129D4))(0);
	}
	template <typename T = void*> static T get_Resources() {
		return ((T (*)(void *))(Il2CppBase() + 0x1412B70))(0);
	}
	template <typename T = void*> static T get_SavingsPackType() {
		return ((T (*)(void *))(Il2CppBase() + 0x1409AB0))(0);
	}
	template <typename T = void*> static T get_ShowcasePriority() {
		return ((T (*)(void *))(Il2CppBase() + 0x1412D0C))(0);
	}
	template <typename T = void*> static T get_SlotsRewards() {
		return ((T (*)(void *))(Il2CppBase() + 0x1412EA8))(0);
	}
	template <typename T = void*> static T get_SoldOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x1413044))(0);
	}
	template <typename T = void*> static T get_StoreId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1409774))(0);
	}
	template <typename T = void*> static T get_StoreType() {
		return ((T (*)(void *))(Il2CppBase() + 0x14131E0))(0);
	}
	template <typename T = void*> static T get_Tags() {
		return ((T (*)(void *))(Il2CppBase() + 0x1413380))(0);
	}
	template <typename T = void*> static T get_UnlockPremium() {
		return ((T (*)(void *))(Il2CppBase() + 0x1413520))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14136C0))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1413738))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14137B0))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1413828))(0, matchers);
	}

};

}
