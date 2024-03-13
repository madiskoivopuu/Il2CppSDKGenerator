#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDStorePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDStorePanel"));
	}

	template <typename T = CurrencyType*> T& CurrencyType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Coins() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ImageIsSelected() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& OnStoreButtonClick() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Animator() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& CoinsChange() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& PlusColor() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& MinusColor() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = TooltipView*> T& TooltipPrefab() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = TooltipProxy*> T& _tooltipProxy() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = TooltipView*> T& _tooltipView() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = IUIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = PriceType*> T& _priceType() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int64_t> T& _coins() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> static T& plusSymbol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(HUDStorePanel*))(Il2CppBase() + 0x128014C))(this);
	}
	template <typename T = bool> T get_IsSelected() {
		return ((T (*)(HUDStorePanel*))(Il2CppBase() + 0x12801D8))(this);
	}
	template <typename T = void> T set_IsSelected(bool value) {
		return ((T (*)(HUDStorePanel*, bool))(Il2CppBase() + 0x128026C))(this, value);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(HUDStorePanel*))(Il2CppBase() + 0x1280310))(this);
	}
	template <typename T = void> T Bind(IUIWindow* window) {
		return ((T (*)(HUDStorePanel*, IUIWindow*))(Il2CppBase() + 0x12804D8))(this, window);
	}
	template <typename T = void> T Draw(float deltaTime) {
		return ((T (*)(HUDStorePanel*, float))(Il2CppBase() + 0x12809DC))(this, deltaTime);
	}
	template <typename T = void> T ChangeCurrencyCount(int32_t count) {
		return ((T (*)(HUDStorePanel*, int32_t))(Il2CppBase() + 0x1280B78))(this, count);
	}
	template <typename T = void> T RiseAnim(int64_t delta) {
		return ((T (*)(HUDStorePanel*, int64_t))(Il2CppBase() + 0x1280BF4))(this, delta);
	}
	template <typename T = void> T OnStoreButtonClicked() {
		return ((T (*)(HUDStorePanel*))(Il2CppBase() + 0x1280DB4))(this);
	}
	template <typename T = ItemEntity*> T GetItemEntity() {
		return ((T (*)(HUDStorePanel*))(Il2CppBase() + 0x1280FEC))(this);
	}

};

