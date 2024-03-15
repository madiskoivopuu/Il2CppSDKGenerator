#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class LocationCustomModeWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationCustomModeWindow"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _closeBtns() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _enterButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _locationImage() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _modeText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _modeBtnsPanel() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = LocationModeButton*> R& _modeBtnPrefab() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	 Il2CppList<LocationModeButton*>*& _modeBtns() {
		return *(Il2CppList<LocationModeButton*>**)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _modeDescription() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _modeDifficultyPanel() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _difficulties() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _modeLootPanel() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _loots() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& _pvpPanel() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& _pvpText() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& _pvpIcon() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& _pricePanel() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& _priceIcon() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& _priceText() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& _infoButton() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = TooltipTrigger*> R& _keysTotalTooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = TextImageMonoBehaviour*> R& _keysTotal() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& _phaseIcon() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& _phaseDesk() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& _timerText() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& _resetButton() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = uintptr_t> R& _resetPriceIcon() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& _resetPriceText() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& _allCurrencyForResetCountText() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = TextMonoBehaviour*> R& _resetCooldownText() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& _raycastBlocker() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = LocationMode> R& _locationMode() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = bool> R& _needPayForEnterLocation() {
		return *(R*)((uintptr_t)this + 0x174);
	}
	template <typename R = int32_t> R& _priceToEnter() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = double> R& _revert1e7() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = Il2CppString*> R& _resetKey() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = Il2CppString*> R& _activeKey() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = int64_t> R& _lastUpdateTick() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = int32_t> R& _lastPhase() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = float> R& _durationToShowTooltip() {
		return *(R*)((uintptr_t)this + 0x1A4);
	}
	template <typename R = ItemEntity*> R& _itemForTooltip() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = bool> R& _isResetLocation() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}
	template <typename R = bool> R& _requestSend() {
		return *(R*)((uintptr_t)this + 0x1B1);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(LocationCustomModeWindow*))(Il2CppBase() + 0x17A0D34))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(LocationCustomModeWindow*))(Il2CppBase() + 0x17A10FC))(this);
	}
	template <typename R = void> R ShowInfo() {
		return ((R (*)(LocationCustomModeWindow*))(Il2CppBase() + 0x17A3240))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(LocationCustomModeWindow*, float))(Il2CppBase() + 0x17A3DC0))(this, deltaTime);
	}
	template <typename R = void> R ShowMode(LocationModeButton* btn) {
		return ((R (*)(LocationCustomModeWindow*, LocationModeButton*))(Il2CppBase() + 0x17A1C2C))(this, btn);
	}
	template <typename R = void> R ShowLocation(LocationEntity* location) {
		return ((R (*)(LocationCustomModeWindow*, LocationEntity*))(Il2CppBase() + 0x17A1E0C))(this, location);
	}
	template <typename R = void> R Enter() {
		return ((R (*)(LocationCustomModeWindow*))(Il2CppBase() + 0x17A518C))(this);
	}
	template <typename R = void> R ResetLocation() {
		return ((R (*)(LocationCustomModeWindow*))(Il2CppBase() + 0x17A5C78))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(LocationCustomModeWindow*))(Il2CppBase() + 0x17A61FC))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(LocationCustomModeWindow*))(Il2CppBase() + 0x17A6268))(this);
	}
	template <typename R = void> R UpdatePhases(int64_t now) {
		return ((R (*)(LocationCustomModeWindow*, int64_t))(Il2CppBase() + 0x17A3F94))(this, now);
	}
	template <typename R = void> R UpdateTimer(GameEntity* point, HashSet1<LocationEntity*>* locations) {
		return ((R (*)(LocationCustomModeWindow*, GameEntity*, HashSet1<LocationEntity*>*))(Il2CppBase() + 0x17A46DC))(this, point, locations);
	}
	template <typename R = void> R OnClickHoldedHandler(ItemEntity* item, float duration) {
		return ((R (*)(LocationCustomModeWindow*, ItemEntity*, float))(Il2CppBase() + 0x17A62C4))(this, item, duration);
	}
	template <typename R = void> R OnLocationResetResponse(LocationResetResponseData* response) {
		return ((R (*)(LocationCustomModeWindow*, LocationResetResponseData*))(Il2CppBase() + 0x17A6490))(this, response);
	}
	template <typename R = void> R UpdatePhasesb__54_1(uintptr_t ed) {
		return ((R (*)(LocationCustomModeWindow*, uintptr_t))(Il2CppBase() + 0x17A66D0))(this, ed);
	}

};

