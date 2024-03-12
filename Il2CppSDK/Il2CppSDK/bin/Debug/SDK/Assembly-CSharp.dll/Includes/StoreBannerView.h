#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreBannerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreBannerView"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Timer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Background() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ClickButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& VIPPanel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& VIPText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& TokensPanel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& TokensImage() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& TokensText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& XBonusPanel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& XBonusText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& PricePanel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CurrencyImage() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PercentPanel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& PercentText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _category() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int64_t> T& _storeId() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(StoreBannerView*))(Il2CppBase() + 0x1418C7C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(StoreBannerView*))(Il2CppBase() + 0x1418D18))(this);
	}
	template <typename T = void> T Init(uintptr_t data, uintptr_t category) {
		return ((T (*)(StoreBannerView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1417F7C))(this, data, category);
	}
	template <typename T = void> T OnBannerClicked() {
		return ((T (*)(StoreBannerView*))(Il2CppBase() + 0x14191C4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(StoreBannerView*))(Il2CppBase() + 0x141966C))(this);
	}

};

}
