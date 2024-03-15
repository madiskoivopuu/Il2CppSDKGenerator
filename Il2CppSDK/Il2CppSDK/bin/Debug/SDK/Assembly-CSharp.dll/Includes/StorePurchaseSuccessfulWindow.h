#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StorePurchaseSuccessfulWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StorePurchaseSuccessfulWindow"));
	}

	template <typename R = uintptr_t> R& CaptionText() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& PurchaseSuccessfulText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& OkButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(StorePurchaseSuccessfulWindow*))(Il2CppBase() + 0x183B574))(this);
	}
	template <typename R = void> R OnButtonCloseClick() {
		return ((R (*)(StorePurchaseSuccessfulWindow*))(Il2CppBase() + 0x183C338))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(StorePurchaseSuccessfulWindow*))(Il2CppBase() + 0x183C3A4))(this);
	}

};

