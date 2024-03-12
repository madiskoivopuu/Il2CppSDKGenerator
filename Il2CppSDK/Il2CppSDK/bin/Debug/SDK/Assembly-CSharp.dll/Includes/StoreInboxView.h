#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreInboxView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreInboxView"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& TooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& TimeLeft() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TimeLeftText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& SaleLabel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& DurabilityPanel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& Durability() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ClaimButton() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& OpenButton() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ReadButton() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int64_t> T& _messageId() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& _onOpenButtonClick() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> T& _onExpired() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int64_t> T& _expirationTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _scrollIndex() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rarityViews() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(StoreInboxView*))(Il2CppBase() + 0x14235D4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(StoreInboxView*))(Il2CppBase() + 0x14237F4))(this);
	}
	template <typename T = void> T OnStoreInboxWindowWasUpdated() {
		return ((T (*)(StoreInboxView*))(Il2CppBase() + 0x1423940))(this);
	}
	template <typename T = void> T Init(int64_t messageId, void* onOpenButtonClick, void* onExpired, uintptr_t tooltip) {
		return ((T (*)(StoreInboxView*, int64_t, void*, void*, uintptr_t))(Il2CppBase() + 0x14239E8))(this, messageId, onOpenButtonClick, onExpired, tooltip);
	}
	template <typename T = void> T OnClaimBuyButtonClick() {
		return ((T (*)(StoreInboxView*))(Il2CppBase() + 0x14241A0))(this);
	}
	template <typename T = void> T OnOpenButtonClick() {
		return ((T (*)(StoreInboxView*))(Il2CppBase() + 0x1424458))(this);
	}
	template <typename T = void> T OnReadButtonClick() {
		return ((T (*)(StoreInboxView*))(Il2CppBase() + 0x14246A0))(this);
	}
	template <typename T = void> T OnError(uintptr_t btn, Il2CppString* error) {
		return ((T (*)(StoreInboxView*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14248E8))(this, btn, error);
	}
	template <typename T = void> T Update() {
		return ((T (*)(StoreInboxView*))(Il2CppBase() + 0x1424928))(this);
	}
	template <typename T = void> T onUpdateItem(int32_t index) {
		return ((T (*)(StoreInboxView*, int32_t))(Il2CppBase() + 0x1424BEC))(this, index);
	}
	template <typename T = void> T OnClaimBuyButtonClickb__22_0(Il2CppString* error) {
		return ((T (*)(StoreInboxView*, Il2CppString*))(Il2CppBase() + 0x1424CAC))(this, error);
	}
	template <typename T = void> T OnOpenButtonClickb__23_0(Il2CppString* error) {
		return ((T (*)(StoreInboxView*, Il2CppString*))(Il2CppBase() + 0x1424CBC))(this, error);
	}
	template <typename T = void> T OnReadButtonClickb__24_0(Il2CppString* error) {
		return ((T (*)(StoreInboxView*, Il2CppString*))(Il2CppBase() + 0x1424CCC))(this, error);
	}

};

}
