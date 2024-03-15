#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class NPCOfferWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPCOfferWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = HUDStorePanel*> R& CoinPanel() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = NpcPackPanel*> R& NPCPackPrefab() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& NpcBubble() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& NpcPortrait() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(NPCOfferWindow*))(Il2CppBase() + 0x1558550))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(NPCOfferWindow*))(Il2CppBase() + 0x15585EC))(this);
	}
	template <typename R = void> R UpdateUI() {
		return ((R (*)(NPCOfferWindow*))(Il2CppBase() + 0x155875C))(this);
	}
	template <typename R = void> R OnBuyButtonClick(int64_t storeId, int32_t priceIndex) {
		return ((R (*)(NPCOfferWindow*, int64_t, int32_t))(Il2CppBase() + 0x1559554))(this, storeId, priceIndex);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(NPCOfferWindow*, float))(Il2CppBase() + 0x1559BA0))(this, deltaTime);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(NPCOfferWindow*))(Il2CppBase() + 0x1559D10))(this);
	}

};

