#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class StoreGachaDetailedWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreGachaDetailedWindow"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Quantity() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Badge() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BuyButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ActionButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RandomInfoTooltipTrigger() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& PackContainer() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& AdditionalItemsContainer() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& RandomItemsRarityContainer1() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& RandomItemsRarityContainer2() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& RandomItemsRarityContainer3() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& RandomItemsRarityPrefab() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& ProductContentItemPrefab() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& StoreItemsSentToInboxText() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& EffectSlotsItemCommon() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& EffectSlotsItemUncommon() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& EffectSlotsItemRare() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& EffectSlotsItemEpic() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& EffectSlotsItemLegendary() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& SelectAnimLength() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& BlinkAnimLength() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _effectsCache() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _list() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = bool> T& _needUpdateStore() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& _animationInProgress() {
		return *(T*)((uintptr_t)this + 0x149);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(StoreGachaDetailedWindow*))(Il2CppBase() + 0x142032C))(this);
	}
	template <typename T = void> T InitRandomInfoTooltip(uintptr_t storeData) {
		return ((T (*)(StoreGachaDetailedWindow*, uintptr_t))(Il2CppBase() + 0x14214F8))(this, storeData);
	}
	template <typename T = bool> T IsGachaIAPBuyButtonActive(uintptr_t store2Data) {
		return ((T (*)(StoreGachaDetailedWindow*, uintptr_t))(Il2CppBase() + 0x1421B24))(this, store2Data);
	}
	template <typename T = void> T OnButtonCloseClick() {
		return ((T (*)(StoreGachaDetailedWindow*))(Il2CppBase() + 0x142225C))(this);
	}
	template <typename T = void> T UpdateUI() {
		return ((T (*)(StoreGachaDetailedWindow*))(Il2CppBase() + 0x1421D84))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(StoreGachaDetailedWindow*))(Il2CppBase() + 0x1422300))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(StoreGachaDetailedWindow*, float))(Il2CppBase() + 0x1422494))(this, deltaTime);
	}
	template <typename T = void> T OnBuyButtonClick() {
		return ((T (*)(StoreGachaDetailedWindow*))(Il2CppBase() + 0x1422528))(this);
	}
	template <typename T = void> T OnActionButtonButtonClick() {
		return ((T (*)(StoreGachaDetailedWindow*))(Il2CppBase() + 0x1422CA0))(this);
	}
	template <typename T = uintptr_t> T ItemsAnimation() {
		return ((T (*)(StoreGachaDetailedWindow*))(Il2CppBase() + 0x1422E48))(this);
	}
	template <typename T = void> T AcquireDicedItems(uintptr_t baseRes, Il2CppList<uintptr_t>* additionalResList) {
		return ((T (*)(StoreGachaDetailedWindow*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1422EC0))(this, baseRes, additionalResList);
	}

};

}
