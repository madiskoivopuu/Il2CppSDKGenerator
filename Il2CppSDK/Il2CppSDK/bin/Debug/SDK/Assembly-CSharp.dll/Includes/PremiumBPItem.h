#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PremiumBPItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PremiumBPItem"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _captionText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _descriptionText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _priceText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _percentContainer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _percentText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _VIPPanel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _VIPText() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _TokensPanel() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _TokensImage() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _TokensText() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _xBonusPanel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _xBonusText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& _blueprint() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = UIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Action1Il2CppString*>*> T& OnButtonClick() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Bind(UIWindow* window, Store2DataEntity* storeDataEntity, Action1Il2CppString*>* onBuyButtonClick) {
		return ((T (*)(PremiumBPItem*, UIWindow*, Store2DataEntity*, Action1Il2CppString*>*))(Il2CppBase() + 0x16DF924))(this, window, storeDataEntity, onBuyButtonClick);
	}
	template <typename T = void> T ButtonClick() {
		return ((T (*)(PremiumBPItem*))(Il2CppBase() + 0x16E046C))(this);
	}

};

