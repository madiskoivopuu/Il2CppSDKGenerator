#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PremiumBPItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PremiumBPItem"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _captionText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _descriptionText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _priceText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _percentContainer() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _percentText() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _VIPPanel() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _VIPText() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _TokensPanel() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _TokensImage() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _TokensText() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _xBonusPanel() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _xBonusText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppString*> R& _blueprint() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = UIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	 Action1<Il2CppString*>*& OnButtonClick() {
		return *(Action1<Il2CppString*>**)((uintptr_t)this + 0x98);
	}

	template <typename R = void> R Bind(UIWindow* window, Store2DataEntity* storeDataEntity, Action1<Il2CppString*>* onBuyButtonClick) {
		return ((R (*)(PremiumBPItem*, UIWindow*, Store2DataEntity*, Action1<Il2CppString*>*))(Il2CppBase() + 0x16DF924))(this, window, storeDataEntity, onBuyButtonClick);
	}
	template <typename R = void> R ButtonClick() {
		return ((R (*)(PremiumBPItem*))(Il2CppBase() + 0x16E046C))(this);
	}

};

