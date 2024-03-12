#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDBuffItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDBuffItem"));
	}

	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _tooltipProxy() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _notificationPanel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _notificationText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _timerPanel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _timerText() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& _uniqueLookup() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& _version() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& _hasToolTip() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& _lifeTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = void*> T& _rewardsCount() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& _playerPrefsKey() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(HUDBuffItem*))(Il2CppBase() + 0x144D0B8))(this);
	}
	template <typename T = uintptr_t> T get_Buff() {
		return ((T (*)(HUDBuffItem*))(Il2CppBase() + 0x144D0C0))(this);
	}
	template <typename T = void> T Init(uintptr_t tooltipView) {
		return ((T (*)(HUDBuffItem*, uintptr_t))(Il2CppBase() + 0x144D204))(this, tooltipView);
	}
	template <typename T = void*> T GetTitleAndText() {
		return ((T (*)(HUDBuffItem*))(Il2CppBase() + 0x144D318))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t entity, int64_t playerId) {
		return ((T (*)(HUDBuffItem*, uintptr_t, int64_t))(Il2CppBase() + 0x144D458))(this, entity, playerId);
	}
	template <typename T = int32_t> T CalcRewardsCount(uintptr_t entity, int64_t playerId) {
		return ((T (*)(HUDBuffItem*, uintptr_t, int64_t))(Il2CppBase() + 0x144DA28))(this, entity, playerId);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(HUDBuffItem*, uintptr_t))(Il2CppBase() + 0x144DBEC))(this, eventData);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(HUDBuffItem*))(Il2CppBase() + 0x144DCB0))(this);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(HUDBuffItem*, uintptr_t))(Il2CppBase() + 0x144DD18))(this, eventData);
	}
	template <typename T = void> T SendShowBuffInfo() {
		return ((T (*)(HUDBuffItem*))(Il2CppBase() + 0x144DDAC))(this);
	}

};

}
