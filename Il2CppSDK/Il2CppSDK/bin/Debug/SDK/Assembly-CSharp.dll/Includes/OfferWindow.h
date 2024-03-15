#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class OfferWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OfferWindow"));
	}

	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = StandartButton*> R& _buyButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _captionText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _image() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _descriptionText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _priceText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _discount() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _discountText() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _resourcesContainer() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = RewardResourceView*> R& _resourceViewPrefab() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	 Il2CppList<RewardResourceView*>*& _resourceViews() {
		return *(Il2CppList<RewardResourceView*>**)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _VIPPanel() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& _VIPText() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& _TokensPanel() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& _TokensImage() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& _TokensText() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& _xBonusPanel() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& _xBonusText() {
		return *(R*)((uintptr_t)this + 0x100);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(OfferWindow*))(Il2CppBase() + 0x11D6870))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(OfferWindow*))(Il2CppBase() + 0x11D69CC))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(OfferWindow*))(Il2CppBase() + 0x11D6C54))(this);
	}
	template <typename R = void> R ShowResources(Store2DataEntity* storeEntity) {
		return ((R (*)(OfferWindow*, Store2DataEntity*))(Il2CppBase() + 0x11D79DC))(this, storeEntity);
	}
	template <typename R = void> R OnBuyClick(int32_t buyButtonIndex) {
		return ((R (*)(OfferWindow*, int32_t))(Il2CppBase() + 0x11D7DB0))(this, buyButtonIndex);
	}
	template <typename R = void> R Awakeb__19_0() {
		return ((R (*)(OfferWindow*))(Il2CppBase() + 0x11D8634))(this);
	}

};

