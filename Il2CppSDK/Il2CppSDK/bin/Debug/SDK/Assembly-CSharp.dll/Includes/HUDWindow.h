#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDWindowBase1.h" 

class HUDWindow : public HUDWindowBase1<HUDDataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDWindow"));
	}

	template <typename R = uintptr_t> R& MainPanel() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = HUDPlayerPvPButton*> R& PlayerPvPButton() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = HUDAutoModeButton*> R& AutoButton() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& _customizationPanel() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& _cancelCustomizationButton() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = uintptr_t> R& _saveCustomizationButton() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = HUDCustomizationButton*> R& _customizationButton() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = HUDInventoryPanel*> R& _hudInventoryPanel() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = HUDInventoryButton*> R& AttackButton() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& UnmountedRoot() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& MountedRoot() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = HUDInventoryButton*> R& Pocket1() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = HUDInventoryButton*> R& Pocket2() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = HUDInventoryButton*> R& Pocket3() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = HUDInventoryButton*> R& Skill1() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = HUDInventoryButton*> R& Skill2() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = HUDInventoryButton*> R& Mount() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = HUDInventoryButton*> R& MountSkill1() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = HUDInventoryButton*> R& MountSkill2() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}
	template <typename R = HUDInventoryButton*> R& MountSkill3() {
		return *(R*)((uintptr_t)this + 0x1B8);
	}
	template <typename R = HUDBuilderButton*> R& _builderButton() {
		return *(R*)((uintptr_t)this + 0x1C0);
	}
	template <typename R = HUDInteractPanelController*> R& InteractPanelController() {
		return *(R*)((uintptr_t)this + 0x1C8);
	}
	template <typename R = HUDCrouchButton*> R& CrouchButton() {
		return *(R*)((uintptr_t)this + 0x1D0);
	}
	template <typename R = SimpleJoystick*> R& Joystick() {
		return *(R*)((uintptr_t)this + 0x1D8);
	}
	template <typename R = SimpleJoystick*> R& SkillShot() {
		return *(R*)((uintptr_t)this + 0x1E0);
	}
	template <typename R = JoystickDPad*> R& D_Pad() {
		return *(R*)((uintptr_t)this + 0x1E8);
	}
	template <typename R = HUDEmojiButton*> R& _emojiButton() {
		return *(R*)((uintptr_t)this + 0x1F0);
	}
	template <typename R = EmojiPanelController*> R& _emojiPanel() {
		return *(R*)((uintptr_t)this + 0x1F8);
	}
	template <typename R = HUDBannerButton*> R& _bannerButton() {
		return *(R*)((uintptr_t)this + 0x200);
	}
	template <typename R = HUDActorInfo*> R& AvatarInfo() {
		return *(R*)((uintptr_t)this + 0x208);
	}
	template <typename R = uintptr_t> R& AvatarStatusPanel() {
		return *(R*)((uintptr_t)this + 0x210);
	}
	template <typename R = MagicsStatus*> R& AvatarMagicsStatus() {
		return *(R*)((uintptr_t)this + 0x218);
	}
	template <typename R = MetabolismStatus*> R& AvatartMetabolismStatus() {
		return *(R*)((uintptr_t)this + 0x220);
	}
	template <typename R = HUDActorInfo*> R& EnemyInfo() {
		return *(R*)((uintptr_t)this + 0x228);
	}
	template <typename R = WavesEventStatus*> R& WavesEventStatus() {
		return *(R*)((uintptr_t)this + 0x230);
	}
	template <typename R = HUDBossTracker*> R& BossTracker() {
		return *(R*)((uintptr_t)this + 0x238);
	}
	template <typename R = HUDExperienceInfo*> R& _experienceInfo() {
		return *(R*)((uintptr_t)this + 0x240);
	}
	template <typename R = uintptr_t> R& ExpNotify() {
		return *(R*)((uintptr_t)this + 0x248);
	}
	template <typename R = HUDPetExperienceInfo*> R& _petExperienceInfo() {
		return *(R*)((uintptr_t)this + 0x250);
	}
	template <typename R = uintptr_t> R& PetExpNotify() {
		return *(R*)((uintptr_t)this + 0x258);
	}
	template <typename R = HUDMinimap*> R& Minimap() {
		return *(R*)((uintptr_t)this + 0x260);
	}
	template <typename R = HUDQuadInfo*> R& QuadInfo() {
		return *(R*)((uintptr_t)this + 0x268);
	}
	template <typename R = HUDDurabilityPuppet*> R& DurabilityPuppet() {
		return *(R*)((uintptr_t)this + 0x270);
	}
	template <typename R = HUDSelectTargetController*> R& TargetController() {
		return *(R*)((uintptr_t)this + 0x278);
	}
	template <typename R = PlayerClassesMenu*> R& _playerClassMenu() {
		return *(R*)((uintptr_t)this + 0x280);
	}
	template <typename R = HUDDistrictInfo*> R& DistrictInfo() {
		return *(R*)((uintptr_t)this + 0x288);
	}
	template <typename R = uintptr_t> R& EventTimerRoot() {
		return *(R*)((uintptr_t)this + 0x290);
	}
	template <typename R = uintptr_t> R& EventTimerCaptionText() {
		return *(R*)((uintptr_t)this + 0x298);
	}
	template <typename R = uintptr_t> R& EventTimerText() {
		return *(R*)((uintptr_t)this + 0x2A0);
	}
	template <typename R = uintptr_t> R& EventTimerIcon() {
		return *(R*)((uintptr_t)this + 0x2A8);
	}
	template <typename R = uintptr_t> R& PhaseTimerColor() {
		return *(R*)((uintptr_t)this + 0x2B0);
	}
	template <typename R = uintptr_t> R& PortalsButton() {
		return *(R*)((uintptr_t)this + 0x2C0);
	}
	template <typename R = uintptr_t> R& PortalsContainer() {
		return *(R*)((uintptr_t)this + 0x2C8);
	}
	template <typename R = uintptr_t> R& PortalsTimer() {
		return *(R*)((uintptr_t)this + 0x2D0);
	}
	template <typename R = uintptr_t> R& PortalsWaitingLeader() {
		return *(R*)((uintptr_t)this + 0x2D8);
	}
	 Il2CppDictionary<Il2CppString*, IInputAxis*>*& _axes() {
		return *(Il2CppDictionary<Il2CppString*, IInputAxis*>**)((uintptr_t)this + 0x2E0);
	}
	 Il2CppDictionary<Il2CppString*, IInputButton*>*& _buttons() {
		return *(Il2CppDictionary<Il2CppString*, IInputButton*>**)((uintptr_t)this + 0x2E8);
	}
	template <typename R = int32_t> R& _lastPhase() {
		return *(R*)((uintptr_t)this + 0x2F0);
	}
	template <typename R = float> R& _durationToShowTooltip() {
		return *(R*)((uintptr_t)this + 0x2F4);
	}
	template <typename R = ItemEntity*> R& _itemForTooltip() {
		return *(R*)((uintptr_t)this + 0x2F8);
	}
	template <typename R = int32_t> R& _lastPortalPlayers() {
		return *(R*)((uintptr_t)this + 0x300);
	}
	 Nullable1bool>*& _lastRiding() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x304);
	}
	template <typename R = Il2CppString*> R& _lastMount() {
		return *(R*)((uintptr_t)this + 0x308);
	}
	template <typename R = int64_t> R& _lastDeltaTicks() {
		return *(R*)((uintptr_t)this + 0x310);
	}
	template <typename R = double> R& _revert1e7() {
		return *(R*)((uintptr_t)this + 0x318);
	}
	template <typename R = uintptr_t> R& _spectatorEffect() {
		return *(R*)((uintptr_t)this + 0x320);
	}
	template <typename R = Il2CppString*> R& _districtYourTextKey() {
		return *(R*)((uintptr_t)this + 0x328);
	}
	template <typename R = Il2CppString*> R& _districtPopularTextKey() {
		return *(R*)((uintptr_t)this + 0x330);
	}
	template <typename R = Il2CppString*> R& _districtOwnerTextKey() {
		return *(R*)((uintptr_t)this + 0x338);
	}
	template <typename R = Il2CppString*> R& _levelTextKey() {
		return *(R*)((uintptr_t)this + 0x340);
	}
	template <typename R = uintptr_t> R& OnDPadTopClick() {
		return *(R*)((uintptr_t)this + 0x348);
	}

	template <typename R = EmojiPanelController*> R get_EmojiPanel() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x1285CB0))(this);
	}
	template <typename R = void> R add_OnDPadTopClick(uintptr_t value) {
		return ((R (*)(HUDWindow*, uintptr_t))(Il2CppBase() + 0x127A0F0))(this, value);
	}
	template <typename R = void> R remove_OnDPadTopClick(uintptr_t value) {
		return ((R (*)(HUDWindow*, uintptr_t))(Il2CppBase() + 0x1285CB8))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x1285D5C))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x1285E68))(this);
	}
	template <typename R = void> R ChangeCustomizationMode(bool isOn) {
		return ((R (*)(HUDWindow*, bool))(Il2CppBase() + 0x1286908))(this, isOn);
	}
	template <typename R = void> R OnActionCreatedEvent(ActionEntity* actionEntity) {
		return ((R (*)(HUDWindow*, ActionEntity*))(Il2CppBase() + 0x1286980))(this, actionEntity);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x1286A44))(this);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(HUDWindow*, float))(Il2CppBase() + 0x1286C08))(this, deltaTime);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(HUDWindow*, float))(Il2CppBase() + 0x128720C))(this, deltaTime);
	}
	template <typename R = void> R UpdatePanelsState(int64_t now, AccountEntity* account, GameEntity* avatar) {
		return ((R (*)(HUDWindow*, int64_t, AccountEntity*, GameEntity*))(Il2CppBase() + 0x1288158))(this, now, account, avatar);
	}
	template <typename R = void> R UpdatePortals() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x1288614))(this);
	}
	template <typename R = void> R UpdateSkillsPanel(GameEntity* avatar) {
		return ((R (*)(HUDWindow*, GameEntity*))(Il2CppBase() + 0x12864DC))(this, avatar);
	}
	template <typename R = void> R UpdateMountSkills(GameEntity* avatar) {
		return ((R (*)(HUDWindow*, GameEntity*))(Il2CppBase() + 0x1288CEC))(this, avatar);
	}
	template <typename R = void> R LateUpdate() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x12890FC))(this);
	}
	template <typename R = void> R BindAxes() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x12861E8))(this);
	}
	template <typename R = void> R ResetInput() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x1286B34))(this);
	}
	template <typename R = void> R EmitAxes() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x1286D04))(this);
	}
	template <typename R = void> R BindButtons() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x1286348))(this);
	}
	template <typename R = void> R BindLeftButtons() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x1289928))(this);
	}
	template <typename R = void> R BindBottomRightButtons() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x1289540))(this);
	}
	template <typename R = void> R OnClickHoldedHandler(ItemEntity* item, float duration) {
		return ((R (*)(HUDWindow*, ItemEntity*, float))(Il2CppBase() + 0x128928C))(this, item, duration);
	}
	template <typename R = float> R GetAxis(Il2CppString* axisName) {
		return ((R (*)(HUDWindow*, Il2CppString*))(Il2CppBase() + 0x128942C))(this, axisName);
	}
	template <typename R = void> R AddAxis(Il2CppString* axisName, IInputAxis* axis) {
		return ((R (*)(HUDWindow*, Il2CppString*, IInputAxis*))(Il2CppBase() + 0x12893C0))(this, axisName, axis);
	}
	template <typename R = void> R OnLeft() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x12899A8))(this);
	}
	template <typename R = void> R OnRight() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x1289BF8))(this);
	}
	template <typename R = void> R OnTop() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x1289C70))(this);
	}
	template <typename R = void> R OnBottom() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x1289C84))(this);
	}
	template <typename R = void> R Awakeb__76_0() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x1289F00))(this);
	}
	template <typename R = void> R Awakeb__76_1() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x1289F78))(this);
	}
	template <typename R = void> R OnShowb__77_0() {
		return ((R (*)(HUDWindow*))(Il2CppBase() + 0x128A018))(this);
	}
	template <typename R = void> R OnUpdateDrawb__82_1(uintptr_t ed) {
		return ((R (*)(HUDWindow*, uintptr_t))(Il2CppBase() + 0x128A398))(this, ed);
	}

};

