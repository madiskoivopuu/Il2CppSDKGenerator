#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NpcPackPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcPackPanel"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Image() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = StandartButton*> R& BuyButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& TimeLeft() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& TimeLeftText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int64_t> R& _resetTime() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& SingleRewardView() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& SingleIcon() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& SingleAmount() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = TooltipTrigger*> R& SingleTooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& SingleLimitedPanel() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& SingleLimitedLabel() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& SingleIconReset() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = StoreProductContentSlotView*> R& ProductContentItemPrefab() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& LimitedPanel() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& LimitedLabel() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& IconReset() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& SoldOutPanel() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& SoldOutTimerImage() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& SoldOutText() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	 Action2int64_t, int32_t>*& _onProductClicked() {
		return *(Action2int64_t, int32_t>**)((uintptr_t)this + 0xC0);
	}
	template <typename R = int64_t> R& _storeId() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = StoreCategory*> R& _storeCategory() {
		return *(R*)((uintptr_t)this + 0xD0);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(NpcPackPanel*))(Il2CppBase() + 0x13C62CC))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(NpcPackPanel*))(Il2CppBase() + 0x13C6374))(this);
	}
	template <typename R = void> R Init(Store2Entity* product, Store2DataEntity* data, StoreCategory* storeCategory, Action2int64_t, int32_t>* onProductClicked, bool canBeOneRewardStyle, TooltipView* tooltip) {
		return ((R (*)(NpcPackPanel*, Store2Entity*, Store2DataEntity*, StoreCategory*, Action2int64_t, int32_t>*, bool, TooltipView*))(Il2CppBase() + 0x13C63A0))(this, product, data, storeCategory, onProductClicked, canBeOneRewardStyle, tooltip);
	}
	template <typename R = void> R Update() {
		return ((R (*)(NpcPackPanel*))(Il2CppBase() + 0x13C78A4))(this);
	}
	template <typename R = void> R OnProductClicked() {
		return ((R (*)(NpcPackPanel*))(Il2CppBase() + 0x13C8048))(this);
	}

};

