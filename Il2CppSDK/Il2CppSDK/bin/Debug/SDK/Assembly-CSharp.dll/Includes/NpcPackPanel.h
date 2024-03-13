#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NpcPackPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcPackPanel"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Image() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = StandartButton*> T& BuyButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& TimeLeft() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& TimeLeftText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int64_t> T& _resetTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& SingleRewardView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& SingleIcon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& SingleAmount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = TooltipTrigger*> T& SingleTooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& SingleLimitedPanel() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& SingleLimitedLabel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& SingleIconReset() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = StoreProductContentSlotView*> T& ProductContentItemPrefab() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LimitedPanel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LimitedLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& IconReset() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& SoldOutPanel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& SoldOutTimerImage() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SoldOutText() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Action2int64_t, int32_t>*> T& _onProductClicked() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int64_t> T& _storeId() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = StoreCategory*> T& _storeCategory() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(NpcPackPanel*))(Il2CppBase() + 0x13C62CC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(NpcPackPanel*))(Il2CppBase() + 0x13C6374))(this);
	}
	template <typename T = void> T Init(Store2Entity* product, Store2DataEntity* data, StoreCategory* storeCategory, Action2int64_t, int32_t>* onProductClicked, bool canBeOneRewardStyle, TooltipView* tooltip) {
		return ((T (*)(NpcPackPanel*, Store2Entity*, Store2DataEntity*, StoreCategory*, Action2int64_t, int32_t>*, bool, TooltipView*))(Il2CppBase() + 0x13C63A0))(this, product, data, storeCategory, onProductClicked, canBeOneRewardStyle, tooltip);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NpcPackPanel*))(Il2CppBase() + 0x13C78A4))(this);
	}
	template <typename T = void> T OnProductClicked() {
		return ((T (*)(NpcPackPanel*))(Il2CppBase() + 0x13C8048))(this);
	}

};

