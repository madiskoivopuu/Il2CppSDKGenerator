#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDStorePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDStorePanel"));
	}

	template <typename R = CurrencyType> R& CurrencyType() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& ItemName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Coins() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& ImageIsSelected() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& OnStoreButtonClick() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& Animator() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& CoinsChange() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& PlusColor() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& MinusColor() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = TooltipView*> R& TooltipPrefab() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = TooltipProxy*> R& _tooltipProxy() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = TooltipView*> R& _tooltipView() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = PriceType> R& _priceType() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int64_t> R& _coins() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = Il2CppString*> static R& plusSymbol() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(HUDStorePanel*))(Il2CppBase() + 0x128014C))(this);
	}
	template <typename R = bool> R get_IsSelected() {
		return ((R (*)(HUDStorePanel*))(Il2CppBase() + 0x12801D8))(this);
	}
	template <typename R = void> R set_IsSelected(bool value) {
		return ((R (*)(HUDStorePanel*, bool))(Il2CppBase() + 0x128026C))(this, value);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(HUDStorePanel*))(Il2CppBase() + 0x1280310))(this);
	}
	template <typename R = void> R Bind(IUIWindow* window) {
		return ((R (*)(HUDStorePanel*, IUIWindow*))(Il2CppBase() + 0x12804D8))(this, window);
	}
	template <typename R = void> R Draw(float deltaTime) {
		return ((R (*)(HUDStorePanel*, float))(Il2CppBase() + 0x12809DC))(this, deltaTime);
	}
	template <typename R = void> R ChangeCurrencyCount(int32_t count) {
		return ((R (*)(HUDStorePanel*, int32_t))(Il2CppBase() + 0x1280B78))(this, count);
	}
	template <typename R = void> R RiseAnim(int64_t delta) {
		return ((R (*)(HUDStorePanel*, int64_t))(Il2CppBase() + 0x1280BF4))(this, delta);
	}
	template <typename R = void> R OnStoreButtonClicked() {
		return ((R (*)(HUDStorePanel*))(Il2CppBase() + 0x1280DB4))(this);
	}
	template <typename R = ItemEntity*> R GetItemEntity() {
		return ((R (*)(HUDStorePanel*))(Il2CppBase() + 0x1280FEC))(this);
	}

};

