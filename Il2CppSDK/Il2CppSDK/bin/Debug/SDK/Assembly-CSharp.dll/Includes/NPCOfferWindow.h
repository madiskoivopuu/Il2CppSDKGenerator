#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class NPCOfferWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPCOfferWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& CoinPanel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& NPCPackPrefab() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& NpcBubble() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& NpcPortrait() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NPCOfferWindow*))(Il2CppBase() + 0x1558550))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(NPCOfferWindow*))(Il2CppBase() + 0x15585EC))(this);
	}
	template <typename T = void> T UpdateUI() {
		return ((T (*)(NPCOfferWindow*))(Il2CppBase() + 0x155875C))(this);
	}
	template <typename T = void> T OnBuyButtonClick(int64_t storeId, int32_t priceIndex) {
		return ((T (*)(NPCOfferWindow*, int64_t, int32_t))(Il2CppBase() + 0x1559554))(this, storeId, priceIndex);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(NPCOfferWindow*, float))(Il2CppBase() + 0x1559BA0))(this, deltaTime);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(NPCOfferWindow*))(Il2CppBase() + 0x1559D10))(this);
	}

};

}
