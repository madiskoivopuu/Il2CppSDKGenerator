#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICustomStoreEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICustomStoreEntity"));
	}


	template <typename R = CustomStoreComponent*> R get_customStore() {
		return ((R (*)(ICustomStoreEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCustomStore() {
		return ((R (*)(ICustomStoreEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCustomStore(Il2CppString* newNPC_Icon, Il2CppString* newNPC_Name, Il2CppString* newNPC_Icon_Back, Il2CppString* newNPC_Text, Il2CppString* newNPC_Done_Text, Il2CppString* newTracery_Icon, Il2CppString* newLogo_Icon, int32_t newLogo_PosXDelta, Il2CppString* newBackgroundTileImage, bool newRightAlignment, Il2CppString* newTempBuffName, Il2CppString* newMainColor, Il2CppString* newBottomColor, Il2CppString* newProgressColor, Il2CppString* newTextColor, Il2CppString* newLockedTextColor, int32_t newUpdateStorePrice, Il2CppString* newBestRewardsRGNormal, Il2CppString* newBestRewardsRGPremium, Il2CppString* newAnalyticsEventName, StoreCategory* newStoreCategory, Il2CppList<Il2CppString*>* newCurrencies, Il2CppList<Il2CppString*>* newCurrenciesIcon) {
		return ((R (*)(ICustomStoreEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, StoreCategory*, Il2CppList<Il2CppString*>*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newNPC_Icon, newNPC_Name, newNPC_Icon_Back, newNPC_Text, newNPC_Done_Text, newTracery_Icon, newLogo_Icon, newLogo_PosXDelta, newBackgroundTileImage, newRightAlignment, newTempBuffName, newMainColor, newBottomColor, newProgressColor, newTextColor, newLockedTextColor, newUpdateStorePrice, newBestRewardsRGNormal, newBestRewardsRGPremium, newAnalyticsEventName, newStoreCategory, newCurrencies, newCurrenciesIcon);
	}
	template <typename R = void> R ReplaceCustomStore(Il2CppString* newNPC_Icon, Il2CppString* newNPC_Name, Il2CppString* newNPC_Icon_Back, Il2CppString* newNPC_Text, Il2CppString* newNPC_Done_Text, Il2CppString* newTracery_Icon, Il2CppString* newLogo_Icon, int32_t newLogo_PosXDelta, Il2CppString* newBackgroundTileImage, bool newRightAlignment, Il2CppString* newTempBuffName, Il2CppString* newMainColor, Il2CppString* newBottomColor, Il2CppString* newProgressColor, Il2CppString* newTextColor, Il2CppString* newLockedTextColor, int32_t newUpdateStorePrice, Il2CppString* newBestRewardsRGNormal, Il2CppString* newBestRewardsRGPremium, Il2CppString* newAnalyticsEventName, StoreCategory* newStoreCategory, Il2CppList<Il2CppString*>* newCurrencies, Il2CppList<Il2CppString*>* newCurrenciesIcon) {
		return ((R (*)(ICustomStoreEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, StoreCategory*, Il2CppList<Il2CppString*>*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newNPC_Icon, newNPC_Name, newNPC_Icon_Back, newNPC_Text, newNPC_Done_Text, newTracery_Icon, newLogo_Icon, newLogo_PosXDelta, newBackgroundTileImage, newRightAlignment, newTempBuffName, newMainColor, newBottomColor, newProgressColor, newTextColor, newLockedTextColor, newUpdateStorePrice, newBestRewardsRGNormal, newBestRewardsRGPremium, newAnalyticsEventName, newStoreCategory, newCurrencies, newCurrenciesIcon);
	}
	template <typename R = void> R RemoveCustomStore() {
		return ((R (*)(ICustomStoreEntity*))(Il2CppBase() + 0x0))(this);
	}

};

