#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class LocationWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& LocationImage() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& WalkButton() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& WalkTime() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& RunPanel() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& RunButton() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& RunTime() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& RunEnergy() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = AutoFarmView> R& AutoFarmView() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& TicketCount() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& LocationTypeView() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& TypeLabel() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = uintptr_t> R& TypeIcon() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& OwnerText() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& PhaseIcon() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& PhaseDesk() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& TimerText() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = TextButtonMonoBehaviour*> R& CantTravelPanel() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& CantTravelButtonAnimator() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& NeedGuildAnimator() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& ErrorAnimator() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = TextMonoBehaviour*> R& CantEnterPanel() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = LocationNeedQuests*> R& NeedQuests() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& Difficulties() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& Loots() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& LocationCaption() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& LocationIcon() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = uintptr_t> R& PanelActions() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& ResourcesParentContainer() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = uintptr_t> R& ResourcesPanel() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = RewardResourceView*> R& LocationResourceViewPrefab() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}
	template <typename R = TooltipView*> R& _tooltipViewPrefab() {
		return *(R*)((uintptr_t)this + 0x1B8);
	}
	template <typename R = TooltipTrigger*> R& _keysTotalTooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x1C0);
	}
	template <typename R = TextImageMonoBehaviour*> R& _keysTotal() {
		return *(R*)((uintptr_t)this + 0x1C8);
	}
	template <typename R = bool> R& _isMoving() {
		return *(R*)((uintptr_t)this + 0x1D0);
	}
	template <typename R = TooltipView*> R& _tooltip() {
		return *(R*)((uintptr_t)this + 0x1D8);
	}
	template <typename R = bool> R& _useModes() {
		return *(R*)((uintptr_t)this + 0x1E0);
	}
	template <typename R = double> R& _revert1e7() {
		return *(R*)((uintptr_t)this + 0x1E8);
	}
	template <typename R = int64_t> R& _lastUpdateTick() {
		return *(R*)((uintptr_t)this + 0x1F0);
	}
	template <typename R = Il2CppString*> R& _resetKey() {
		return *(R*)((uintptr_t)this + 0x1F8);
	}
	template <typename R = Il2CppString*> R& _activeKey() {
		return *(R*)((uintptr_t)this + 0x200);
	}
	template <typename R = int32_t> R& _lastPhase() {
		return *(R*)((uintptr_t)this + 0x208);
	}
	template <typename R = float> R& _durationToShowTooltip() {
		return *(R*)((uintptr_t)this + 0x20C);
	}
	template <typename R = ItemEntity*> R& _itemForTooltip() {
		return *(R*)((uintptr_t)this + 0x210);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(LocationWindow*))(Il2CppBase() + 0x171F444))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(LocationWindow*))(Il2CppBase() + 0x171F514))(this);
	}
	template <typename R = void> R ShowClassicLocationInfo(GameEntity* point, HashSet1<LocationEntity*>* locations) {
		return ((R (*)(LocationWindow*, GameEntity*, HashSet1<LocationEntity*>*))(Il2CppBase() + 0x1721800))(this, point, locations);
	}
	 static ValueTuple5<bool, bool, bool, Il2CppString*, bool>* CheckMoveEnter(GameEntity* point, GameEntity* avatar, bool hasDummy) {
		return ((ValueTuple5<bool, bool, bool, Il2CppString*, bool>* (*)(void *, GameEntity*, GameEntity*, bool))(Il2CppBase() + 0x17232D8))(0, point, avatar, hasDummy);
	}
	template <typename R = void> R ShowPointInfo(GameEntity* point, HashSet1<LocationEntity*>* locations) {
		return ((R (*)(LocationWindow*, GameEntity*, HashSet1<LocationEntity*>*))(Il2CppBase() + 0x171FC50))(this, point, locations);
	}
	template <typename R = void> R Update() {
		return ((R (*)(LocationWindow*))(Il2CppBase() + 0x1724A24))(this);
	}
	template <typename R = void> R OnClickHoldedHandler(ItemEntity* item, float duration) {
		return ((R (*)(LocationWindow*, ItemEntity*, float))(Il2CppBase() + 0x1724A80))(this, item, duration);
	}
	template <typename R = void> R OnTransportButtonPressed() {
		return ((R (*)(LocationWindow*))(Il2CppBase() + 0x1724BB8))(this);
	}
	template <typename R = void> R TryMoveToLocation() {
		return ((R (*)(LocationWindow*))(Il2CppBase() + 0x172537C))(this);
	}
	template <typename R = void> R TryRunToLocation() {
		return ((R (*)(LocationWindow*))(Il2CppBase() + 0x1725528))(this);
	}
	template <typename R = void> R UpdateActionButtons(GameEntity* point) {
		return ((R (*)(LocationWindow*, GameEntity*))(Il2CppBase() + 0x1722644))(this, point);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(LocationWindow*))(Il2CppBase() + 0x1725958))(this);
	}
	template <typename R = void> R UpdateTimer(GameEntity* point, HashSet1<LocationEntity*>* locations) {
		return ((R (*)(LocationWindow*, GameEntity*, HashSet1<LocationEntity*>*))(Il2CppBase() + 0x172448C))(this, point, locations);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(LocationWindow*, float))(Il2CppBase() + 0x17259C4))(this, deltaTime);
	}
	template <typename R = void> R OnAutoFarm() {
		return ((R (*)(LocationWindow*))(Il2CppBase() + 0x1725D58))(this);
	}
	template <typename R = void> R UpdatePhases(int64_t now) {
		return ((R (*)(LocationWindow*, int64_t))(Il2CppBase() + 0x1722B8C))(this, now);
	}
	template <typename R = void> R ShowPointInfob__51_2(uintptr_t ed) {
		return ((R (*)(LocationWindow*, uintptr_t))(Il2CppBase() + 0x172616C))(this, ed);
	}
	template <typename R = void> R UpdatePhasesb__62_1(uintptr_t ed) {
		return ((R (*)(LocationWindow*, uintptr_t))(Il2CppBase() + 0x17261A4))(this, ed);
	}

};

