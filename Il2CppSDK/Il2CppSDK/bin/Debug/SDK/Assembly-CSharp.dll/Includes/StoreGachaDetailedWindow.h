#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StoreGachaDetailedWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreGachaDetailedWindow"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& Quantity() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = BadgeView*> R& Badge() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = StandartButton*> R& BuyButton() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = StandartButton*> R& ActionButton() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = TooltipTrigger*> R& RandomInfoTooltipTrigger() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& PackContainer() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& AdditionalItemsContainer() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& RandomItemsRarityContainer1() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& RandomItemsRarityContainer2() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& RandomItemsRarityContainer3() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& RandomItemsRarityPrefab() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = StoreProductContentSlotView*> R& ProductContentItemPrefab() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& StoreItemsSentToInboxText() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& EffectSlotsItemCommon() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& EffectSlotsItemUncommon() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& EffectSlotsItemRare() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& EffectSlotsItemEpic() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = uintptr_t> R& EffectSlotsItemLegendary() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = float> R& SelectAnimLength() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = float> R& BlinkAnimLength() {
		return *(R*)((uintptr_t)this + 0x12C);
	}
	 Il2CppList<uintptr_t>*& _effectsCache() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x130);
	}
	 Il2CppList<Il2CppString*>*& _list() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)this + 0x138);
	}
	 Il2CppList<StoreProductContentSlotView*>*& _items() {
		return *(Il2CppList<StoreProductContentSlotView*>**)((uintptr_t)this + 0x140);
	}
	template <typename R = bool> R& _needUpdateStore() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = bool> R& _animationInProgress() {
		return *(R*)((uintptr_t)this + 0x149);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(StoreGachaDetailedWindow*))(Il2CppBase() + 0x142032C))(this);
	}
	template <typename R = void> R InitRandomInfoTooltip(Store2DataEntity* storeData) {
		return ((R (*)(StoreGachaDetailedWindow*, Store2DataEntity*))(Il2CppBase() + 0x14214F8))(this, storeData);
	}
	template <typename R = bool> R IsGachaIAPBuyButtonActive(Store2DataEntity* store2Data) {
		return ((R (*)(StoreGachaDetailedWindow*, Store2DataEntity*))(Il2CppBase() + 0x1421B24))(this, store2Data);
	}
	template <typename R = void> R OnButtonCloseClick() {
		return ((R (*)(StoreGachaDetailedWindow*))(Il2CppBase() + 0x142225C))(this);
	}
	template <typename R = void> R UpdateUI() {
		return ((R (*)(StoreGachaDetailedWindow*))(Il2CppBase() + 0x1421D84))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(StoreGachaDetailedWindow*))(Il2CppBase() + 0x1422300))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(StoreGachaDetailedWindow*, float))(Il2CppBase() + 0x1422494))(this, deltaTime);
	}
	template <typename R = void> R OnBuyButtonClick() {
		return ((R (*)(StoreGachaDetailedWindow*))(Il2CppBase() + 0x1422528))(this);
	}
	template <typename R = void> R OnActionButtonButtonClick() {
		return ((R (*)(StoreGachaDetailedWindow*))(Il2CppBase() + 0x1422CA0))(this);
	}
	template <typename R = uintptr_t> R ItemsAnimation() {
		return ((R (*)(StoreGachaDetailedWindow*))(Il2CppBase() + 0x1422E48))(this);
	}
	template <typename R = void> R AcquireDicedItems(Resource baseRes, Il2CppList<Resource>* additionalResList) {
		return ((R (*)(StoreGachaDetailedWindow*, Resource, Il2CppList<Resource>*))(Il2CppBase() + 0x1422EC0))(this, baseRes, additionalResList);
	}

};

