#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DialogueEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueEntity"));
	}

	template <typename T = AliveComponent*> static T& aliveComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ApplyActivateStatueComponent*> static T& applyActivateStatueComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC8424))(this);
	}
	template <typename T = ActionIdComponent*> T get_actionId() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC7F20))(this);
	}
	template <typename T = bool> T get_hasActionId() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC7F14))(this);
	}
	template <typename T = void> T AddActionId(int32_t newId) {
		return ((T (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC855C))(this, newId);
	}
	template <typename T = void> T ReplaceActionId(int32_t newId) {
		return ((T (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC8660))(this, newId);
	}
	template <typename T = void> T RemoveActionId() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC8764))(this);
	}
	template <typename T = ActorComponent*> T get_actor() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC8770))(this);
	}
	template <typename T = bool> T get_hasActor() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC87F8))(this);
	}
	template <typename T = void> T AddActor(int32_t newId) {
		return ((T (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC7648))(this, newId);
	}
	template <typename T = void> T ReplaceActor(int32_t newId) {
		return ((T (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC8804))(this, newId);
	}
	template <typename T = void> T RemoveActor() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC8908))(this);
	}
	template <typename T = bool> T get_isAlive() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEBC8F0))(this);
	}
	template <typename T = void> T set_isAlive(bool value) {
		return ((T (*)(DialogueEntity*, bool))(Il2CppBase() + 0xEC7850))(this, value);
	}
	template <typename T = AnalyticsComponent*> T get_analytics() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC8914))(this);
	}
	template <typename T = bool> T get_hasAnalytics() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC899C))(this);
	}
	template <typename T = void> T AddAnalytics(AnalyticsTypes* newType, Il2CppString* newParam) {
		return ((T (*)(DialogueEntity*, AnalyticsTypes*, Il2CppString*))(Il2CppBase() + 0xEC89A8))(this, newType, newParam);
	}
	template <typename T = void> T ReplaceAnalytics(AnalyticsTypes* newType, Il2CppString* newParam) {
		return ((T (*)(DialogueEntity*, AnalyticsTypes*, Il2CppString*))(Il2CppBase() + 0xEC8AC4))(this, newType, newParam);
	}
	template <typename T = void> T RemoveAnalytics() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC8BE0))(this);
	}
	template <typename T = bool> T get_isApplyActivateStatue() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC8BEC))(this);
	}
	template <typename T = void> T set_isApplyActivateStatue(bool value) {
		return ((T (*)(DialogueEntity*, bool))(Il2CppBase() + 0xEC8BF8))(this, value);
	}
	template <typename T = ApplyActorMagicComponent*> T get_applyActorMagic() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC8D10))(this);
	}
	template <typename T = bool> T get_hasApplyActorMagic() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC8D98))(this);
	}
	template <typename T = void> T AddApplyActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(DialogueEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0xEC8DA4))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(DialogueEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0xEC8F0C))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyActorMagic() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC9074))(this);
	}
	template <typename T = ApplyConsumeComponent*> T get_applyConsume() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC9080))(this);
	}
	template <typename T = bool> T get_hasApplyConsume() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC9108))(this);
	}
	template <typename T = void> T AddApplyConsume(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(DialogueEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xEC9114))(this, newValues);
	}
	template <typename T = void> T ReplaceApplyConsume(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(DialogueEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xEC9228))(this, newValues);
	}
	template <typename T = void> T RemoveApplyConsume() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC933C))(this);
	}
	template <typename T = ApplyLocationMagicComponent*> T get_applyLocationMagic() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC9348))(this);
	}
	template <typename T = bool> T get_hasApplyLocationMagic() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC93D0))(this);
	}
	template <typename T = void> T AddApplyLocationMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(DialogueEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0xEC93DC))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyLocationMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(DialogueEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0xEC9544))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyLocationMagic() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC96AC))(this);
	}
	template <typename T = ApplyOpenWindowComponent*> T get_applyOpenWindow() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC96B8))(this);
	}
	template <typename T = bool> T get_hasApplyOpenWindow() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC9740))(this);
	}
	template <typename T = void> T AddApplyOpenWindow(Il2CppString* newName, Il2CppString* newArg) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEC974C))(this, newName, newArg);
	}
	template <typename T = void> T ReplaceApplyOpenWindow(Il2CppString* newName, Il2CppString* newArg) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEC9874))(this, newName, newArg);
	}
	template <typename T = void> T RemoveApplyOpenWindow() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC999C))(this);
	}
	template <typename T = BlueprintComponent*> T get_blueprint() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC84D4))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC84C8))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xEC99A8))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xEC9ABC))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC9BD0))(this);
	}
	template <typename T = BookComponent*> T get_book() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC9BDC))(this);
	}
	template <typename T = bool> T get_hasBook() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC9C64))(this);
	}
	template <typename T = void> T AddBook(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newInitialCapImage, Il2CppString* newInitialCapText, Il2CppString* newText) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEC9C70))(this, newCaption, newCaptionImage, newInitialCapImage, newInitialCapText, newText);
	}
	template <typename T = void> T ReplaceBook(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newInitialCapImage, Il2CppString* newInitialCapText, Il2CppString* newText) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEC9DE4))(this, newCaption, newCaptionImage, newInitialCapImage, newInitialCapText, newText);
	}
	template <typename T = void> T RemoveBook() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC9F58))(this);
	}
	template <typename T = ButtonComponent*> T get_button() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC9F64))(this);
	}
	template <typename T = bool> T get_hasButton() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC9FEC))(this);
	}
	template <typename T = void> T AddButton(int32_t newValue) {
		return ((T (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC7974))(this, newValue);
	}
	template <typename T = void> T ReplaceButton(int32_t newValue) {
		return ((T (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC9FF8))(this, newValue);
	}
	template <typename T = void> T RemoveButton() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECA0FC))(this);
	}
	template <typename T = ContainerActionComponent*> T get_containerAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECA108))(this);
	}
	template <typename T = bool> T get_hasContainerAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECA190))(this);
	}
	template <typename T = void> T AddContainerAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECA19C))(this, newName);
	}
	template <typename T = void> T ReplaceContainerAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECA2B0))(this, newName);
	}
	template <typename T = void> T RemoveContainerAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECA3C4))(this);
	}
	template <typename T = CraftActionComponent*> T get_craftAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECA3D0))(this);
	}
	template <typename T = bool> T get_hasCraftAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECA458))(this);
	}
	template <typename T = void> T AddCraftAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECA464))(this, newName);
	}
	template <typename T = void> T ReplaceCraftAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECA578))(this, newName);
	}
	template <typename T = void> T RemoveCraftAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECA68C))(this);
	}
	template <typename T = DailyShopActionComponent*> T get_dailyShopAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECA698))(this);
	}
	template <typename T = bool> T get_hasDailyShopAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECA720))(this);
	}
	template <typename T = void> T AddDailyShopAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECA72C))(this, newName);
	}
	template <typename T = void> T ReplaceDailyShopAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECA840))(this, newName);
	}
	template <typename T = void> T RemoveDailyShopAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECA954))(this);
	}
	template <typename T = DescriptionComponent*> T get_description() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECA960))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECA9E8))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xECA9F4))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xECAB1C))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECAC44))(this);
	}
	template <typename T = DestroyActionComponent*> T get_destroyAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECAC50))(this);
	}
	template <typename T = bool> T get_hasDestroyAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECACD8))(this);
	}
	template <typename T = void> T AddDestroyAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECACE4))(this, newName);
	}
	template <typename T = void> T ReplaceDestroyAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECADF8))(this, newName);
	}
	template <typename T = void> T RemoveDestroyAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECAF0C))(this);
	}
	template <typename T = DiplomacyManagementActionComponent*> T get_diplomacyManagementAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECAF18))(this);
	}
	template <typename T = bool> T get_hasDiplomacyManagementAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECAFA0))(this);
	}
	template <typename T = void> T AddDiplomacyManagementAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECAFAC))(this, newName);
	}
	template <typename T = void> T ReplaceDiplomacyManagementAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECB0C0))(this, newName);
	}
	template <typename T = void> T RemoveDiplomacyManagementAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECB1D4))(this);
	}
	template <typename T = EnemyInteractComponent*> T get_enemyInteract() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECB1E0))(this);
	}
	template <typename T = bool> T get_hasEnemyInteract() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECB268))(this);
	}
	template <typename T = void> T AddEnemyInteract(ActionType* newAction, Il2CppArray<uintptr_t>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition* newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((T (*)(DialogueEntity*, ActionType*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, InteractActionCondition*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0xECB274))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename T = void> T ReplaceEnemyInteract(ActionType* newAction, Il2CppArray<uintptr_t>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition* newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((T (*)(DialogueEntity*, ActionType*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, InteractActionCondition*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0xECB420))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename T = void> T RemoveEnemyInteract() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECB5CC))(this);
	}
	template <typename T = FinalizeActionComponent*> T get_finalizeAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECB5D8))(this);
	}
	template <typename T = bool> T get_hasFinalizeAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECB660))(this);
	}
	template <typename T = void> T AddFinalizeAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECB66C))(this, newName);
	}
	template <typename T = void> T ReplaceFinalizeAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECB780))(this, newName);
	}
	template <typename T = void> T RemoveFinalizeAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECB894))(this);
	}
	template <typename T = FinishQuestComponent*> T get_finishQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECB8A0))(this);
	}
	template <typename T = bool> T get_hasFinishQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECB928))(this);
	}
	template <typename T = void> T AddFinishQuest(Il2CppString* newName, Il2CppString* newTag, bool newCheckMaxProgress, bool newIgnoreStart) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0xECB934))(this, newName, newTag, newCheckMaxProgress, newIgnoreStart);
	}
	template <typename T = void> T ReplaceFinishQuest(Il2CppString* newName, Il2CppString* newTag, bool newCheckMaxProgress, bool newIgnoreStart) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0xECBA7C))(this, newName, newTag, newCheckMaxProgress, newIgnoreStart);
	}
	template <typename T = void> T RemoveFinishQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECBBC4))(this);
	}
	template <typename T = GetQuestComponent*> T get_getQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC7A84))(this);
	}
	template <typename T = bool> T get_hasGetQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC7A78))(this);
	}
	template <typename T = void> T AddGetQuest(Il2CppString* newTag, QuestStatus* newStatus) {
		return ((T (*)(DialogueEntity*, Il2CppString*, QuestStatus*))(Il2CppBase() + 0xECBBD0))(this, newTag, newStatus);
	}
	template <typename T = void> T ReplaceGetQuest(Il2CppString* newTag, QuestStatus* newStatus) {
		return ((T (*)(DialogueEntity*, Il2CppString*, QuestStatus*))(Il2CppBase() + 0xECBCEC))(this, newTag, newStatus);
	}
	template <typename T = void> T RemoveGetQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECBE08))(this);
	}
	template <typename T = GiveQuestComponent*> T get_giveQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECBE14))(this);
	}
	template <typename T = bool> T get_hasGiveQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECBE9C))(this);
	}
	template <typename T = void> T AddGiveQuest(bool newDontStart, Il2CppString* newName, Il2CppString* newTag) {
		return ((T (*)(DialogueEntity*, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xECBEA8))(this, newDontStart, newName, newTag);
	}
	template <typename T = void> T ReplaceGiveQuest(bool newDontStart, Il2CppString* newName, Il2CppString* newTag) {
		return ((T (*)(DialogueEntity*, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xECBFE4))(this, newDontStart, newName, newTag);
	}
	template <typename T = void> T RemoveGiveQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECC120))(this);
	}
	template <typename T = GradeComponent*> T get_grade() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECC12C))(this);
	}
	template <typename T = bool> T get_hasGrade() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC7D24))(this);
	}
	template <typename T = void> T AddGrade(int32_t newValue) {
		return ((T (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC7D30))(this, newValue);
	}
	template <typename T = void> T ReplaceGrade(int32_t newValue) {
		return ((T (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xECC1B4))(this, newValue);
	}
	template <typename T = void> T RemoveGrade() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECC2B8))(this);
	}
	template <typename T = IconComponent*> T get_icon() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECC2C4))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECC34C))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xECC358))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xECC4B0))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECC608))(this);
	}
	template <typename T = IdComponent*> T get_id() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECC614))(this);
	}
	template <typename T = bool> T get_hasId() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEBCA30))(this);
	}
	template <typename T = void> T AddId(int32_t newValue) {
		return ((T (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC7544))(this, newValue);
	}
	template <typename T = void> T ReplaceId(int32_t newValue) {
		return ((T (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xECC69C))(this, newValue);
	}
	template <typename T = void> T RemoveId() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECC7A0))(this);
	}
	template <typename T = InteractActionComponent*> T get_interactAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECC7AC))(this);
	}
	template <typename T = bool> T get_hasInteractAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECC834))(this);
	}
	template <typename T = void> T AddInteractAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xECC840))(this, newName, newList);
	}
	template <typename T = void> T ReplaceInteractAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xECC968))(this, newName, newList);
	}
	template <typename T = void> T RemoveInteractAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECCA90))(this);
	}
	template <typename T = InteractComponent*> T get_interact() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECCA9C))(this);
	}
	template <typename T = bool> T get_hasInteract() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECCB24))(this);
	}
	template <typename T = void> T AddInteract(ActionType* newAction, Il2CppArray<uintptr_t>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition* newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((T (*)(DialogueEntity*, ActionType*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, InteractActionCondition*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0xECCB30))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename T = void> T ReplaceInteract(ActionType* newAction, Il2CppArray<uintptr_t>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition* newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((T (*)(DialogueEntity*, ActionType*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, InteractActionCondition*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0xECCCDC))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename T = void> T RemoveInteract() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECCE88))(this);
	}
	template <typename T = LandComponent*> T get_land() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECCE94))(this);
	}
	template <typename T = bool> T get_hasLand() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECCF1C))(this);
	}
	template <typename T = void> T AddLand(LandType* newType) {
		return ((T (*)(DialogueEntity*, LandType*))(Il2CppBase() + 0xECCF28))(this, newType);
	}
	template <typename T = void> T ReplaceLand(LandType* newType) {
		return ((T (*)(DialogueEntity*, LandType*))(Il2CppBase() + 0xECD02C))(this, newType);
	}
	template <typename T = void> T RemoveLand() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECD130))(this);
	}
	template <typename T = LockActionComponent*> T get_lockAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECD13C))(this);
	}
	template <typename T = bool> T get_hasLockAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECD1C4))(this);
	}
	template <typename T = void> T AddLockAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECD1D0))(this, newName);
	}
	template <typename T = void> T ReplaceLockAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECD2E4))(this, newName);
	}
	template <typename T = void> T RemoveLockAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECD3F8))(this);
	}
	template <typename T = LogComponent*> T get_log() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECD404))(this);
	}
	template <typename T = bool> T get_hasLog() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECD48C))(this);
	}
	template <typename T = void> T AddLog(LogType* newValue) {
		return ((T (*)(DialogueEntity*, LogType*))(Il2CppBase() + 0xECD498))(this, newValue);
	}
	template <typename T = void> T ReplaceLog(LogType* newValue) {
		return ((T (*)(DialogueEntity*, LogType*))(Il2CppBase() + 0xECD59C))(this, newValue);
	}
	template <typename T = void> T RemoveLog() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECD6A0))(this);
	}
	template <typename T = MessageComponent*> T get_message() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECD6AC))(this);
	}
	template <typename T = bool> T get_hasMessage() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECD734))(this);
	}
	template <typename T = void> T AddMessage(Il2CppString* newValue) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECD740))(this, newValue);
	}
	template <typename T = void> T ReplaceMessage(Il2CppString* newValue) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECD854))(this, newValue);
	}
	template <typename T = void> T RemoveMessage() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECD968))(this);
	}
	template <typename T = MiningActionComponent*> T get_miningAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECD974))(this);
	}
	template <typename T = bool> T get_hasMiningAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECD9FC))(this);
	}
	template <typename T = void> T AddMiningAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECDA08))(this, newName);
	}
	template <typename T = void> T ReplaceMiningAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECDB1C))(this, newName);
	}
	template <typename T = void> T RemoveMiningAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECDC30))(this);
	}
	template <typename T = NextDialogueComponent*> T get_nextDialogue() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECDC3C))(this);
	}
	template <typename T = bool> T get_hasNextDialogue() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xEC7968))(this);
	}
	template <typename T = void> T AddNextDialogue(Il2CppArray<uintptr_t>* newButtons) {
		return ((T (*)(DialogueEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xECDCC4))(this, newButtons);
	}
	template <typename T = void> T ReplaceNextDialogue(Il2CppArray<uintptr_t>* newButtons) {
		return ((T (*)(DialogueEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xECDDD8))(this, newButtons);
	}
	template <typename T = void> T RemoveNextDialogue() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECDEEC))(this);
	}
	template <typename T = OccupationComponent*> T get_occupation() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECDEF8))(this);
	}
	template <typename T = bool> T get_hasOccupation() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECDF80))(this);
	}
	template <typename T = void> T AddOccupation(OccupationType* newType) {
		return ((T (*)(DialogueEntity*, OccupationType*))(Il2CppBase() + 0xECDF8C))(this, newType);
	}
	template <typename T = void> T ReplaceOccupation(OccupationType* newType) {
		return ((T (*)(DialogueEntity*, OccupationType*))(Il2CppBase() + 0xECE090))(this, newType);
	}
	template <typename T = void> T RemoveOccupation() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECE194))(this);
	}
	template <typename T = OdinsCupActionComponent*> T get_odinsCupAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECE1A0))(this);
	}
	template <typename T = bool> T get_hasOdinsCupAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECE228))(this);
	}
	template <typename T = void> T AddOdinsCupAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECE234))(this, newName);
	}
	template <typename T = void> T ReplaceOdinsCupAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECE348))(this, newName);
	}
	template <typename T = void> T RemoveOdinsCupAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECE45C))(this);
	}
	template <typename T = OfferActionComponent*> T get_offerAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECE468))(this);
	}
	template <typename T = bool> T get_hasOfferAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECE4F0))(this);
	}
	template <typename T = void> T AddOfferAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECE4FC))(this, newName);
	}
	template <typename T = void> T ReplaceOfferAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECE610))(this, newName);
	}
	template <typename T = void> T RemoveOfferAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECE724))(this);
	}
	template <typename T = OldBlueprintComponent*> T get_oldBlueprint() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECE730))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECE7B8))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(DialogueEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xECE7C4))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(DialogueEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xECE8D8))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECE9EC))(this);
	}
	template <typename T = OwnerComponent*> T get_owner() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECE9F8))(this);
	}
	template <typename T = bool> T get_hasOwner() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECEA80))(this);
	}
	template <typename T = void> T AddOwner(int64_t newId) {
		return ((T (*)(DialogueEntity*, int64_t))(Il2CppBase() + 0xEC774C))(this, newId);
	}
	template <typename T = void> T ReplaceOwner(int64_t newId) {
		return ((T (*)(DialogueEntity*, int64_t))(Il2CppBase() + 0xECEA8C))(this, newId);
	}
	template <typename T = void> T RemoveOwner() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECEB90))(this);
	}
	template <typename T = PageComponent*> T get_page() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECEB9C))(this);
	}
	template <typename T = bool> T get_hasPage() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECEC24))(this);
	}
	template <typename T = void> T AddPage(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newText) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xECEC30))(this, newCaption, newCaptionImage, newText);
	}
	template <typename T = void> T ReplacePage(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newText) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xECED74))(this, newCaption, newCaptionImage, newText);
	}
	template <typename T = void> T RemovePage() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECEEB8))(this);
	}
	template <typename T = ParametersComponent*> T get_parameters() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECEEC4))(this);
	}
	template <typename T = bool> T get_hasParameters() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECEF4C))(this);
	}
	template <typename T = void> T AddParameters(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(DialogueEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xECEF58))(this, newNames);
	}
	template <typename T = void> T ReplaceParameters(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(DialogueEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xECF06C))(this, newNames);
	}
	template <typename T = void> T RemoveParameters() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECF180))(this);
	}
	template <typename T = PickupActionComponent*> T get_pickupAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECF18C))(this);
	}
	template <typename T = bool> T get_hasPickupAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECF214))(this);
	}
	template <typename T = void> T AddPickupAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xECF220))(this, newName, newList);
	}
	template <typename T = void> T ReplacePickupAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xECF348))(this, newName, newList);
	}
	template <typename T = void> T RemovePickupAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECF470))(this);
	}
	template <typename T = PortalActionComponent*> T get_portalAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECF47C))(this);
	}
	template <typename T = bool> T get_hasPortalAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECF504))(this);
	}
	template <typename T = void> T AddPortalAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECF510))(this, newName);
	}
	template <typename T = void> T ReplacePortalAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECF624))(this, newName);
	}
	template <typename T = void> T RemovePortalAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECF738))(this);
	}
	template <typename T = PortalComponent*> T get_portal() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECF744))(this);
	}
	template <typename T = bool> T get_hasPortal() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECF7B0))(this);
	}
	template <typename T = void> T AddPortal(Il2CppString* newName, Il2CppArray<uintptr_t>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<uintptr_t>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<uintptr_t>*, int32_t, bool, bool))(Il2CppBase() + 0xECF7BC))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename T = void> T ReplacePortal(Il2CppString* newName, Il2CppArray<uintptr_t>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<uintptr_t>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<uintptr_t>*, int32_t, bool, bool))(Il2CppBase() + 0xECF970))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename T = void> T RemovePortal() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECFB24))(this);
	}
	template <typename T = ProgressQuestComponent*> T get_progressQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECFB30))(this);
	}
	template <typename T = bool> T get_hasProgressQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECFBB8))(this);
	}
	template <typename T = void> T AddProgressQuest(Il2CppString* newName, Il2CppString* newTag, int32_t newValue) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0xECFBC4))(this, newName, newTag, newValue);
	}
	template <typename T = void> T ReplaceProgressQuest(Il2CppString* newName, Il2CppString* newTag, int32_t newValue) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0xECFCFC))(this, newName, newTag, newValue);
	}
	template <typename T = void> T RemoveProgressQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECFE34))(this);
	}
	template <typename T = QuestComponent*> T get_quest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECFE40))(this);
	}
	template <typename T = bool> T get_hasQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECFEC8))(this);
	}
	template <typename T = void> T AddQuest(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xEC7B0C))(this, newName);
	}
	template <typename T = void> T ReplaceQuest(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECFED4))(this, newName);
	}
	template <typename T = void> T RemoveQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECFFE8))(this);
	}
	template <typename T = RavenNestManagementActionComponent*> T get_ravenNestManagementAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xECFFF4))(this);
	}
	template <typename T = bool> T get_hasRavenNestManagementAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED007C))(this);
	}
	template <typename T = void> T AddRavenNestManagementAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED0088))(this, newName);
	}
	template <typename T = void> T ReplaceRavenNestManagementAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED019C))(this, newName);
	}
	template <typename T = void> T RemoveRavenNestManagementAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED02B0))(this);
	}
	template <typename T = RavenNestStatsActionComponent*> T get_ravenNestStatsAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED02BC))(this);
	}
	template <typename T = bool> T get_hasRavenNestStatsAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED0344))(this);
	}
	template <typename T = void> T AddRavenNestStatsAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED0350))(this, newName);
	}
	template <typename T = void> T ReplaceRavenNestStatsAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED0464))(this, newName);
	}
	template <typename T = void> T RemoveRavenNestStatsAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED0578))(this);
	}
	template <typename T = RepairActionComponent*> T get_repairAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED0584))(this);
	}
	template <typename T = bool> T get_hasRepairAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED060C))(this);
	}
	template <typename T = void> T AddRepairAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED0618))(this, newName);
	}
	template <typename T = void> T ReplaceRepairAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED072C))(this, newName);
	}
	template <typename T = void> T RemoveRepairAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED0840))(this);
	}
	template <typename T = ResurrectActionComponent*> T get_resurrectAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED084C))(this);
	}
	template <typename T = bool> T get_hasResurrectAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED08D4))(this);
	}
	template <typename T = void> T AddResurrectAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xED08E0))(this, newName, newList);
	}
	template <typename T = void> T ReplaceResurrectAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xED0A08))(this, newName, newList);
	}
	template <typename T = void> T RemoveResurrectAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED0B30))(this);
	}
	template <typename T = RewardQuestComponent*> T get_rewardQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED0B3C))(this);
	}
	template <typename T = bool> T get_hasRewardQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED0BC4))(this);
	}
	template <typename T = void> T AddRewardQuest(Il2CppString* newName, Il2CppString* newTag) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xED0BD0))(this, newName, newTag);
	}
	template <typename T = void> T ReplaceRewardQuest(Il2CppString* newName, Il2CppString* newTag) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xED0CF8))(this, newName, newTag);
	}
	template <typename T = void> T RemoveRewardQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED0E20))(this);
	}
	template <typename T = SagaComponent*> T get_saga() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED0E2C))(this);
	}
	template <typename T = bool> T get_hasSaga() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED0EB4))(this);
	}
	template <typename T = void> T AddSaga(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newImage, Il2CppString* newText) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xED0EC0))(this, newCaption, newCaptionImage, newImage, newText);
	}
	template <typename T = void> T ReplaceSaga(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newImage, Il2CppString* newText) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xED1018))(this, newCaption, newCaptionImage, newImage, newText);
	}
	template <typename T = void> T RemoveSaga() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED1170))(this);
	}
	template <typename T = SaveActionComponent*> T get_saveAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED117C))(this);
	}
	template <typename T = bool> T get_hasSaveAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED1204))(this);
	}
	template <typename T = void> T AddSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0xED1210))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename T = void> T ReplaceSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0xED1360))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename T = void> T RemoveSaveAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED14B0))(this);
	}
	template <typename T = ShieldManagementActionComponent*> T get_shieldManagementAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED14BC))(this);
	}
	template <typename T = bool> T get_hasShieldManagementAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED1544))(this);
	}
	template <typename T = void> T AddShieldManagementAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED1550))(this, newName);
	}
	template <typename T = void> T ReplaceShieldManagementAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED1664))(this, newName);
	}
	template <typename T = void> T RemoveShieldManagementAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED1778))(this);
	}
	template <typename T = StartQuestComponent*> T get_startQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED1784))(this);
	}
	template <typename T = bool> T get_hasStartQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED180C))(this);
	}
	template <typename T = void> T AddStartQuest(Il2CppString* newName, Il2CppString* newTag) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xED1818))(this, newName, newTag);
	}
	template <typename T = void> T ReplaceStartQuest(Il2CppString* newName, Il2CppString* newTag) {
		return ((T (*)(DialogueEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xED1940))(this, newName, newTag);
	}
	template <typename T = void> T RemoveStartQuest() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED1A68))(this);
	}
	template <typename T = StartTournamentActionComponent*> T get_startTournamentAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED1A74))(this);
	}
	template <typename T = bool> T get_hasStartTournamentAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED1AFC))(this);
	}
	template <typename T = void> T AddStartTournamentAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED1B08))(this, newName);
	}
	template <typename T = void> T ReplaceStartTournamentAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED1C1C))(this, newName);
	}
	template <typename T = void> T RemoveStartTournamentAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED1D30))(this);
	}
	template <typename T = TargetComponent*> T get_target() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED1D3C))(this);
	}
	template <typename T = bool> T get_hasTarget() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED1DC4))(this);
	}
	template <typename T = void> T AddTarget(int32_t newId) {
		return ((T (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC7C20))(this, newId);
	}
	template <typename T = void> T ReplaceTarget(int32_t newId) {
		return ((T (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xED1DD0))(this, newId);
	}
	template <typename T = void> T RemoveTarget() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED1ED4))(this);
	}
	template <typename T = TempBuffComponent*> T get_tempBuff() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED1EE0))(this);
	}
	template <typename T = bool> T get_hasTempBuff() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED1F68))(this);
	}
	template <typename T = void> T AddTempBuff(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED1F74))(this, newName);
	}
	template <typename T = void> T ReplaceTempBuff(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED2088))(this, newName);
	}
	template <typename T = void> T RemoveTempBuff() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED219C))(this);
	}
	template <typename T = TriptychComponent*> T get_triptych() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED21A8))(this);
	}
	template <typename T = bool> T get_hasTriptych() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED2230))(this);
	}
	template <typename T = void> T AddTriptych(Il2CppString* newCaption, bool newShowCloseButton, Il2CppString* newImage1, Il2CppString* newImage2, Il2CppString* newImage3, Il2CppString* newText1, Il2CppString* newText2, Il2CppString* newText3, Il2CppString* newTooltipCation1, Il2CppString* newTooltipCation2, Il2CppString* newTooltipCation3, Il2CppString* newTooltipText1, Il2CppString* newTooltipText2, Il2CppString* newTooltipText3) {
		return ((T (*)(DialogueEntity*, Il2CppString*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xED223C))(this, newCaption, newShowCloseButton, newImage1, newImage2, newImage3, newText1, newText2, newText3, newTooltipCation1, newTooltipCation2, newTooltipCation3, newTooltipText1, newTooltipText2, newTooltipText3);
	}
	template <typename T = void> T ReplaceTriptych(Il2CppString* newCaption, bool newShowCloseButton, Il2CppString* newImage1, Il2CppString* newImage2, Il2CppString* newImage3, Il2CppString* newText1, Il2CppString* newText2, Il2CppString* newText3, Il2CppString* newTooltipCation1, Il2CppString* newTooltipCation2, Il2CppString* newTooltipCation3, Il2CppString* newTooltipText1, Il2CppString* newTooltipText2, Il2CppString* newTooltipText3) {
		return ((T (*)(DialogueEntity*, Il2CppString*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xED247C))(this, newCaption, newShowCloseButton, newImage1, newImage2, newImage3, newText1, newText2, newText3, newTooltipCation1, newTooltipCation2, newTooltipCation3, newTooltipText1, newTooltipText2, newTooltipText3);
	}
	template <typename T = void> T RemoveTriptych() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED26BC))(this);
	}
	template <typename T = UnlockActionComponent*> T get_unlockAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED26C8))(this);
	}
	template <typename T = bool> T get_hasUnlockAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED2750))(this);
	}
	template <typename T = void> T AddUnlockAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED275C))(this, newName);
	}
	template <typename T = void> T ReplaceUnlockAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED2870))(this, newName);
	}
	template <typename T = void> T RemoveUnlockAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED2984))(this);
	}
	template <typename T = UnlockContainerActionComponent*> T get_unlockContainerAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED2990))(this);
	}
	template <typename T = bool> T get_hasUnlockContainerAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED2A18))(this);
	}
	template <typename T = void> T AddUnlockContainerAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED2A24))(this, newName);
	}
	template <typename T = void> T ReplaceUnlockContainerAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED2B38))(this, newName);
	}
	template <typename T = void> T RemoveUnlockContainerAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED2C4C))(this);
	}
	template <typename T = UnlockPortalActionComponent*> T get_unlockPortalAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED2C58))(this);
	}
	template <typename T = bool> T get_hasUnlockPortalAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED2CE0))(this);
	}
	template <typename T = void> T AddUnlockPortalAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED2CEC))(this, newName);
	}
	template <typename T = void> T ReplaceUnlockPortalAction(Il2CppString* newName) {
		return ((T (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED2E00))(this, newName);
	}
	template <typename T = void> T RemoveUnlockPortalAction() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED2F14))(this);
	}
	template <typename T = WindowComponent*> T get_window() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED2F20))(this);
	}
	template <typename T = bool> T get_hasWindow() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED2FA8))(this);
	}
	template <typename T = void> T AddWindow(int32_t newId) {
		return ((T (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xED2FB4))(this, newId);
	}
	template <typename T = void> T ReplaceWindow(int32_t newId) {
		return ((T (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xED30B8))(this, newId);
	}
	template <typename T = void> T RemoveWindow() {
		return ((T (*)(DialogueEntity*))(Il2CppBase() + 0xED31BC))(this);
	}

};

