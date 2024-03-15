#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StoreVIPChestDetailedWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreVIPChestDetailedWindow"));
	}

	template <typename R = float> R& _rollStartupPause() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = float> R& _rollPause() {
		return *(R*)((uintptr_t)this + 0x7C);
	}
	template <typename R = uintptr_t> R& RewardContainer() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& RulesPanel() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& RulesText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& RulesPanelContainer() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = BadgeView*> R& Badge() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& ItemsSentToInboxText() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = Il2CppArray<StoreProductContentSlotView*>*> R& Slots() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& SlotsContainer() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = StoreProductContentSlotView*> R& EffectSlotsItemCommon() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = StoreProductContentSlotView*> R& EffectSlotsItemUncommon() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = StoreProductContentSlotView*> R& EffectSlotsItemRare() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = StoreProductContentSlotView*> R& EffectSlotsItemEpic() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = StoreProductContentSlotView*> R& EffectSlotsItemLegendary() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = StoreProductContentSlotView*> R& SlotsItemPrefab() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& StoreItemsSentToInboxText() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = StoreProductContentSlotView*> R& _spawnedEffect() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	 Il2CppList<StoreProductContentSlotView*>*& _items() {
		return *(Il2CppList<StoreProductContentSlotView*>**)((uintptr_t)this + 0x108);
	}
	template <typename R = bool> R& _needUpdateVipWindow() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = bool> R& _animationInProgress() {
		return *(R*)((uintptr_t)this + 0x111);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(StoreVIPChestDetailedWindow*))(Il2CppBase() + 0x1848E74))(this);
	}
	template <typename R = void> R OnButtonCloseClick() {
		return ((R (*)(StoreVIPChestDetailedWindow*))(Il2CppBase() + 0x184A9B4))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(StoreVIPChestDetailedWindow*))(Il2CppBase() + 0x184AA58))(this);
	}
	template <typename R = void> R OnActionButtonButtonClick() {
		return ((R (*)(StoreVIPChestDetailedWindow*))(Il2CppBase() + 0x184A6D0))(this);
	}
	template <typename R = uintptr_t> R ItemsAnimation() {
		return ((R (*)(StoreVIPChestDetailedWindow*))(Il2CppBase() + 0x184AA80))(this);
	}

};

