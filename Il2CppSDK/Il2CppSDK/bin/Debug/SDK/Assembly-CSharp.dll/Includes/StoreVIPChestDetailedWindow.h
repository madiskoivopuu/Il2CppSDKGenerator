#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StoreVIPChestDetailedWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreVIPChestDetailedWindow"));
	}

	template <typename T = float> T& _rollStartupPause() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& _rollPause() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& RewardContainer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& RulesPanel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& RulesText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& RulesPanelContainer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = BadgeView*> T& Badge() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ItemsSentToInboxText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Slots() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SlotsContainer() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = StoreProductContentSlotView*> T& EffectSlotsItemCommon() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = StoreProductContentSlotView*> T& EffectSlotsItemUncommon() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = StoreProductContentSlotView*> T& EffectSlotsItemRare() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = StoreProductContentSlotView*> T& EffectSlotsItemEpic() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = StoreProductContentSlotView*> T& EffectSlotsItemLegendary() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = StoreProductContentSlotView*> T& SlotsItemPrefab() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& StoreItemsSentToInboxText() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = StoreProductContentSlotView*> T& _spawnedEffect() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppList<StoreProductContentSlotView*>*> T& _items() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& _needUpdateVipWindow() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& _animationInProgress() {
		return *(T*)((uintptr_t)this + 0x111);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(StoreVIPChestDetailedWindow*))(Il2CppBase() + 0x1848E74))(this);
	}
	template <typename T = void> T OnButtonCloseClick() {
		return ((T (*)(StoreVIPChestDetailedWindow*))(Il2CppBase() + 0x184A9B4))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(StoreVIPChestDetailedWindow*))(Il2CppBase() + 0x184AA58))(this);
	}
	template <typename T = void> T OnActionButtonButtonClick() {
		return ((T (*)(StoreVIPChestDetailedWindow*))(Il2CppBase() + 0x184A6D0))(this);
	}
	template <typename T = uintptr_t> T ItemsAnimation() {
		return ((T (*)(StoreVIPChestDetailedWindow*))(Il2CppBase() + 0x184AA80))(this);
	}

};

