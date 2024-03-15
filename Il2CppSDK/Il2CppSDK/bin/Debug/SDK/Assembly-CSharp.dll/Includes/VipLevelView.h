#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipLevelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipLevelView"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = StandartButton*> R& BuyButton() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& SoldOutPanel() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& BonusesContainer() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = VipBonusView*> R& BonusPrefab() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = VipStoreProductView*> R& LinkedStoreProduct() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& LockedImage() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& UnlockedImage() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& _storeBlueprintName() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = void> R Init(VIPDataEntity* data, TooltipView* tooltipView) {
		return ((R (*)(VipLevelView*, VIPDataEntity*, TooltipView*))(Il2CppBase() + 0x15C2D64))(this, data, tooltipView);
	}
	template <typename R = void> R OnBuyButtonClick() {
		return ((R (*)(VipLevelView*))(Il2CppBase() + 0x15CEA30))(this);
	}

};

