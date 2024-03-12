#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StandartButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StandartButton"));
	}

	template <typename T = uintptr_t> T& _image() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _buttonText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _errorPanel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _errorText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _pricePanel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _priceText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _discountPanel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _discountImage() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _discountPriceText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _percentPanel() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _percentText() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _newMark() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _animatorDefault() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _animatorBlue() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _animatorOrange() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> static T& ErrorTriggerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_Image() {
		return ((T (*)(StandartButton*))(Il2CppBase() + 0x1489948))(this);
	}
	template <typename T = uintptr_t> T get_Text() {
		return ((T (*)(StandartButton*))(Il2CppBase() + 0x1489950))(this);
	}
	template <typename T = bool> T get_IsNew() {
		return ((T (*)(StandartButton*))(Il2CppBase() + 0x1489958))(this);
	}
	template <typename T = void> T set_IsNew(bool value) {
		return ((T (*)(StandartButton*, bool))(Il2CppBase() + 0x14899EC))(this, value);
	}
	template <typename T = uintptr_t> T get_Button() {
		return ((T (*)(StandartButton*))(Il2CppBase() + 0x1489A90))(this);
	}
	template <typename T = uintptr_t> T get_onClick() {
		return ((T (*)(StandartButton*))(Il2CppBase() + 0x1489A98))(this);
	}
	template <typename T = bool> T get_interactable() {
		return ((T (*)(StandartButton*))(Il2CppBase() + 0x1489AB4))(this);
	}
	template <typename T = void> T set_interactable(bool value) {
		return ((T (*)(StandartButton*, bool))(Il2CppBase() + 0x1489AD0))(this, value);
	}
	template <typename T = void> T ShowCurrencyPrice(uintptr_t currency, int32_t price, Il2CppString* buttonNameLocKey) {
		return ((T (*)(StandartButton*, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1489AF0))(this, currency, price, buttonNameLocKey);
	}
	template <typename T = void> T ShowIAPPrice(Il2CppString* productId, Il2CppString* buttonNameLocKey) {
		return ((T (*)(StandartButton*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x148AAD4))(this, productId, buttonNameLocKey);
	}
	template <typename T = void> T ShowItemPrice(Il2CppString* itemBlueprintName, int32_t itemCount, Il2CppString* buttonNameLocKey) {
		return ((T (*)(StandartButton*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x148AC50))(this, itemBlueprintName, itemCount, buttonNameLocKey);
	}
	template <typename T = void> T ShowPrice(uintptr_t price, uintptr_t discount, bool needShowAd) {
		return ((T (*)(StandartButton*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1489CC0))(this, price, discount, needShowAd);
	}
	template <typename T = void> T SetPrice(int32_t price) {
		return ((T (*)(StandartButton*, int32_t))(Il2CppBase() + 0x148ADD4))(this, price);
	}
	template <typename T = void> T SetPercent(int32_t percent) {
		return ((T (*)(StandartButton*, int32_t))(Il2CppBase() + 0x148AF2C))(this, percent);
	}
	template <typename T = void> T HidePrice() {
		return ((T (*)(StandartButton*))(Il2CppBase() + 0x148AF0C))(this);
	}
	template <typename T = void> T HidePercent() {
		return ((T (*)(StandartButton*))(Il2CppBase() + 0x148B0A0))(this);
	}
	template <typename T = void> T ShowError(Il2CppString* errorText) {
		return ((T (*)(StandartButton*, Il2CppString*))(Il2CppBase() + 0x148B0C0))(this, errorText);
	}
	template <typename T = void> T SetImageAlpha(float alpha) {
		return ((T (*)(StandartButton*, float))(Il2CppBase() + 0x148B140))(this, alpha);
	}
	template <typename T = void> T SetText(Il2CppString* text) {
		return ((T (*)(StandartButton*, Il2CppString*))(Il2CppBase() + 0x148B288))(this, text);
	}
	template <typename T = void> T SetTextAlpha(float alpha) {
		return ((T (*)(StandartButton*, float))(Il2CppBase() + 0x148B3B0))(this, alpha);
	}

};

}
