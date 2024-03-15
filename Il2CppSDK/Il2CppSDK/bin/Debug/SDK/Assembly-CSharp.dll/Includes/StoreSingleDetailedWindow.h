#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StoreSingleDetailedWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSingleDetailedWindow"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& ContentContainer() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = StoreProductContentSlotView*> R& ProductContentItemPrefab() {
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
	template <typename R = uintptr_t> R& TokensPanel() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& TokensImage() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& TokensText() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& XBonusPanel() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& XBonusText() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = StandartButton*> R& BuyButton() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0xE0);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(StoreSingleDetailedWindow*))(Il2CppBase() + 0x1844A54))(this);
	}
	template <typename R = void> R OnButtonCloseClick() {
		return ((R (*)(StoreSingleDetailedWindow*))(Il2CppBase() + 0x1846154))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(StoreSingleDetailedWindow*))(Il2CppBase() + 0x18461C0))(this);
	}
	template <typename R = void> R OnBuyButtonClick(int32_t buyButtonIndex) {
		return ((R (*)(StoreSingleDetailedWindow*, int32_t))(Il2CppBase() + 0x1846210))(this, buyButtonIndex);
	}
	template <typename R = void> R OnShowb__15_0() {
		return ((R (*)(StoreSingleDetailedWindow*))(Il2CppBase() + 0x1846888))(this);
	}

};

