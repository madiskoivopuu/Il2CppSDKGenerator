#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StoreBPPremiumUnlockWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreBPPremiumUnlockWindow"));
	}

	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _captionLabel() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppArray<PremiumBPItem*>*> R& _bpItems() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = BattlePassViewComponent*> R& _battlePassView() {
		return *(R*)((uintptr_t)this + 0x90);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(StoreBPPremiumUnlockWindow*))(Il2CppBase() + 0x14162C0))(this);
	}
	template <typename R = StoreCategory*> R GetStoreCategory() {
		return ((R (*)(StoreBPPremiumUnlockWindow*))(Il2CppBase() + 0x1416990))(this);
	}
	template <typename R = void> R OnButtonCloseClick() {
		return ((R (*)(StoreBPPremiumUnlockWindow*))(Il2CppBase() + 0x1416900))(this);
	}
	template <typename R = void> R OnIAPBuyButtonClick(Il2CppString* blueprint) {
		return ((R (*)(StoreBPPremiumUnlockWindow*, Il2CppString*))(Il2CppBase() + 0x1416BFC))(this, blueprint);
	}
	template <typename R = void> R OnBuy(Store2DataEntity* data, Price* price) {
		return ((R (*)(StoreBPPremiumUnlockWindow*, Store2DataEntity*, Price*))(Il2CppBase() + 0x1417448))(this, data, price);
	}

};

