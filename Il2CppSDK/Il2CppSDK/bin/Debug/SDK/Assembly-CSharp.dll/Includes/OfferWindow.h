#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class OfferWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OfferWindow"));
	}

	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = StandartButton*> T& _buyButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _captionText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _image() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _descriptionText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _priceText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _discount() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _discountText() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _resourcesContainer() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = RewardResourceView*> T& _resourceViewPrefab() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<RewardResourceView*>*> T& _resourceViews() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _VIPPanel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _VIPText() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _TokensPanel() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _TokensImage() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _TokensText() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _xBonusPanel() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _xBonusText() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(OfferWindow*))(Il2CppBase() + 0x11D6870))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(OfferWindow*))(Il2CppBase() + 0x11D69CC))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(OfferWindow*))(Il2CppBase() + 0x11D6C54))(this);
	}
	template <typename T = void> T ShowResources(Store2DataEntity* storeEntity) {
		return ((T (*)(OfferWindow*, Store2DataEntity*))(Il2CppBase() + 0x11D79DC))(this, storeEntity);
	}
	template <typename T = void> T OnBuyClick(int32_t buyButtonIndex) {
		return ((T (*)(OfferWindow*, int32_t))(Il2CppBase() + 0x11D7DB0))(this, buyButtonIndex);
	}
	template <typename T = void> T Awakeb__19_0() {
		return ((T (*)(OfferWindow*))(Il2CppBase() + 0x11D8634))(this);
	}

};

