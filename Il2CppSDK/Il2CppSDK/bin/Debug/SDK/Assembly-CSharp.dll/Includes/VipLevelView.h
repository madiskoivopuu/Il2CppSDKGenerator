#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipLevelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipLevelView"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = StandartButton*> T& BuyButton() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& SoldOutPanel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& BonusesContainer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = VipBonusView*> T& BonusPrefab() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = VipStoreProductView*> T& LinkedStoreProduct() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& LockedImage() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& UnlockedImage() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& _storeBlueprintName() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Init(VIPDataEntity* data, TooltipView* tooltipView) {
		return ((T (*)(VipLevelView*, VIPDataEntity*, TooltipView*))(Il2CppBase() + 0x15C2D64))(this, data, tooltipView);
	}
	template <typename T = void> T OnBuyButtonClick() {
		return ((T (*)(VipLevelView*))(Il2CppBase() + 0x15CEA30))(this);
	}

};

