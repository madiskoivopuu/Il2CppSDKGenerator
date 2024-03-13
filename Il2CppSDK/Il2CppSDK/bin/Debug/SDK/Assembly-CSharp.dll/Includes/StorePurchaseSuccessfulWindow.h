#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StorePurchaseSuccessfulWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StorePurchaseSuccessfulWindow"));
	}

	template <typename T = uintptr_t> T& CaptionText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& PurchaseSuccessfulText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& OkButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(StorePurchaseSuccessfulWindow*))(Il2CppBase() + 0x183B574))(this);
	}
	template <typename T = void> T OnButtonCloseClick() {
		return ((T (*)(StorePurchaseSuccessfulWindow*))(Il2CppBase() + 0x183C338))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(StorePurchaseSuccessfulWindow*))(Il2CppBase() + 0x183C3A4))(this);
	}

};

