#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StoreProductDetailedWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreProductDetailedWindow"));
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
	template <typename T = BadgeView*> T& Badge() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& VIPPanel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& VIPText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& TimeLeft() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& TimeLeftText() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TokensPanel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& TokensImage() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& TokensText() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& XBonusPanel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& XBonusText() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = StandartButton*> T& BuyButton() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& ProfitPanel() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& ProfitText() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& PackContainer() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = StoreProductContentSlotView*> T& ProductContentItemPrefab() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CloseButtons() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppList<StoreProductContentSlotView*>*> T& _items() {
		return *(T*)((uintptr_t)this + 0x118);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(StoreProductDetailedWindow*))(Il2CppBase() + 0x18320B4))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(StoreProductDetailedWindow*))(Il2CppBase() + 0x1832204))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(StoreProductDetailedWindow*))(Il2CppBase() + 0x1833570))(this);
	}
	template <typename T = void> T OnBuyButtonClick(int32_t buyButtonIndex) {
		return ((T (*)(StoreProductDetailedWindow*, int32_t))(Il2CppBase() + 0x1833B68))(this, buyButtonIndex);
	}
	template <typename T = void> T OnButtonCloseClick() {
		return ((T (*)(StoreProductDetailedWindow*))(Il2CppBase() + 0x183452C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(StoreProductDetailedWindow*, float))(Il2CppBase() + 0x1834594))(this, deltaTime);
	}
	template <typename T = void> T UpdateUI() {
		return ((T (*)(StoreProductDetailedWindow*))(Il2CppBase() + 0x1833824))(this);
	}
	template <typename T = void> T ShowItemInfoWindow(Il2CppString* blueprint) {
		return ((T (*)(StoreProductDetailedWindow*, Il2CppString*))(Il2CppBase() + 0x18348FC))(this, blueprint);
	}
	template <typename T = void> T Awakeb__22_0() {
		return ((T (*)(StoreProductDetailedWindow*))(Il2CppBase() + 0x1834B64))(this);
	}

};

