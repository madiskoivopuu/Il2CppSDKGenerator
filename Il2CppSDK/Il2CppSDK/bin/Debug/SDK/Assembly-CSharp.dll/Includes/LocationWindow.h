#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class LocationWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& Caption() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LocationImage() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& WalkButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& WalkTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& RunPanel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RunButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& RunTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& RunEnergy() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = AutoFarmView*> T& AutoFarmView() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& TicketCount() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& LocationTypeView() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& TypeLabel() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& TypeIcon() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& OwnerText() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& PhaseIcon() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& PhaseDesk() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& TimerText() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = TextButtonMonoBehaviour*> T& CantTravelPanel() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& CantTravelButtonAnimator() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& NeedGuildAnimator() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& ErrorAnimator() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = TextMonoBehaviour*> T& CantEnterPanel() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = LocationNeedQuests*> T& NeedQuests() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Difficulties() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Loots() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& LocationCaption() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& LocationIcon() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& PanelActions() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& ResourcesParentContainer() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& ResourcesPanel() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = RewardResourceView*> T& LocationResourceViewPrefab() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = TooltipView*> T& _tooltipViewPrefab() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = TooltipTrigger*> T& _keysTotalTooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = TextImageMonoBehaviour*> T& _keysTotal() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = bool> T& _isMoving() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = TooltipView*> T& _tooltip() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = bool> T& _useModes() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = double> T& _revert1e7() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = int64_t> T& _lastUpdateTick() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = Il2CppString*> T& _resetKey() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = Il2CppString*> T& _activeKey() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = int32_t> T& _lastPhase() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = float> T& _durationToShowTooltip() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = ItemEntity*> T& _itemForTooltip() {
		return *(T*)((uintptr_t)this + 0x210);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LocationWindow*))(Il2CppBase() + 0x171F444))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(LocationWindow*))(Il2CppBase() + 0x171F514))(this);
	}
	template <typename T = void> T ShowClassicLocationInfo(GameEntity* point, HashSet1LocationEntity*>* locations) {
		return ((T (*)(LocationWindow*, GameEntity*, HashSet1LocationEntity*>*))(Il2CppBase() + 0x1721800))(this, point, locations);
	}
	template <typename T = ValueTuple5bool, bool, bool, Il2CppString*, bool>*> static T CheckMoveEnter(GameEntity* point, GameEntity* avatar, bool hasDummy) {
		return ((T (*)(void *, GameEntity*, GameEntity*, bool))(Il2CppBase() + 0x17232D8))(0, point, avatar, hasDummy);
	}
	template <typename T = void> T ShowPointInfo(GameEntity* point, HashSet1LocationEntity*>* locations) {
		return ((T (*)(LocationWindow*, GameEntity*, HashSet1LocationEntity*>*))(Il2CppBase() + 0x171FC50))(this, point, locations);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LocationWindow*))(Il2CppBase() + 0x1724A24))(this);
	}
	template <typename T = void> T OnClickHoldedHandler(ItemEntity* item, float duration) {
		return ((T (*)(LocationWindow*, ItemEntity*, float))(Il2CppBase() + 0x1724A80))(this, item, duration);
	}
	template <typename T = void> T OnTransportButtonPressed() {
		return ((T (*)(LocationWindow*))(Il2CppBase() + 0x1724BB8))(this);
	}
	template <typename T = void> T TryMoveToLocation() {
		return ((T (*)(LocationWindow*))(Il2CppBase() + 0x172537C))(this);
	}
	template <typename T = void> T TryRunToLocation() {
		return ((T (*)(LocationWindow*))(Il2CppBase() + 0x1725528))(this);
	}
	template <typename T = void> T UpdateActionButtons(GameEntity* point) {
		return ((T (*)(LocationWindow*, GameEntity*))(Il2CppBase() + 0x1722644))(this, point);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LocationWindow*))(Il2CppBase() + 0x1725958))(this);
	}
	template <typename T = void> T UpdateTimer(GameEntity* point, HashSet1LocationEntity*>* locations) {
		return ((T (*)(LocationWindow*, GameEntity*, HashSet1LocationEntity*>*))(Il2CppBase() + 0x172448C))(this, point, locations);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(LocationWindow*, float))(Il2CppBase() + 0x17259C4))(this, deltaTime);
	}
	template <typename T = void> T OnAutoFarm() {
		return ((T (*)(LocationWindow*))(Il2CppBase() + 0x1725D58))(this);
	}
	template <typename T = void> T UpdatePhases(int64_t now) {
		return ((T (*)(LocationWindow*, int64_t))(Il2CppBase() + 0x1722B8C))(this, now);
	}
	template <typename T = void> T ShowPointInfob__51_2(uintptr_t ed) {
		return ((T (*)(LocationWindow*, uintptr_t))(Il2CppBase() + 0x172616C))(this, ed);
	}
	template <typename T = void> T UpdatePhasesb__62_1(uintptr_t ed) {
		return ((T (*)(LocationWindow*, uintptr_t))(Il2CppBase() + 0x17261A4))(this, ed);
	}

};

