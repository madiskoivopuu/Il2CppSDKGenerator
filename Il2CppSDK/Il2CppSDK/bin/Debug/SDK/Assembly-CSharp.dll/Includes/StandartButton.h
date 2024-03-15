#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StandartButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StandartButton"));
	}

	template <typename R = uintptr_t> R& _image() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _buttonText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _errorPanel() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _errorText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _pricePanel() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _priceText() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _discountPanel() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _discountImage() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _discountPriceText() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _percentPanel() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _percentText() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _newMark() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _animatorDefault() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _animatorBlue() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _animatorOrange() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = Il2CppString*> static R& ErrorTriggerName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = uintptr_t> R get_Image() {
		return ((R (*)(StandartButton*))(Il2CppBase() + 0x1489948))(this);
	}
	template <typename R = uintptr_t> R get_Text() {
		return ((R (*)(StandartButton*))(Il2CppBase() + 0x1489950))(this);
	}
	template <typename R = bool> R get_IsNew() {
		return ((R (*)(StandartButton*))(Il2CppBase() + 0x1489958))(this);
	}
	template <typename R = void> R set_IsNew(bool value) {
		return ((R (*)(StandartButton*, bool))(Il2CppBase() + 0x14899EC))(this, value);
	}
	template <typename R = uintptr_t> R get_Button() {
		return ((R (*)(StandartButton*))(Il2CppBase() + 0x1489A90))(this);
	}
	template <typename R = uintptr_t> R get_onClick() {
		return ((R (*)(StandartButton*))(Il2CppBase() + 0x1489A98))(this);
	}
	template <typename R = bool> R get_interactable() {
		return ((R (*)(StandartButton*))(Il2CppBase() + 0x1489AB4))(this);
	}
	template <typename R = void> R set_interactable(bool value) {
		return ((R (*)(StandartButton*, bool))(Il2CppBase() + 0x1489AD0))(this, value);
	}
	template <typename R = void> R ShowCurrencyPrice(CurrencyType currency, int32_t price, Il2CppString* buttonNameLocKey) {
		return ((R (*)(StandartButton*, CurrencyType, int32_t, Il2CppString*))(Il2CppBase() + 0x1489AF0))(this, currency, price, buttonNameLocKey);
	}
	template <typename R = void> R ShowIAPPrice(Il2CppString* productId, Il2CppString* buttonNameLocKey) {
		return ((R (*)(StandartButton*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x148AAD4))(this, productId, buttonNameLocKey);
	}
	template <typename R = void> R ShowItemPrice(Il2CppString* itemBlueprintName, int32_t itemCount, Il2CppString* buttonNameLocKey) {
		return ((R (*)(StandartButton*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x148AC50))(this, itemBlueprintName, itemCount, buttonNameLocKey);
	}
	template <typename R = void> R ShowPrice(Price price, Discount discount, bool needShowAd) {
		return ((R (*)(StandartButton*, Price, Discount, bool))(Il2CppBase() + 0x1489CC0))(this, price, discount, needShowAd);
	}
	template <typename R = void> R SetPrice(int32_t price) {
		return ((R (*)(StandartButton*, int32_t))(Il2CppBase() + 0x148ADD4))(this, price);
	}
	template <typename R = void> R SetPercent(int32_t percent) {
		return ((R (*)(StandartButton*, int32_t))(Il2CppBase() + 0x148AF2C))(this, percent);
	}
	template <typename R = void> R HidePrice() {
		return ((R (*)(StandartButton*))(Il2CppBase() + 0x148AF0C))(this);
	}
	template <typename R = void> R HidePercent() {
		return ((R (*)(StandartButton*))(Il2CppBase() + 0x148B0A0))(this);
	}
	template <typename R = void> R ShowError(Il2CppString* errorText) {
		return ((R (*)(StandartButton*, Il2CppString*))(Il2CppBase() + 0x148B0C0))(this, errorText);
	}
	template <typename R = void> R SetImageAlpha(float alpha) {
		return ((R (*)(StandartButton*, float))(Il2CppBase() + 0x148B140))(this, alpha);
	}
	template <typename R = void> R SetText(Il2CppString* text) {
		return ((R (*)(StandartButton*, Il2CppString*))(Il2CppBase() + 0x148B288))(this, text);
	}
	template <typename R = void> R SetTextAlpha(float alpha) {
		return ((R (*)(StandartButton*, float))(Il2CppBase() + 0x148B3B0))(this, alpha);
	}

};

