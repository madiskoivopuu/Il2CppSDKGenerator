#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class StoreSingleDetailedWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSingleDetailedWindow"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ContentContainer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ProductContentItemPrefab() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Badge() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& VIPPanel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& VIPText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& TokensPanel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& TokensImage() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TokensText() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& XBonusPanel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& XBonusText() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& BuyButton() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(StoreSingleDetailedWindow*))(Il2CppBase() + 0x1844A54))(this);
	}
	template <typename T = void> T OnButtonCloseClick() {
		return ((T (*)(StoreSingleDetailedWindow*))(Il2CppBase() + 0x1846154))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(StoreSingleDetailedWindow*))(Il2CppBase() + 0x18461C0))(this);
	}
	template <typename T = void> T OnBuyButtonClick(int32_t buyButtonIndex) {
		return ((T (*)(StoreSingleDetailedWindow*, int32_t))(Il2CppBase() + 0x1846210))(this, buyButtonIndex);
	}
	template <typename T = void> T OnShowb__15_0() {
		return ((T (*)(StoreSingleDetailedWindow*))(Il2CppBase() + 0x1846888))(this);
	}

};

}
