#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyEntity"));
	}

	template <typename T = uintptr_t> static T& autoStartComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& avatarComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143ADB8))(this);
	}
	template <typename T = uintptr_t> T get_approveTime() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143B140))(this);
	}
	template <typename T = bool> T get_hasApproveTime() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143B1C8))(this);
	}
	template <typename T = void> T AddApproveTime(int64_t newValue) {
		return ((T (*)(LobbyEntity*, int64_t))(Il2CppBase() + 0x143B1D4))(this, newValue);
	}
	template <typename T = void> T ReplaceApproveTime(int64_t newValue) {
		return ((T (*)(LobbyEntity*, int64_t))(Il2CppBase() + 0x143B2D8))(this, newValue);
	}
	template <typename T = void> T RemoveApproveTime() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143B3DC))(this);
	}
	template <typename T = bool> T get_isAutoStart() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143B3E8))(this);
	}
	template <typename T = void> T set_isAutoStart(bool value) {
		return ((T (*)(LobbyEntity*, bool))(Il2CppBase() + 0x143B3F4))(this, value);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143B50C))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(LobbyEntity*, bool))(Il2CppBase() + 0x1438E58))(this, value);
	}
	template <typename T = uintptr_t> T get_blueprint() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143B024))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143B018))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(LobbyEntity*, Il2CppString*))(Il2CppBase() + 0x143B518))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(LobbyEntity*, Il2CppString*))(Il2CppBase() + 0x143B62C))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143B740))(this);
	}
	template <typename T = uintptr_t> T get_damageCoefByGrade() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143A054))(this);
	}
	template <typename T = bool> T get_hasDamageCoefByGrade() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143B74C))(this);
	}
	template <typename T = void> T AddDamageCoefByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(LobbyEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x143B758))(this, newValues);
	}
	template <typename T = void> T ReplaceDamageCoefByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(LobbyEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x143B86C))(this, newValues);
	}
	template <typename T = void> T RemoveDamageCoefByGrade() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143B980))(this);
	}
	template <typename T = uintptr_t> T get_damageCoef() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143B98C))(this);
	}
	template <typename T = bool> T get_hasDamageCoef() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143BA14))(this);
	}
	template <typename T = void> T AddDamageCoef(float newValue) {
		return ((T (*)(LobbyEntity*, float))(Il2CppBase() + 0x143BA20))(this, newValue);
	}
	template <typename T = void> T ReplaceDamageCoef(float newValue) {
		return ((T (*)(LobbyEntity*, float))(Il2CppBase() + 0x143BB24))(this, newValue);
	}
	template <typename T = void> T RemoveDamageCoef() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143BC28))(this);
	}
	template <typename T = uintptr_t> T get_damageStep() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x1439F44))(this);
	}
	template <typename T = bool> T get_hasDamageStep() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143BC34))(this);
	}
	template <typename T = void> T AddDamageStep(float newValue) {
		return ((T (*)(LobbyEntity*, float))(Il2CppBase() + 0x143BC40))(this, newValue);
	}
	template <typename T = void> T ReplaceDamageStep(float newValue) {
		return ((T (*)(LobbyEntity*, float))(Il2CppBase() + 0x143BD44))(this, newValue);
	}
	template <typename T = void> T RemoveDamageStep() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143BE48))(this);
	}
	template <typename T = uintptr_t> T get_difficultySteps() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x1439EBC))(this);
	}
	template <typename T = bool> T get_hasDifficultySteps() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143BE54))(this);
	}
	template <typename T = void> T AddDifficultySteps(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(LobbyEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x143BE60))(this, newValues);
	}
	template <typename T = void> T ReplaceDifficultySteps(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(LobbyEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x143BF74))(this, newValues);
	}
	template <typename T = void> T RemoveDifficultySteps() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143C088))(this);
	}
	template <typename T = uintptr_t> T get_enterQuest() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143C094))(this);
	}
	template <typename T = bool> T get_hasEnterQuest() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143C11C))(this);
	}
	template <typename T = void> T AddEnterQuest(Il2CppString* newName) {
		return ((T (*)(LobbyEntity*, Il2CppString*))(Il2CppBase() + 0x143C128))(this, newName);
	}
	template <typename T = void> T ReplaceEnterQuest(Il2CppString* newName) {
		return ((T (*)(LobbyEntity*, Il2CppString*))(Il2CppBase() + 0x143C23C))(this, newName);
	}
	template <typename T = void> T RemoveEnterQuest() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143C350))(this);
	}
	template <typename T = uintptr_t> T get_healthStep() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x1439FCC))(this);
	}
	template <typename T = bool> T get_hasHealthStep() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143C35C))(this);
	}
	template <typename T = void> T AddHealthStep(float newValue) {
		return ((T (*)(LobbyEntity*, float))(Il2CppBase() + 0x143C368))(this, newValue);
	}
	template <typename T = void> T ReplaceHealthStep(float newValue) {
		return ((T (*)(LobbyEntity*, float))(Il2CppBase() + 0x143C46C))(this, newValue);
	}
	template <typename T = void> T RemoveHealthStep() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143C570))(this);
	}
	template <typename T = uintptr_t> T get_lobbyActiveTime() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143C57C))(this);
	}
	template <typename T = bool> T get_hasLobbyActiveTime() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143C604))(this);
	}
	template <typename T = void> T AddLobbyActiveTime(int32_t newStartOffset, int32_t newOpenDuration, int32_t newCloseDuration, int32_t newNotifyBeforeOpen, int32_t newNotifyBeforeClose, Il2CppString* newBeforeOpenText, Il2CppString* newOnOpenText, Il2CppString* newBeforeCloseText, Il2CppString* newTempBuff) {
		return ((T (*)(LobbyEntity*, int32_t, int32_t, int32_t, int32_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x143C610))(this, newStartOffset, newOpenDuration, newCloseDuration, newNotifyBeforeOpen, newNotifyBeforeClose, newBeforeOpenText, newOnOpenText, newBeforeCloseText, newTempBuff);
	}
	template <typename T = void> T ReplaceLobbyActiveTime(int32_t newStartOffset, int32_t newOpenDuration, int32_t newCloseDuration, int32_t newNotifyBeforeOpen, int32_t newNotifyBeforeClose, Il2CppString* newBeforeOpenText, Il2CppString* newOnOpenText, Il2CppString* newBeforeCloseText, Il2CppString* newTempBuff) {
		return ((T (*)(LobbyEntity*, int32_t, int32_t, int32_t, int32_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x143C7A0))(this, newStartOffset, newOpenDuration, newCloseDuration, newNotifyBeforeOpen, newNotifyBeforeClose, newBeforeOpenText, newOnOpenText, newBeforeCloseText, newTempBuff);
	}
	template <typename T = void> T RemoveLobbyActiveTime() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143C930))(this);
	}
	template <typename T = uintptr_t> T get_lobbyId() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143B0B8))(this);
	}
	template <typename T = bool> T get_hasLobbyId() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143B0AC))(this);
	}
	template <typename T = void> T AddLobbyId(int64_t newId) {
		return ((T (*)(LobbyEntity*, int64_t))(Il2CppBase() + 0x1438A18))(this, newId);
	}
	template <typename T = void> T ReplaceLobbyId(int64_t newId) {
		return ((T (*)(LobbyEntity*, int64_t))(Il2CppBase() + 0x143C93C))(this, newId);
	}
	template <typename T = void> T RemoveLobbyId() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143CA40))(this);
	}
	template <typename T = uintptr_t> T get_lobbyPlayers() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143CA4C))(this);
	}
	template <typename T = bool> T get_hasLobbyPlayers() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143CAD4))(this);
	}
	template <typename T = void> T AddLobbyPlayers(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(LobbyEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x143CAE0))(this, newList);
	}
	template <typename T = void> T ReplaceLobbyPlayers(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(LobbyEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x143CBF4))(this, newList);
	}
	template <typename T = void> T RemoveLobbyPlayers() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143CD08))(this);
	}
	template <typename T = uintptr_t> T get_lobbyType() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143A934))(this);
	}
	template <typename T = bool> T get_hasLobbyType() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143CD14))(this);
	}
	template <typename T = void> T AddLobbyType(uintptr_t newType) {
		return ((T (*)(LobbyEntity*, uintptr_t))(Il2CppBase() + 0x143CD20))(this, newType);
	}
	template <typename T = void> T ReplaceLobbyType(uintptr_t newType) {
		return ((T (*)(LobbyEntity*, uintptr_t))(Il2CppBase() + 0x143CE24))(this, newType);
	}
	template <typename T = void> T RemoveLobbyType() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143CF28))(this);
	}
	template <typename T = uintptr_t> T get_lobbyWorld() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143CF34))(this);
	}
	template <typename T = bool> T get_hasLobbyWorld() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143CFBC))(this);
	}
	template <typename T = void> T AddLobbyWorld(int32_t newValue) {
		return ((T (*)(LobbyEntity*, int32_t))(Il2CppBase() + 0x143CFC8))(this, newValue);
	}
	template <typename T = void> T ReplaceLobbyWorld(int32_t newValue) {
		return ((T (*)(LobbyEntity*, int32_t))(Il2CppBase() + 0x143D0CC))(this, newValue);
	}
	template <typename T = void> T RemoveLobbyWorld() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143D1D0))(this);
	}
	template <typename T = uintptr_t> T get_maxHealthCoefByGrade() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143A0DC))(this);
	}
	template <typename T = bool> T get_hasMaxHealthCoefByGrade() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143D1DC))(this);
	}
	template <typename T = void> T AddMaxHealthCoefByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(LobbyEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x143D1E8))(this, newValues);
	}
	template <typename T = void> T ReplaceMaxHealthCoefByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(LobbyEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x143D2FC))(this, newValues);
	}
	template <typename T = void> T RemoveMaxHealthCoefByGrade() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143D410))(this);
	}
	template <typename T = uintptr_t> T get_maxHealthCoef() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143D41C))(this);
	}
	template <typename T = bool> T get_hasMaxHealthCoef() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143D4A4))(this);
	}
	template <typename T = void> T AddMaxHealthCoef(float newValue) {
		return ((T (*)(LobbyEntity*, float))(Il2CppBase() + 0x143D4B0))(this, newValue);
	}
	template <typename T = void> T ReplaceMaxHealthCoef(float newValue) {
		return ((T (*)(LobbyEntity*, float))(Il2CppBase() + 0x143D5B4))(this, newValue);
	}
	template <typename T = void> T RemoveMaxHealthCoef() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143D6B8))(this);
	}
	template <typename T = uintptr_t> T get_oldBlueprint() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143D6C4))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143D74C))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(LobbyEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x143D758))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(LobbyEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x143D86C))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143D980))(this);
	}
	template <typename T = uintptr_t> T get_overhaulDamageCoef() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143A164))(this);
	}
	template <typename T = bool> T get_hasOverhaulDamageCoef() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143D98C))(this);
	}
	template <typename T = void> T AddOverhaulDamageCoef(float newValue) {
		return ((T (*)(LobbyEntity*, float))(Il2CppBase() + 0x143D998))(this, newValue);
	}
	template <typename T = void> T ReplaceOverhaulDamageCoef(float newValue) {
		return ((T (*)(LobbyEntity*, float))(Il2CppBase() + 0x143DA9C))(this, newValue);
	}
	template <typename T = void> T RemoveOverhaulDamageCoef() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143DBA0))(this);
	}
	template <typename T = uintptr_t> T get_overhaulHealthCoef() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143A1EC))(this);
	}
	template <typename T = bool> T get_hasOverhaulHealthCoef() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143DBAC))(this);
	}
	template <typename T = void> T AddOverhaulHealthCoef(float newValue) {
		return ((T (*)(LobbyEntity*, float))(Il2CppBase() + 0x143DBB8))(this, newValue);
	}
	template <typename T = void> T ReplaceOverhaulHealthCoef(float newValue) {
		return ((T (*)(LobbyEntity*, float))(Il2CppBase() + 0x143DCBC))(this, newValue);
	}
	template <typename T = void> T RemoveOverhaulHealthCoef() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143DDC0))(this);
	}
	template <typename T = uintptr_t> T get_owner() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143DDCC))(this);
	}
	template <typename T = bool> T get_hasOwner() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143DE54))(this);
	}
	template <typename T = void> T AddOwner(int64_t newId) {
		return ((T (*)(LobbyEntity*, int64_t))(Il2CppBase() + 0x143DE60))(this, newId);
	}
	template <typename T = void> T ReplaceOwner(int64_t newId) {
		return ((T (*)(LobbyEntity*, int64_t))(Il2CppBase() + 0x143DF64))(this, newId);
	}
	template <typename T = void> T RemoveOwner() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143E068))(this);
	}
	template <typename T = uintptr_t> T get_portal() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143E074))(this);
	}
	template <typename T = bool> T get_hasPortal() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143E0E0))(this);
	}
	template <typename T = void> T AddPortal(Il2CppString* newName, Il2CppArray<uintptr_t>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<uintptr_t>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((T (*)(LobbyEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<uintptr_t>*, int32_t, bool, bool))(Il2CppBase() + 0x143E0EC))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename T = void> T ReplacePortal(Il2CppString* newName, Il2CppArray<uintptr_t>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<uintptr_t>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((T (*)(LobbyEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<uintptr_t>*, int32_t, bool, bool))(Il2CppBase() + 0x143E2A0))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename T = void> T RemovePortal() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143E454))(this);
	}
	template <typename T = uintptr_t> T get_portalsPoints() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x1439E34))(this);
	}
	template <typename T = bool> T get_hasPortalsPoints() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143A78C))(this);
	}
	template <typename T = void> T AddPortalsPoints(int32_t newCount) {
		return ((T (*)(LobbyEntity*, int32_t))(Il2CppBase() + 0x143E460))(this, newCount);
	}
	template <typename T = void> T ReplacePortalsPoints(int32_t newCount) {
		return ((T (*)(LobbyEntity*, int32_t))(Il2CppBase() + 0x143E564))(this, newCount);
	}
	template <typename T = void> T RemovePortalsPoints() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143E668))(this);
	}
	template <typename T = uintptr_t> T get_power() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143AD30))(this);
	}
	template <typename T = bool> T get_hasPower() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143E674))(this);
	}
	template <typename T = void> T AddPower(float newValue) {
		return ((T (*)(LobbyEntity*, float))(Il2CppBase() + 0x143E680))(this, newValue);
	}
	template <typename T = void> T ReplacePower(float newValue) {
		return ((T (*)(LobbyEntity*, float))(Il2CppBase() + 0x143E784))(this, newValue);
	}
	template <typename T = void> T RemovePower() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143E888))(this);
	}
	template <typename T = uintptr_t> T get_requiredItems() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143E894))(this);
	}
	template <typename T = bool> T get_hasRequiredItems() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143E91C))(this);
	}
	template <typename T = void> T AddRequiredItems(Il2CppArray<uintptr_t>* newItems, Il2CppString* newInfoText) {
		return ((T (*)(LobbyEntity*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x143E928))(this, newItems, newInfoText);
	}
	template <typename T = void> T ReplaceRequiredItems(Il2CppArray<uintptr_t>* newItems, Il2CppString* newInfoText) {
		return ((T (*)(LobbyEntity*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x143EA50))(this, newItems, newInfoText);
	}
	template <typename T = void> T RemoveRequiredItems() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143EB78))(this);
	}
	template <typename T = uintptr_t> T get_startTime() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143EB84))(this);
	}
	template <typename T = bool> T get_hasStartTime() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143EC0C))(this);
	}
	template <typename T = void> T AddStartTime(int64_t newValue) {
		return ((T (*)(LobbyEntity*, int64_t))(Il2CppBase() + 0x143EC18))(this, newValue);
	}
	template <typename T = void> T ReplaceStartTime(int64_t newValue) {
		return ((T (*)(LobbyEntity*, int64_t))(Il2CppBase() + 0x143ED1C))(this, newValue);
	}
	template <typename T = void> T RemoveStartTime() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143EE20))(this);
	}
	template <typename T = uintptr_t> T get_worldsList() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143EE2C))(this);
	}
	template <typename T = bool> T get_hasWorldsList() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143EEB4))(this);
	}
	template <typename T = void> T AddWorldsList(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(LobbyEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x143EEC0))(this, newList);
	}
	template <typename T = void> T ReplaceWorldsList(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(LobbyEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x143EFD4))(this, newList);
	}
	template <typename T = void> T RemoveWorldsList() {
		return ((T (*)(LobbyEntity*))(Il2CppBase() + 0x143F0E8))(this);
	}

};

}
