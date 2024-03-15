#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyEntity"));
	}

	template <typename R = AutoStartComponent*> static R& autoStartComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = AvatarComponent*> static R& avatarComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143ADB8))(this);
	}
	template <typename R = ApproveTimeComponent*> R get_approveTime() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143B140))(this);
	}
	template <typename R = bool> R get_hasApproveTime() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143B1C8))(this);
	}
	template <typename R = void> R AddApproveTime(int64_t newValue) {
		return ((R (*)(LobbyEntity*, int64_t))(Il2CppBase() + 0x143B1D4))(this, newValue);
	}
	template <typename R = void> R ReplaceApproveTime(int64_t newValue) {
		return ((R (*)(LobbyEntity*, int64_t))(Il2CppBase() + 0x143B2D8))(this, newValue);
	}
	template <typename R = void> R RemoveApproveTime() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143B3DC))(this);
	}
	template <typename R = bool> R get_isAutoStart() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143B3E8))(this);
	}
	template <typename R = void> R set_isAutoStart(bool value) {
		return ((R (*)(LobbyEntity*, bool))(Il2CppBase() + 0x143B3F4))(this, value);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143B50C))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(LobbyEntity*, bool))(Il2CppBase() + 0x1438E58))(this, value);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143B024))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143B018))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(LobbyEntity*, Il2CppString*))(Il2CppBase() + 0x143B518))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(LobbyEntity*, Il2CppString*))(Il2CppBase() + 0x143B62C))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143B740))(this);
	}
	template <typename R = DamageCoefByGradeComponent*> R get_damageCoefByGrade() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143A054))(this);
	}
	template <typename R = bool> R get_hasDamageCoefByGrade() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143B74C))(this);
	}
	template <typename R = void> R AddDamageCoefByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(LobbyEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x143B758))(this, newValues);
	}
	template <typename R = void> R ReplaceDamageCoefByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(LobbyEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x143B86C))(this, newValues);
	}
	template <typename R = void> R RemoveDamageCoefByGrade() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143B980))(this);
	}
	template <typename R = DamageCoefComponent*> R get_damageCoef() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143B98C))(this);
	}
	template <typename R = bool> R get_hasDamageCoef() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143BA14))(this);
	}
	template <typename R = void> R AddDamageCoef(float newValue) {
		return ((R (*)(LobbyEntity*, float))(Il2CppBase() + 0x143BA20))(this, newValue);
	}
	template <typename R = void> R ReplaceDamageCoef(float newValue) {
		return ((R (*)(LobbyEntity*, float))(Il2CppBase() + 0x143BB24))(this, newValue);
	}
	template <typename R = void> R RemoveDamageCoef() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143BC28))(this);
	}
	template <typename R = DamageStepComponent*> R get_damageStep() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x1439F44))(this);
	}
	template <typename R = bool> R get_hasDamageStep() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143BC34))(this);
	}
	template <typename R = void> R AddDamageStep(float newValue) {
		return ((R (*)(LobbyEntity*, float))(Il2CppBase() + 0x143BC40))(this, newValue);
	}
	template <typename R = void> R ReplaceDamageStep(float newValue) {
		return ((R (*)(LobbyEntity*, float))(Il2CppBase() + 0x143BD44))(this, newValue);
	}
	template <typename R = void> R RemoveDamageStep() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143BE48))(this);
	}
	template <typename R = DifficultyStepsComponent*> R get_difficultySteps() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x1439EBC))(this);
	}
	template <typename R = bool> R get_hasDifficultySteps() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143BE54))(this);
	}
	template <typename R = void> R AddDifficultySteps(Il2CppArray<float>* newValues) {
		return ((R (*)(LobbyEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x143BE60))(this, newValues);
	}
	template <typename R = void> R ReplaceDifficultySteps(Il2CppArray<float>* newValues) {
		return ((R (*)(LobbyEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x143BF74))(this, newValues);
	}
	template <typename R = void> R RemoveDifficultySteps() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143C088))(this);
	}
	template <typename R = EnterQuestComponent*> R get_enterQuest() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143C094))(this);
	}
	template <typename R = bool> R get_hasEnterQuest() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143C11C))(this);
	}
	template <typename R = void> R AddEnterQuest(Il2CppString* newName) {
		return ((R (*)(LobbyEntity*, Il2CppString*))(Il2CppBase() + 0x143C128))(this, newName);
	}
	template <typename R = void> R ReplaceEnterQuest(Il2CppString* newName) {
		return ((R (*)(LobbyEntity*, Il2CppString*))(Il2CppBase() + 0x143C23C))(this, newName);
	}
	template <typename R = void> R RemoveEnterQuest() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143C350))(this);
	}
	template <typename R = HealthStepComponent*> R get_healthStep() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x1439FCC))(this);
	}
	template <typename R = bool> R get_hasHealthStep() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143C35C))(this);
	}
	template <typename R = void> R AddHealthStep(float newValue) {
		return ((R (*)(LobbyEntity*, float))(Il2CppBase() + 0x143C368))(this, newValue);
	}
	template <typename R = void> R ReplaceHealthStep(float newValue) {
		return ((R (*)(LobbyEntity*, float))(Il2CppBase() + 0x143C46C))(this, newValue);
	}
	template <typename R = void> R RemoveHealthStep() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143C570))(this);
	}
	template <typename R = LobbyActiveTimeComponent*> R get_lobbyActiveTime() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143C57C))(this);
	}
	template <typename R = bool> R get_hasLobbyActiveTime() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143C604))(this);
	}
	template <typename R = void> R AddLobbyActiveTime(int32_t newStartOffset, int32_t newOpenDuration, int32_t newCloseDuration, int32_t newNotifyBeforeOpen, int32_t newNotifyBeforeClose, Il2CppString* newBeforeOpenText, Il2CppString* newOnOpenText, Il2CppString* newBeforeCloseText, Il2CppString* newTempBuff) {
		return ((R (*)(LobbyEntity*, int32_t, int32_t, int32_t, int32_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x143C610))(this, newStartOffset, newOpenDuration, newCloseDuration, newNotifyBeforeOpen, newNotifyBeforeClose, newBeforeOpenText, newOnOpenText, newBeforeCloseText, newTempBuff);
	}
	template <typename R = void> R ReplaceLobbyActiveTime(int32_t newStartOffset, int32_t newOpenDuration, int32_t newCloseDuration, int32_t newNotifyBeforeOpen, int32_t newNotifyBeforeClose, Il2CppString* newBeforeOpenText, Il2CppString* newOnOpenText, Il2CppString* newBeforeCloseText, Il2CppString* newTempBuff) {
		return ((R (*)(LobbyEntity*, int32_t, int32_t, int32_t, int32_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x143C7A0))(this, newStartOffset, newOpenDuration, newCloseDuration, newNotifyBeforeOpen, newNotifyBeforeClose, newBeforeOpenText, newOnOpenText, newBeforeCloseText, newTempBuff);
	}
	template <typename R = void> R RemoveLobbyActiveTime() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143C930))(this);
	}
	template <typename R = LobbyIdComponent*> R get_lobbyId() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143B0B8))(this);
	}
	template <typename R = bool> R get_hasLobbyId() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143B0AC))(this);
	}
	template <typename R = void> R AddLobbyId(int64_t newId) {
		return ((R (*)(LobbyEntity*, int64_t))(Il2CppBase() + 0x1438A18))(this, newId);
	}
	template <typename R = void> R ReplaceLobbyId(int64_t newId) {
		return ((R (*)(LobbyEntity*, int64_t))(Il2CppBase() + 0x143C93C))(this, newId);
	}
	template <typename R = void> R RemoveLobbyId() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143CA40))(this);
	}
	template <typename R = LobbyPlayersComponent*> R get_lobbyPlayers() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143CA4C))(this);
	}
	template <typename R = bool> R get_hasLobbyPlayers() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143CAD4))(this);
	}
	template <typename R = void> R AddLobbyPlayers(Il2CppArray<PlayerState>* newList) {
		return ((R (*)(LobbyEntity*, Il2CppArray<PlayerState>*))(Il2CppBase() + 0x143CAE0))(this, newList);
	}
	template <typename R = void> R ReplaceLobbyPlayers(Il2CppArray<PlayerState>* newList) {
		return ((R (*)(LobbyEntity*, Il2CppArray<PlayerState>*))(Il2CppBase() + 0x143CBF4))(this, newList);
	}
	template <typename R = void> R RemoveLobbyPlayers() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143CD08))(this);
	}
	template <typename R = LobbyTypeComponent*> R get_lobbyType() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143A934))(this);
	}
	template <typename R = bool> R get_hasLobbyType() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143CD14))(this);
	}
	template <typename R = void> R AddLobbyType(LobbyType newType) {
		return ((R (*)(LobbyEntity*, LobbyType))(Il2CppBase() + 0x143CD20))(this, newType);
	}
	template <typename R = void> R ReplaceLobbyType(LobbyType newType) {
		return ((R (*)(LobbyEntity*, LobbyType))(Il2CppBase() + 0x143CE24))(this, newType);
	}
	template <typename R = void> R RemoveLobbyType() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143CF28))(this);
	}
	template <typename R = LobbyWorldComponent*> R get_lobbyWorld() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143CF34))(this);
	}
	template <typename R = bool> R get_hasLobbyWorld() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143CFBC))(this);
	}
	template <typename R = void> R AddLobbyWorld(int32_t newValue) {
		return ((R (*)(LobbyEntity*, int32_t))(Il2CppBase() + 0x143CFC8))(this, newValue);
	}
	template <typename R = void> R ReplaceLobbyWorld(int32_t newValue) {
		return ((R (*)(LobbyEntity*, int32_t))(Il2CppBase() + 0x143D0CC))(this, newValue);
	}
	template <typename R = void> R RemoveLobbyWorld() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143D1D0))(this);
	}
	template <typename R = MaxHealthCoefByGradeComponent*> R get_maxHealthCoefByGrade() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143A0DC))(this);
	}
	template <typename R = bool> R get_hasMaxHealthCoefByGrade() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143D1DC))(this);
	}
	template <typename R = void> R AddMaxHealthCoefByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(LobbyEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x143D1E8))(this, newValues);
	}
	template <typename R = void> R ReplaceMaxHealthCoefByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(LobbyEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x143D2FC))(this, newValues);
	}
	template <typename R = void> R RemoveMaxHealthCoefByGrade() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143D410))(this);
	}
	template <typename R = MaxHealthCoefComponent*> R get_maxHealthCoef() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143D41C))(this);
	}
	template <typename R = bool> R get_hasMaxHealthCoef() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143D4A4))(this);
	}
	template <typename R = void> R AddMaxHealthCoef(float newValue) {
		return ((R (*)(LobbyEntity*, float))(Il2CppBase() + 0x143D4B0))(this, newValue);
	}
	template <typename R = void> R ReplaceMaxHealthCoef(float newValue) {
		return ((R (*)(LobbyEntity*, float))(Il2CppBase() + 0x143D5B4))(this, newValue);
	}
	template <typename R = void> R RemoveMaxHealthCoef() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143D6B8))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143D6C4))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143D74C))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(LobbyEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x143D758))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(LobbyEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x143D86C))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143D980))(this);
	}
	template <typename R = OverhaulDamageCoefComponent*> R get_overhaulDamageCoef() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143A164))(this);
	}
	template <typename R = bool> R get_hasOverhaulDamageCoef() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143D98C))(this);
	}
	template <typename R = void> R AddOverhaulDamageCoef(float newValue) {
		return ((R (*)(LobbyEntity*, float))(Il2CppBase() + 0x143D998))(this, newValue);
	}
	template <typename R = void> R ReplaceOverhaulDamageCoef(float newValue) {
		return ((R (*)(LobbyEntity*, float))(Il2CppBase() + 0x143DA9C))(this, newValue);
	}
	template <typename R = void> R RemoveOverhaulDamageCoef() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143DBA0))(this);
	}
	template <typename R = OverhaulHealthCoefComponent*> R get_overhaulHealthCoef() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143A1EC))(this);
	}
	template <typename R = bool> R get_hasOverhaulHealthCoef() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143DBAC))(this);
	}
	template <typename R = void> R AddOverhaulHealthCoef(float newValue) {
		return ((R (*)(LobbyEntity*, float))(Il2CppBase() + 0x143DBB8))(this, newValue);
	}
	template <typename R = void> R ReplaceOverhaulHealthCoef(float newValue) {
		return ((R (*)(LobbyEntity*, float))(Il2CppBase() + 0x143DCBC))(this, newValue);
	}
	template <typename R = void> R RemoveOverhaulHealthCoef() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143DDC0))(this);
	}
	template <typename R = OwnerComponent*> R get_owner() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143DDCC))(this);
	}
	template <typename R = bool> R get_hasOwner() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143DE54))(this);
	}
	template <typename R = void> R AddOwner(int64_t newId) {
		return ((R (*)(LobbyEntity*, int64_t))(Il2CppBase() + 0x143DE60))(this, newId);
	}
	template <typename R = void> R ReplaceOwner(int64_t newId) {
		return ((R (*)(LobbyEntity*, int64_t))(Il2CppBase() + 0x143DF64))(this, newId);
	}
	template <typename R = void> R RemoveOwner() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143E068))(this);
	}
	template <typename R = PortalComponent*> R get_portal() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143E074))(this);
	}
	template <typename R = bool> R get_hasPortal() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143E0E0))(this);
	}
	template <typename R = void> R AddPortal(Il2CppString* newName, Il2CppArray<Il2CppString*>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<Vec2SL>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((R (*)(LobbyEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<Vec2SL>*, int32_t, bool, bool))(Il2CppBase() + 0x143E0EC))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename R = void> R ReplacePortal(Il2CppString* newName, Il2CppArray<Il2CppString*>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<Vec2SL>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((R (*)(LobbyEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<Vec2SL>*, int32_t, bool, bool))(Il2CppBase() + 0x143E2A0))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename R = void> R RemovePortal() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143E454))(this);
	}
	template <typename R = PortalsPointsComponent*> R get_portalsPoints() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x1439E34))(this);
	}
	template <typename R = bool> R get_hasPortalsPoints() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143A78C))(this);
	}
	template <typename R = void> R AddPortalsPoints(int32_t newCount) {
		return ((R (*)(LobbyEntity*, int32_t))(Il2CppBase() + 0x143E460))(this, newCount);
	}
	template <typename R = void> R ReplacePortalsPoints(int32_t newCount) {
		return ((R (*)(LobbyEntity*, int32_t))(Il2CppBase() + 0x143E564))(this, newCount);
	}
	template <typename R = void> R RemovePortalsPoints() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143E668))(this);
	}
	template <typename R = PowerComponent*> R get_power() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143AD30))(this);
	}
	template <typename R = bool> R get_hasPower() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143E674))(this);
	}
	template <typename R = void> R AddPower(float newValue) {
		return ((R (*)(LobbyEntity*, float))(Il2CppBase() + 0x143E680))(this, newValue);
	}
	template <typename R = void> R ReplacePower(float newValue) {
		return ((R (*)(LobbyEntity*, float))(Il2CppBase() + 0x143E784))(this, newValue);
	}
	template <typename R = void> R RemovePower() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143E888))(this);
	}
	template <typename R = RequiredItemsComponent*> R get_requiredItems() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143E894))(this);
	}
	template <typename R = bool> R get_hasRequiredItems() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143E91C))(this);
	}
	template <typename R = void> R AddRequiredItems(Il2CppArray<Item>* newItems, Il2CppString* newInfoText) {
		return ((R (*)(LobbyEntity*, Il2CppArray<Item>*, Il2CppString*))(Il2CppBase() + 0x143E928))(this, newItems, newInfoText);
	}
	template <typename R = void> R ReplaceRequiredItems(Il2CppArray<Item>* newItems, Il2CppString* newInfoText) {
		return ((R (*)(LobbyEntity*, Il2CppArray<Item>*, Il2CppString*))(Il2CppBase() + 0x143EA50))(this, newItems, newInfoText);
	}
	template <typename R = void> R RemoveRequiredItems() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143EB78))(this);
	}
	template <typename R = StartTimeComponent*> R get_startTime() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143EB84))(this);
	}
	template <typename R = bool> R get_hasStartTime() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143EC0C))(this);
	}
	template <typename R = void> R AddStartTime(int64_t newValue) {
		return ((R (*)(LobbyEntity*, int64_t))(Il2CppBase() + 0x143EC18))(this, newValue);
	}
	template <typename R = void> R ReplaceStartTime(int64_t newValue) {
		return ((R (*)(LobbyEntity*, int64_t))(Il2CppBase() + 0x143ED1C))(this, newValue);
	}
	template <typename R = void> R RemoveStartTime() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143EE20))(this);
	}
	template <typename R = WorldsList*> R get_worldsList() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143EE2C))(this);
	}
	template <typename R = bool> R get_hasWorldsList() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143EEB4))(this);
	}
	template <typename R = void> R AddWorldsList(Il2CppArray<World>* newList) {
		return ((R (*)(LobbyEntity*, Il2CppArray<World>*))(Il2CppBase() + 0x143EEC0))(this, newList);
	}
	template <typename R = void> R ReplaceWorldsList(Il2CppArray<World>* newList) {
		return ((R (*)(LobbyEntity*, Il2CppArray<World>*))(Il2CppBase() + 0x143EFD4))(this, newList);
	}
	template <typename R = void> R RemoveWorldsList() {
		return ((R (*)(LobbyEntity*))(Il2CppBase() + 0x143F0E8))(this);
	}

};

