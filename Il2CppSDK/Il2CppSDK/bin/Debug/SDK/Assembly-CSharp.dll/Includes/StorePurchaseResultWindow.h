#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StorePurchaseResultWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StorePurchaseResultWindow"));
	}

	template <typename T = uintptr_t> T& Caption() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = StoreProductContentSlotView*> T& ContentItemPrefab() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ResourcesPanel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ResourcesContainer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ResourcesText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& CurrenciesPanel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& CurrenciesContainer() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& CurrenciesText() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TokensPanel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& TokensContainer() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& TokensText() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& VipLevelUpPanel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& VipPointsText() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& OldVipLevel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& NewVipLevel() {
		return *(T*)((uintptr_t)this + 0xF0);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(StorePurchaseResultWindow*))(Il2CppBase() + 0x1838834))(this);
	}
	template <typename T = void> T OnButtonCloseClick() {
		return ((T (*)(StorePurchaseResultWindow*))(Il2CppBase() + 0x183B22C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(StorePurchaseResultWindow*))(Il2CppBase() + 0x183B298))(this);
	}
	template <typename T = Il2CppList<Resource*>*> static T OnShowg__getUnlockedCurrenciesForSavingsPack|17_2(uintptr_t ) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x183AF3C))(0, );
	}

};

