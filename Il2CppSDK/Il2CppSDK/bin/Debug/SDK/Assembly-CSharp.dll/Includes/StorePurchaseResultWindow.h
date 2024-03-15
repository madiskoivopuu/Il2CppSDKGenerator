#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StorePurchaseResultWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StorePurchaseResultWindow"));
	}

	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = StoreProductContentSlotView*> R& ContentItemPrefab() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& ResourcesPanel() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& ResourcesContainer() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& ResourcesText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& CurrenciesPanel() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& CurrenciesContainer() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& CurrenciesText() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& TokensPanel() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& TokensContainer() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& TokensText() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& VipLevelUpPanel() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& VipPointsText() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& OldVipLevel() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& NewVipLevel() {
		return *(R*)((uintptr_t)this + 0xF0);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(StorePurchaseResultWindow*))(Il2CppBase() + 0x1838834))(this);
	}
	template <typename R = void> R OnButtonCloseClick() {
		return ((R (*)(StorePurchaseResultWindow*))(Il2CppBase() + 0x183B22C))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(StorePurchaseResultWindow*))(Il2CppBase() + 0x183B298))(this);
	}
	 static Il2CppList<Resource*>* OnShowg__getUnlockedCurrenciesForSavingsPack|17_2(uintptr_t ) {
		return ((Il2CppList<Resource*>* (*)(void *, uintptr_t))(Il2CppBase() + 0x183AF3C))(0, );
	}

};

