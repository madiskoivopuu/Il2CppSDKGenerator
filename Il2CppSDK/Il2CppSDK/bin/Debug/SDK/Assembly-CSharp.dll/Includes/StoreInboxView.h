#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreInboxView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreInboxView"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = TooltipTrigger*> R& TooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& TimeLeft() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& TimeLeftText() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& SaleLabel() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& DurabilityPanel() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& Durability() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = StandartButton*> R& ClaimButton() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = StandartButton*> R& OpenButton() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = StandartButton*> R& ReadButton() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int64_t> R& _messageId() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	 Action2<int64_t, Action1<Il2CppString*>*>*& _onOpenButtonClick() {
		return *(Action2<int64_t, Action1<Il2CppString*>*>**)((uintptr_t)this + 0x80);
	}
	 Action1<int64_t>*& _onExpired() {
		return *(Action1<int64_t>**)((uintptr_t)this + 0x88);
	}
	template <typename R = int64_t> R& _expirationTime() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> R& _scrollIndex() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _rarityViews() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(StoreInboxView*))(Il2CppBase() + 0x14235D4))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(StoreInboxView*))(Il2CppBase() + 0x14237F4))(this);
	}
	template <typename R = void> R OnStoreInboxWindowWasUpdated() {
		return ((R (*)(StoreInboxView*))(Il2CppBase() + 0x1423940))(this);
	}
	template <typename R = void> R Init(int64_t messageId, Action2<int64_t, Action1<Il2CppString*>*>* onOpenButtonClick, Action1<int64_t>* onExpired, TooltipView* tooltip) {
		return ((R (*)(StoreInboxView*, int64_t, Action2<int64_t, Action1<Il2CppString*>*>*, Action1<int64_t>*, TooltipView*))(Il2CppBase() + 0x14239E8))(this, messageId, onOpenButtonClick, onExpired, tooltip);
	}
	template <typename R = void> R OnClaimBuyButtonClick() {
		return ((R (*)(StoreInboxView*))(Il2CppBase() + 0x14241A0))(this);
	}
	template <typename R = void> R OnOpenButtonClick() {
		return ((R (*)(StoreInboxView*))(Il2CppBase() + 0x1424458))(this);
	}
	template <typename R = void> R OnReadButtonClick() {
		return ((R (*)(StoreInboxView*))(Il2CppBase() + 0x14246A0))(this);
	}
	template <typename R = void> R OnError(StandartButton* btn, Il2CppString* error) {
		return ((R (*)(StoreInboxView*, StandartButton*, Il2CppString*))(Il2CppBase() + 0x14248E8))(this, btn, error);
	}
	template <typename R = void> R Update() {
		return ((R (*)(StoreInboxView*))(Il2CppBase() + 0x1424928))(this);
	}
	template <typename R = void> R onUpdateItem(int32_t index) {
		return ((R (*)(StoreInboxView*, int32_t))(Il2CppBase() + 0x1424BEC))(this, index);
	}
	template <typename R = void> R OnClaimBuyButtonClickb__22_0(Il2CppString* error) {
		return ((R (*)(StoreInboxView*, Il2CppString*))(Il2CppBase() + 0x1424CAC))(this, error);
	}
	template <typename R = void> R OnOpenButtonClickb__23_0(Il2CppString* error) {
		return ((R (*)(StoreInboxView*, Il2CppString*))(Il2CppBase() + 0x1424CBC))(this, error);
	}
	template <typename R = void> R OnReadButtonClickb__24_0(Il2CppString* error) {
		return ((R (*)(StoreInboxView*, Il2CppString*))(Il2CppBase() + 0x1424CCC))(this, error);
	}

};

