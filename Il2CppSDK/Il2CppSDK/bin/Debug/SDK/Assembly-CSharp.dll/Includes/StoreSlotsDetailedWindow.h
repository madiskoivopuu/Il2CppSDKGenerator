#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class StoreSlotsDetailedWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSlotsDetailedWindow"));
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
	template <typename T = uintptr_t> T& ItemsSentToInboxText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& RulesPanel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RollPanel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BackToRulesButton() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& RewardPrefab() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Slots() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& SlotsContainer() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& BuyButton() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& ActionButton() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& EffectSlotsItemCommon() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& EffectSlotsItemUncommon() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& EffectSlotsItemRare() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& EffectSlotsItemEpic() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& EffectSlotsItemLegendary() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& _totalAnimationDuration() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _effectsCache() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& _needUpdateStore() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& _animationInProgress() {
		return *(T*)((uintptr_t)this + 0x131);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x184697C))(this);
	}
	template <typename T = void> T OnButtonCloseClick() {
		return ((T (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x1847994))(this);
	}
	template <typename T = void> T UpdateUI() {
		return ((T (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x18476AC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x1847A38))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(StoreSlotsDetailedWindow*, float))(Il2CppBase() + 0x1847C50))(this, deltaTime);
	}
	template <typename T = void> T OnBuyButtonClick() {
		return ((T (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x1847CE4))(this);
	}
	template <typename T = void> T OnBackToRulesButtonButtonClick() {
		return ((T (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x1848470))(this);
	}
	template <typename T = void> T OnActionButtonButtonClick() {
		return ((T (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x1848660))(this);
	}
	template <typename T = uintptr_t> T ItemsAnimation() {
		return ((T (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x18488F4))(this);
	}
	template <typename T = void> T AcquireDicedItems() {
		return ((T (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x184896C))(this);
	}
	template <typename T = void> T OnShowb__25_0() {
		return ((T (*)(StoreSlotsDetailedWindow*))(Il2CppBase() + 0x1848C38))(this);
	}

};

}
