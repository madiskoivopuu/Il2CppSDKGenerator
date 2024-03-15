#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreBannerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreBannerView"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Timer() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Background() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& ClickButton() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& VIPPanel() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& VIPText() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& TokensPanel() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& TokensImage() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& TokensText() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& XBonusPanel() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& XBonusText() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& PricePanel() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& CurrencyImage() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& PercentPanel() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& PercentText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = Category> R& _category() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = int64_t> R& _storeId() {
		return *(R*)((uintptr_t)this + 0xC8);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(StoreBannerView*))(Il2CppBase() + 0x1418C7C))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(StoreBannerView*))(Il2CppBase() + 0x1418D18))(this);
	}
	template <typename R = void> R Init(Store2DataEntity* data, Category category) {
		return ((R (*)(StoreBannerView*, Store2DataEntity*, Category))(Il2CppBase() + 0x1417F7C))(this, data, category);
	}
	template <typename R = void> R OnBannerClicked() {
		return ((R (*)(StoreBannerView*))(Il2CppBase() + 0x14191C4))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(StoreBannerView*))(Il2CppBase() + 0x141966C))(this);
	}

};

