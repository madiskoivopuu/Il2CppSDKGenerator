#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class StoreBPPremiumUnlockWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreBPPremiumUnlockWindow"));
	}

	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _captionLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _bpItems() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _battlePassView() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(StoreBPPremiumUnlockWindow*))(Il2CppBase() + 0x14162C0))(this);
	}
	template <typename T = uintptr_t> T GetStoreCategory() {
		return ((T (*)(StoreBPPremiumUnlockWindow*))(Il2CppBase() + 0x1416990))(this);
	}
	template <typename T = void> T OnButtonCloseClick() {
		return ((T (*)(StoreBPPremiumUnlockWindow*))(Il2CppBase() + 0x1416900))(this);
	}
	template <typename T = void> T OnIAPBuyButtonClick(Il2CppString* blueprint) {
		return ((T (*)(StoreBPPremiumUnlockWindow*, Il2CppString*))(Il2CppBase() + 0x1416BFC))(this, blueprint);
	}
	template <typename T = void> T OnBuy(uintptr_t data, uintptr_t price) {
		return ((T (*)(StoreBPPremiumUnlockWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1417448))(this, data, price);
	}

};

}
