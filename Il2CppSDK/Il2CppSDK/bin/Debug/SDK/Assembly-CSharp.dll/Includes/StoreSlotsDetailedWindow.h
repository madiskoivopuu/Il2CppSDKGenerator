#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StoreSlotsDetailedWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSlotsDetailedWindow"));
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
	template <typename R = uintptr_t> R& ItemsSentToInboxText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& RulesPanel() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& RollPanel() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& BackToRulesButton() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = StoreSlotsRewardView*> R& RewardPrefab() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = Il2CppArray<StoreProductContentSlotView*>*> R& Slots() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& SlotsContainer() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = StandartButton*> R& BuyButton() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = StandartButton*> R& ActionButton() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& EffectSlotsItemCommon() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& EffectSlotsItemUncommon() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& EffectSlotsItemRare() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& EffectSlotsItemEpic() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& EffectSlotsItemLegendary() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = float> R& _totalAnimationDuration() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	 Il2CppList<uintptr_t>*& _effectsCache() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x118);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	 Il2CppList<StoreProductContentSlotView*>*& _items() {
		return *(Il2CppList<StoreProductContentSlotView*>**)((uintptr_t)this + 0x128);
	}
	template <typename R = bool> R& _needUpdateStore() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = bool> R& _animationInProgress() {
		return *(R*)((uintptr_t)this + 0x131);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x184697C))(this);
	}
	template <typename R = void> R OnButtonCloseClick() {
		return ((R (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x1847994))(this);
	}
	template <typename R = void> R UpdateUI() {
		return ((R (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x18476AC))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x1847A38))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(StoreSlotsDetailedWindow*, float))(Il2CppBase() + 0x1847C50))(this, deltaTime);
	}
	template <typename R = void> R OnBuyButtonClick() {
		return ((R (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x1847CE4))(this);
	}
	template <typename R = void> R OnBackToRulesButtonButtonClick() {
		return ((R (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x1848470))(this);
	}
	template <typename R = void> R OnActionButtonButtonClick() {
		return ((R (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x1848660))(this);
	}
	template <typename R = uintptr_t> R ItemsAnimation() {
		return ((R (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x18488F4))(this);
	}
	template <typename R = void> R AcquireDicedItems() {
		return ((R (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x184896C))(this);
	}
	template <typename R = void> R OnShowb__25_0() {
		return ((R (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x1848C38))(this);
	}

};

