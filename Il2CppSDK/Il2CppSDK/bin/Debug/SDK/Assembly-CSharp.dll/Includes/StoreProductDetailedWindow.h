#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StoreProductDetailedWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreProductDetailedWindow"));
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
	template <typename R = uintptr_t> R& VIPPanel() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& VIPText() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& TimeLeft() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& TimeLeftText() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& TokensPanel() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& TokensImage() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& TokensText() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& XBonusPanel() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& XBonusText() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = StandartButton*> R& BuyButton() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& ProfitPanel() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& ProfitText() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& PackContainer() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = StoreProductContentSlotView*> R& ProductContentItemPrefab() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& CloseButtons() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	 Il2CppList<StoreProductContentSlotView*>*& _items() {
		return *(Il2CppList<StoreProductContentSlotView*>**)((uintptr_t)this + 0x118);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(StoreProductDetailedWindow*))(Il2CppBase() + 0x18320B4))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(StoreProductDetailedWindow*))(Il2CppBase() + 0x1832204))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(StoreProductDetailedWindow*))(Il2CppBase() + 0x1833570))(this);
	}
	template <typename R = void> R OnBuyButtonClick(int32_t buyButtonIndex) {
		return ((R (*)(StoreProductDetailedWindow*, int32_t))(Il2CppBase() + 0x1833B68))(this, buyButtonIndex);
	}
	template <typename R = void> R OnButtonCloseClick() {
		return ((R (*)(StoreProductDetailedWindow*))(Il2CppBase() + 0x183452C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(StoreProductDetailedWindow*, float))(Il2CppBase() + 0x1834594))(this, deltaTime);
	}
	template <typename R = void> R UpdateUI() {
		return ((R (*)(StoreProductDetailedWindow*))(Il2CppBase() + 0x1833824))(this);
	}
	template <typename R = void> R ShowItemInfoWindow(Il2CppString* blueprint) {
		return ((R (*)(StoreProductDetailedWindow*, Il2CppString*))(Il2CppBase() + 0x18348FC))(this, blueprint);
	}
	template <typename R = void> R Awakeb__22_0() {
		return ((R (*)(StoreProductDetailedWindow*))(Il2CppBase() + 0x1834B64))(this);
	}

};

