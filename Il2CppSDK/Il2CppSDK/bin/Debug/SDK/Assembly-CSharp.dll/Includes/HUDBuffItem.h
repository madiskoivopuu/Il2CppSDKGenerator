#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDBuffItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDBuffItem"));
	}

	template <typename R = Il2CppString*> R& _name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = TooltipProxy*> R& _tooltipProxy() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _notificationPanel() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _notificationText() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _timerPanel() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _timerText() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& _uniqueLookup() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	 Nullable1<int32_t>*& _version() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x68);
	}
	template <typename R = bool> R& _hasToolTip() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = float> R& _lifeTime() {
		return *(R*)((uintptr_t)this + 0x74);
	}
	 Nullable1<int32_t>*& _rewardsCount() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x78);
	}
	template <typename R = Il2CppString*> R& _playerPrefsKey() {
		return *(R*)((uintptr_t)this + 0x80);
	}

	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(HUDBuffItem*))(Il2CppBase() + 0x144D0B8))(this);
	}
	template <typename R = TempBuffEntity*> R get_Buff() {
		return ((R (*)(HUDBuffItem*))(Il2CppBase() + 0x144D0C0))(this);
	}
	template <typename R = void> R Init(TooltipView* tooltipView) {
		return ((R (*)(HUDBuffItem*, TooltipView*))(Il2CppBase() + 0x144D204))(this, tooltipView);
	}
	 ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>* GetTitleAndText() {
		return ((ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>* (*)(HUDBuffItem*))(Il2CppBase() + 0x144D318))(this);
	}
	template <typename R = void> R UpdateView(TempBuffEntity* entity, int64_t playerId) {
		return ((R (*)(HUDBuffItem*, TempBuffEntity*, int64_t))(Il2CppBase() + 0x144D458))(this, entity, playerId);
	}
	template <typename R = int32_t> R CalcRewardsCount(TempBuffEntity* entity, int64_t playerId) {
		return ((R (*)(HUDBuffItem*, TempBuffEntity*, int64_t))(Il2CppBase() + 0x144DA28))(this, entity, playerId);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(HUDBuffItem*, uintptr_t))(Il2CppBase() + 0x144DBEC))(this, eventData);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(HUDBuffItem*))(Il2CppBase() + 0x144DCB0))(this);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(HUDBuffItem*, uintptr_t))(Il2CppBase() + 0x144DD18))(this, eventData);
	}
	template <typename R = void> R SendShowBuffInfo() {
		return ((R (*)(HUDBuffItem*))(Il2CppBase() + 0x144DDAC))(this);
	}

};

