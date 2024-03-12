#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDWindowBase`1" 

class HUDWindow: HUDWindowBase1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDWindow"));
	}

	template <typename T = uintptr_t> T& MainPanel() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& PlayerPvPButton() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& AutoButton() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& _customizationPanel() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& _cancelCustomizationButton() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& _saveCustomizationButton() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _customizationButton() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& _hudInventoryPanel() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& AttackButton() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& UnmountedRoot() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& MountedRoot() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& Pocket1() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& Pocket2() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& Pocket3() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& Skill1() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& Skill2() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& Mount() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& MountSkill1() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& MountSkill2() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& MountSkill3() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& _builderButton() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& InteractPanelController() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& CrouchButton() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& Joystick() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& SkillShot() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& D_Pad() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& _emojiButton() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& _emojiPanel() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& _bannerButton() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& AvatarInfo() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& AvatarStatusPanel() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& AvatarMagicsStatus() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& AvatartMetabolismStatus() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = uintptr_t> T& EnemyInfo() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = uintptr_t> T& WavesEventStatus() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = uintptr_t> T& BossTracker() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& _experienceInfo() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& ExpNotify() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& _petExperienceInfo() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& PetExpNotify() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uintptr_t> T& Minimap() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = uintptr_t> T& QuadInfo() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = uintptr_t> T& DurabilityPuppet() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = uintptr_t> T& TargetController() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& _playerClassMenu() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> T& DistrictInfo() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = uintptr_t> T& EventTimerRoot() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = uintptr_t> T& EventTimerCaptionText() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = uintptr_t> T& EventTimerText() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = uintptr_t> T& EventTimerIcon() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = uintptr_t> T& PhaseTimerColor() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = uintptr_t> T& PortalsButton() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& PortalsContainer() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uintptr_t> T& PortalsTimer() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& PortalsWaitingLeader() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _axes() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _buttons() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = int32_t> T& _lastPhase() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = float> T& _durationToShowTooltip() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = uintptr_t> T& _itemForTooltip() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = int32_t> T& _lastPortalPlayers() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = void*> T& _lastRiding() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = Il2CppString*> T& _lastMount() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = int64_t> T& _lastDeltaTicks() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = double> T& _revert1e7() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& _spectatorEffect() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = Il2CppString*> T& _districtYourTextKey() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = Il2CppString*> T& _districtPopularTextKey() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = Il2CppString*> T& _districtOwnerTextKey() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = Il2CppString*> T& _levelTextKey() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = uintptr_t> T& OnDPadTopClick() {
		return *(T*)((uintptr_t)this + 0x348);
	}

	template <typename T = uintptr_t> T get_EmojiPanel() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x1285CB0))(this);
	}
	template <typename T = void> T add_OnDPadTopClick(uintptr_t value) {
		return ((T (*)(HUDWindow*, uintptr_t))(Il2CppBase() + 0x127A0F0))(this, value);
	}
	template <typename T = void> T remove_OnDPadTopClick(uintptr_t value) {
		return ((T (*)(HUDWindow*, uintptr_t))(Il2CppBase() + 0x1285CB8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x1285D5C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x1285E68))(this);
	}
	template <typename T = void> T ChangeCustomizationMode(bool isOn) {
		return ((T (*)(HUDWindow*, bool))(Il2CppBase() + 0x1286908))(this, isOn);
	}
	template <typename T = void> T OnActionCreatedEvent(uintptr_t actionEntity) {
		return ((T (*)(HUDWindow*, uintptr_t))(Il2CppBase() + 0x1286980))(this, actionEntity);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x1286A44))(this);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(HUDWindow*, float))(Il2CppBase() + 0x1286C08))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(HUDWindow*, float))(Il2CppBase() + 0x128720C))(this, deltaTime);
	}
	template <typename T = void> T UpdatePanelsState(int64_t now, uintptr_t account, uintptr_t avatar) {
		return ((T (*)(HUDWindow*, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1288158))(this, now, account, avatar);
	}
	template <typename T = void> T UpdatePortals() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x1288614))(this);
	}
	template <typename T = void> T UpdateSkillsPanel(uintptr_t avatar) {
		return ((T (*)(HUDWindow*, uintptr_t))(Il2CppBase() + 0x12864DC))(this, avatar);
	}
	template <typename T = void> T UpdateMountSkills(uintptr_t avatar) {
		return ((T (*)(HUDWindow*, uintptr_t))(Il2CppBase() + 0x1288CEC))(this, avatar);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x12890FC))(this);
	}
	template <typename T = void> T BindAxes() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x12861E8))(this);
	}
	template <typename T = void> T ResetInput() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x1286B34))(this);
	}
	template <typename T = void> T EmitAxes() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x1286D04))(this);
	}
	template <typename T = void> T BindButtons() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x1286348))(this);
	}
	template <typename T = void> T BindLeftButtons() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x1289928))(this);
	}
	template <typename T = void> T BindBottomRightButtons() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x1289540))(this);
	}
	template <typename T = void> T OnClickHoldedHandler(uintptr_t item, float duration) {
		return ((T (*)(HUDWindow*, uintptr_t, float))(Il2CppBase() + 0x128928C))(this, item, duration);
	}
	template <typename T = float> T GetAxis(Il2CppString* axisName) {
		return ((T (*)(HUDWindow*, Il2CppString*))(Il2CppBase() + 0x128942C))(this, axisName);
	}
	template <typename T = void> T AddAxis(Il2CppString* axisName, uintptr_t axis) {
		return ((T (*)(HUDWindow*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x12893C0))(this, axisName, axis);
	}
	template <typename T = void> T OnLeft() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x12899A8))(this);
	}
	template <typename T = void> T OnRight() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x1289BF8))(this);
	}
	template <typename T = void> T OnTop() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x1289C70))(this);
	}
	template <typename T = void> T OnBottom() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x1289C84))(this);
	}
	template <typename T = void> T Awakeb__76_0() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x1289F00))(this);
	}
	template <typename T = void> T Awakeb__76_1() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x1289F78))(this);
	}
	template <typename T = void> T OnShowb__77_0() {
		return ((T (*)(HUDWindow*))(Il2CppBase() + 0x128A018))(this);
	}
	template <typename T = void> T OnUpdateDrawb__82_1(uintptr_t ed) {
		return ((T (*)(HUDWindow*, uintptr_t))(Il2CppBase() + 0x128A398))(this, ed);
	}

};

}
