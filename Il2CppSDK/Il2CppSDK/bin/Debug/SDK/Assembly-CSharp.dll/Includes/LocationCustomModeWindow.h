#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class LocationCustomModeWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationCustomModeWindow"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _closeBtns() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _enterButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _locationImage() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _modeText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _modeBtnsPanel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _modeBtnPrefab() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _modeBtns() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _modeDescription() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _modeDifficultyPanel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _difficulties() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _modeLootPanel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _loots() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _pvpPanel() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _pvpText() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _pvpIcon() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _pricePanel() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _priceIcon() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _priceText() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _infoButton() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _keysTotalTooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _keysTotal() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _phaseIcon() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& _phaseDesk() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& _timerText() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& _resetButton() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& _resetPriceIcon() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _resetPriceText() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& _allCurrencyForResetCountText() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& _resetCooldownText() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& _raycastBlocker() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _locationMode() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = bool> T& _needPayForEnterLocation() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = int32_t> T& _priceToEnter() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = double> T& _revert1e7() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppString*> T& _resetKey() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppString*> T& _activeKey() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = int64_t> T& _lastUpdateTick() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = int32_t> T& _lastPhase() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& _durationToShowTooltip() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& _itemForTooltip() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& _isResetLocation() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& _requestSend() {
		return *(T*)((uintptr_t)this + 0x1B1);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LocationCustomModeWindow*))(Il2CppBase() + 0x17A0D34))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(LocationCustomModeWindow*))(Il2CppBase() + 0x17A10FC))(this);
	}
	template <typename T = void> T ShowInfo() {
		return ((T (*)(LocationCustomModeWindow*))(Il2CppBase() + 0x17A3240))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(LocationCustomModeWindow*, float))(Il2CppBase() + 0x17A3DC0))(this, deltaTime);
	}
	template <typename T = void> T ShowMode(uintptr_t btn) {
		return ((T (*)(LocationCustomModeWindow*, uintptr_t))(Il2CppBase() + 0x17A1C2C))(this, btn);
	}
	template <typename T = void> T ShowLocation(uintptr_t location) {
		return ((T (*)(LocationCustomModeWindow*, uintptr_t))(Il2CppBase() + 0x17A1E0C))(this, location);
	}
	template <typename T = void> T Enter() {
		return ((T (*)(LocationCustomModeWindow*))(Il2CppBase() + 0x17A518C))(this);
	}
	template <typename T = void> T ResetLocation() {
		return ((T (*)(LocationCustomModeWindow*))(Il2CppBase() + 0x17A5C78))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LocationCustomModeWindow*))(Il2CppBase() + 0x17A61FC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LocationCustomModeWindow*))(Il2CppBase() + 0x17A6268))(this);
	}
	template <typename T = void> T UpdatePhases(int64_t now) {
		return ((T (*)(LocationCustomModeWindow*, int64_t))(Il2CppBase() + 0x17A3F94))(this, now);
	}
	template <typename T = void> T UpdateTimer(uintptr_t point, void* locations) {
		return ((T (*)(LocationCustomModeWindow*, uintptr_t, void*))(Il2CppBase() + 0x17A46DC))(this, point, locations);
	}
	template <typename T = void> T OnClickHoldedHandler(uintptr_t item, float duration) {
		return ((T (*)(LocationCustomModeWindow*, uintptr_t, float))(Il2CppBase() + 0x17A62C4))(this, item, duration);
	}
	template <typename T = void> T OnLocationResetResponse(uintptr_t response) {
		return ((T (*)(LocationCustomModeWindow*, uintptr_t))(Il2CppBase() + 0x17A6490))(this, response);
	}
	template <typename T = void> T UpdatePhasesb__54_1(uintptr_t ed) {
		return ((T (*)(LocationCustomModeWindow*, uintptr_t))(Il2CppBase() + 0x17A66D0))(this, ed);
	}

};

}
