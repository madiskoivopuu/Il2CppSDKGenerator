#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DialogueEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueEntity"));
	}

	template <typename R = AliveComponent*> static R& aliveComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ApplyActivateStatueComponent*> static R& applyActivateStatueComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC8424))(this);
	}
	template <typename R = ActionIdComponent*> R get_actionId() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC7F20))(this);
	}
	template <typename R = bool> R get_hasActionId() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC7F14))(this);
	}
	template <typename R = void> R AddActionId(int32_t newId) {
		return ((R (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC855C))(this, newId);
	}
	template <typename R = void> R ReplaceActionId(int32_t newId) {
		return ((R (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC8660))(this, newId);
	}
	template <typename R = void> R RemoveActionId() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC8764))(this);
	}
	template <typename R = ActorComponent*> R get_actor() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC8770))(this);
	}
	template <typename R = bool> R get_hasActor() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC87F8))(this);
	}
	template <typename R = void> R AddActor(int32_t newId) {
		return ((R (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC7648))(this, newId);
	}
	template <typename R = void> R ReplaceActor(int32_t newId) {
		return ((R (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC8804))(this, newId);
	}
	template <typename R = void> R RemoveActor() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC8908))(this);
	}
	template <typename R = bool> R get_isAlive() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEBC8F0))(this);
	}
	template <typename R = void> R set_isAlive(bool value) {
		return ((R (*)(DialogueEntity*, bool))(Il2CppBase() + 0xEC7850))(this, value);
	}
	template <typename R = AnalyticsComponent*> R get_analytics() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC8914))(this);
	}
	template <typename R = bool> R get_hasAnalytics() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC899C))(this);
	}
	template <typename R = void> R AddAnalytics(AnalyticsTypes newType, Il2CppString* newParam) {
		return ((R (*)(DialogueEntity*, AnalyticsTypes, Il2CppString*))(Il2CppBase() + 0xEC89A8))(this, newType, newParam);
	}
	template <typename R = void> R ReplaceAnalytics(AnalyticsTypes newType, Il2CppString* newParam) {
		return ((R (*)(DialogueEntity*, AnalyticsTypes, Il2CppString*))(Il2CppBase() + 0xEC8AC4))(this, newType, newParam);
	}
	template <typename R = void> R RemoveAnalytics() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC8BE0))(this);
	}
	template <typename R = bool> R get_isApplyActivateStatue() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC8BEC))(this);
	}
	template <typename R = void> R set_isApplyActivateStatue(bool value) {
		return ((R (*)(DialogueEntity*, bool))(Il2CppBase() + 0xEC8BF8))(this, value);
	}
	template <typename R = ApplyActorMagicComponent*> R get_applyActorMagic() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC8D10))(this);
	}
	template <typename R = bool> R get_hasApplyActorMagic() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC8D98))(this);
	}
	template <typename R = void> R AddApplyActorMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(DialogueEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0xEC8DA4))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyActorMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(DialogueEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0xEC8F0C))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyActorMagic() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC9074))(this);
	}
	template <typename R = ApplyConsumeComponent*> R get_applyConsume() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC9080))(this);
	}
	template <typename R = bool> R get_hasApplyConsume() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC9108))(this);
	}
	template <typename R = void> R AddApplyConsume(Il2CppArray<Resource>* newValues) {
		return ((R (*)(DialogueEntity*, Il2CppArray<Resource>*))(Il2CppBase() + 0xEC9114))(this, newValues);
	}
	template <typename R = void> R ReplaceApplyConsume(Il2CppArray<Resource>* newValues) {
		return ((R (*)(DialogueEntity*, Il2CppArray<Resource>*))(Il2CppBase() + 0xEC9228))(this, newValues);
	}
	template <typename R = void> R RemoveApplyConsume() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC933C))(this);
	}
	template <typename R = ApplyLocationMagicComponent*> R get_applyLocationMagic() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC9348))(this);
	}
	template <typename R = bool> R get_hasApplyLocationMagic() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC93D0))(this);
	}
	template <typename R = void> R AddApplyLocationMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(DialogueEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0xEC93DC))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyLocationMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(DialogueEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0xEC9544))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyLocationMagic() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC96AC))(this);
	}
	template <typename R = ApplyOpenWindowComponent*> R get_applyOpenWindow() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC96B8))(this);
	}
	template <typename R = bool> R get_hasApplyOpenWindow() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC9740))(this);
	}
	template <typename R = void> R AddApplyOpenWindow(Il2CppString* newName, Il2CppString* newArg) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEC974C))(this, newName, newArg);
	}
	template <typename R = void> R ReplaceApplyOpenWindow(Il2CppString* newName, Il2CppString* newArg) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEC9874))(this, newName, newArg);
	}
	template <typename R = void> R RemoveApplyOpenWindow() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC999C))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC84D4))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC84C8))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xEC99A8))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xEC9ABC))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC9BD0))(this);
	}
	template <typename R = BookComponent*> R get_book() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC9BDC))(this);
	}
	template <typename R = bool> R get_hasBook() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC9C64))(this);
	}
	template <typename R = void> R AddBook(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newInitialCapImage, Il2CppString* newInitialCapText, Il2CppString* newText) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEC9C70))(this, newCaption, newCaptionImage, newInitialCapImage, newInitialCapText, newText);
	}
	template <typename R = void> R ReplaceBook(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newInitialCapImage, Il2CppString* newInitialCapText, Il2CppString* newText) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEC9DE4))(this, newCaption, newCaptionImage, newInitialCapImage, newInitialCapText, newText);
	}
	template <typename R = void> R RemoveBook() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC9F58))(this);
	}
	template <typename R = ButtonComponent*> R get_button() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC9F64))(this);
	}
	template <typename R = bool> R get_hasButton() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC9FEC))(this);
	}
	template <typename R = void> R AddButton(int32_t newValue) {
		return ((R (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC7974))(this, newValue);
	}
	template <typename R = void> R ReplaceButton(int32_t newValue) {
		return ((R (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC9FF8))(this, newValue);
	}
	template <typename R = void> R RemoveButton() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECA0FC))(this);
	}
	template <typename R = ContainerActionComponent*> R get_containerAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECA108))(this);
	}
	template <typename R = bool> R get_hasContainerAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECA190))(this);
	}
	template <typename R = void> R AddContainerAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECA19C))(this, newName);
	}
	template <typename R = void> R ReplaceContainerAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECA2B0))(this, newName);
	}
	template <typename R = void> R RemoveContainerAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECA3C4))(this);
	}
	template <typename R = CraftActionComponent*> R get_craftAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECA3D0))(this);
	}
	template <typename R = bool> R get_hasCraftAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECA458))(this);
	}
	template <typename R = void> R AddCraftAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECA464))(this, newName);
	}
	template <typename R = void> R ReplaceCraftAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECA578))(this, newName);
	}
	template <typename R = void> R RemoveCraftAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECA68C))(this);
	}
	template <typename R = DailyShopActionComponent*> R get_dailyShopAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECA698))(this);
	}
	template <typename R = bool> R get_hasDailyShopAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECA720))(this);
	}
	template <typename R = void> R AddDailyShopAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECA72C))(this, newName);
	}
	template <typename R = void> R ReplaceDailyShopAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECA840))(this, newName);
	}
	template <typename R = void> R RemoveDailyShopAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECA954))(this);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECA960))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECA9E8))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xECA9F4))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xECAB1C))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECAC44))(this);
	}
	template <typename R = DestroyActionComponent*> R get_destroyAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECAC50))(this);
	}
	template <typename R = bool> R get_hasDestroyAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECACD8))(this);
	}
	template <typename R = void> R AddDestroyAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECACE4))(this, newName);
	}
	template <typename R = void> R ReplaceDestroyAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECADF8))(this, newName);
	}
	template <typename R = void> R RemoveDestroyAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECAF0C))(this);
	}
	template <typename R = DiplomacyManagementActionComponent*> R get_diplomacyManagementAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECAF18))(this);
	}
	template <typename R = bool> R get_hasDiplomacyManagementAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECAFA0))(this);
	}
	template <typename R = void> R AddDiplomacyManagementAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECAFAC))(this, newName);
	}
	template <typename R = void> R ReplaceDiplomacyManagementAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECB0C0))(this, newName);
	}
	template <typename R = void> R RemoveDiplomacyManagementAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECB1D4))(this);
	}
	template <typename R = EnemyInteractComponent*> R get_enemyInteract() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECB1E0))(this);
	}
	template <typename R = bool> R get_hasEnemyInteract() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECB268))(this);
	}
	template <typename R = void> R AddEnemyInteract(ActionType newAction, Il2CppArray<NameChance>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((R (*)(DialogueEntity*, ActionType, Il2CppArray<NameChance>*, Il2CppString*, Il2CppString*, InteractActionCondition, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0xECB274))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename R = void> R ReplaceEnemyInteract(ActionType newAction, Il2CppArray<NameChance>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((R (*)(DialogueEntity*, ActionType, Il2CppArray<NameChance>*, Il2CppString*, Il2CppString*, InteractActionCondition, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0xECB420))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename R = void> R RemoveEnemyInteract() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECB5CC))(this);
	}
	template <typename R = FinalizeActionComponent*> R get_finalizeAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECB5D8))(this);
	}
	template <typename R = bool> R get_hasFinalizeAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECB660))(this);
	}
	template <typename R = void> R AddFinalizeAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECB66C))(this, newName);
	}
	template <typename R = void> R ReplaceFinalizeAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECB780))(this, newName);
	}
	template <typename R = void> R RemoveFinalizeAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECB894))(this);
	}
	template <typename R = FinishQuestComponent*> R get_finishQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECB8A0))(this);
	}
	template <typename R = bool> R get_hasFinishQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECB928))(this);
	}
	template <typename R = void> R AddFinishQuest(Il2CppString* newName, Il2CppString* newTag, bool newCheckMaxProgress, bool newIgnoreStart) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0xECB934))(this, newName, newTag, newCheckMaxProgress, newIgnoreStart);
	}
	template <typename R = void> R ReplaceFinishQuest(Il2CppString* newName, Il2CppString* newTag, bool newCheckMaxProgress, bool newIgnoreStart) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0xECBA7C))(this, newName, newTag, newCheckMaxProgress, newIgnoreStart);
	}
	template <typename R = void> R RemoveFinishQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECBBC4))(this);
	}
	template <typename R = GetQuestComponent*> R get_getQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC7A84))(this);
	}
	template <typename R = bool> R get_hasGetQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC7A78))(this);
	}
	template <typename R = void> R AddGetQuest(Il2CppString* newTag, QuestStatus newStatus) {
		return ((R (*)(DialogueEntity*, Il2CppString*, QuestStatus))(Il2CppBase() + 0xECBBD0))(this, newTag, newStatus);
	}
	template <typename R = void> R ReplaceGetQuest(Il2CppString* newTag, QuestStatus newStatus) {
		return ((R (*)(DialogueEntity*, Il2CppString*, QuestStatus))(Il2CppBase() + 0xECBCEC))(this, newTag, newStatus);
	}
	template <typename R = void> R RemoveGetQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECBE08))(this);
	}
	template <typename R = GiveQuestComponent*> R get_giveQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECBE14))(this);
	}
	template <typename R = bool> R get_hasGiveQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECBE9C))(this);
	}
	template <typename R = void> R AddGiveQuest(bool newDontStart, Il2CppString* newName, Il2CppString* newTag) {
		return ((R (*)(DialogueEntity*, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xECBEA8))(this, newDontStart, newName, newTag);
	}
	template <typename R = void> R ReplaceGiveQuest(bool newDontStart, Il2CppString* newName, Il2CppString* newTag) {
		return ((R (*)(DialogueEntity*, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xECBFE4))(this, newDontStart, newName, newTag);
	}
	template <typename R = void> R RemoveGiveQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECC120))(this);
	}
	template <typename R = GradeComponent*> R get_grade() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECC12C))(this);
	}
	template <typename R = bool> R get_hasGrade() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC7D24))(this);
	}
	template <typename R = void> R AddGrade(int32_t newValue) {
		return ((R (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC7D30))(this, newValue);
	}
	template <typename R = void> R ReplaceGrade(int32_t newValue) {
		return ((R (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xECC1B4))(this, newValue);
	}
	template <typename R = void> R RemoveGrade() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECC2B8))(this);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECC2C4))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECC34C))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xECC358))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xECC4B0))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECC608))(this);
	}
	template <typename R = IdComponent*> R get_id() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECC614))(this);
	}
	template <typename R = bool> R get_hasId() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEBCA30))(this);
	}
	template <typename R = void> R AddId(int32_t newValue) {
		return ((R (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC7544))(this, newValue);
	}
	template <typename R = void> R ReplaceId(int32_t newValue) {
		return ((R (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xECC69C))(this, newValue);
	}
	template <typename R = void> R RemoveId() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECC7A0))(this);
	}
	template <typename R = InteractActionComponent*> R get_interactAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECC7AC))(this);
	}
	template <typename R = bool> R get_hasInteractAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECC834))(this);
	}
	template <typename R = void> R AddInteractAction(Il2CppString* newName, Il2CppArray<Item>* newList) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppArray<Item>*))(Il2CppBase() + 0xECC840))(this, newName, newList);
	}
	template <typename R = void> R ReplaceInteractAction(Il2CppString* newName, Il2CppArray<Item>* newList) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppArray<Item>*))(Il2CppBase() + 0xECC968))(this, newName, newList);
	}
	template <typename R = void> R RemoveInteractAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECCA90))(this);
	}
	template <typename R = InteractComponent*> R get_interact() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECCA9C))(this);
	}
	template <typename R = bool> R get_hasInteract() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECCB24))(this);
	}
	template <typename R = void> R AddInteract(ActionType newAction, Il2CppArray<NameChance>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((R (*)(DialogueEntity*, ActionType, Il2CppArray<NameChance>*, Il2CppString*, Il2CppString*, InteractActionCondition, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0xECCB30))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename R = void> R ReplaceInteract(ActionType newAction, Il2CppArray<NameChance>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((R (*)(DialogueEntity*, ActionType, Il2CppArray<NameChance>*, Il2CppString*, Il2CppString*, InteractActionCondition, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0xECCCDC))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename R = void> R RemoveInteract() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECCE88))(this);
	}
	template <typename R = LandComponent*> R get_land() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECCE94))(this);
	}
	template <typename R = bool> R get_hasLand() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECCF1C))(this);
	}
	template <typename R = void> R AddLand(LandType newType) {
		return ((R (*)(DialogueEntity*, LandType))(Il2CppBase() + 0xECCF28))(this, newType);
	}
	template <typename R = void> R ReplaceLand(LandType newType) {
		return ((R (*)(DialogueEntity*, LandType))(Il2CppBase() + 0xECD02C))(this, newType);
	}
	template <typename R = void> R RemoveLand() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECD130))(this);
	}
	template <typename R = LockActionComponent*> R get_lockAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECD13C))(this);
	}
	template <typename R = bool> R get_hasLockAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECD1C4))(this);
	}
	template <typename R = void> R AddLockAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECD1D0))(this, newName);
	}
	template <typename R = void> R ReplaceLockAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECD2E4))(this, newName);
	}
	template <typename R = void> R RemoveLockAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECD3F8))(this);
	}
	template <typename R = LogComponent*> R get_log() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECD404))(this);
	}
	template <typename R = bool> R get_hasLog() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECD48C))(this);
	}
	template <typename R = void> R AddLog(LogType newValue) {
		return ((R (*)(DialogueEntity*, LogType))(Il2CppBase() + 0xECD498))(this, newValue);
	}
	template <typename R = void> R ReplaceLog(LogType newValue) {
		return ((R (*)(DialogueEntity*, LogType))(Il2CppBase() + 0xECD59C))(this, newValue);
	}
	template <typename R = void> R RemoveLog() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECD6A0))(this);
	}
	template <typename R = MessageComponent*> R get_message() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECD6AC))(this);
	}
	template <typename R = bool> R get_hasMessage() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECD734))(this);
	}
	template <typename R = void> R AddMessage(Il2CppString* newValue) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECD740))(this, newValue);
	}
	template <typename R = void> R ReplaceMessage(Il2CppString* newValue) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECD854))(this, newValue);
	}
	template <typename R = void> R RemoveMessage() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECD968))(this);
	}
	template <typename R = MiningActionComponent*> R get_miningAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECD974))(this);
	}
	template <typename R = bool> R get_hasMiningAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECD9FC))(this);
	}
	template <typename R = void> R AddMiningAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECDA08))(this, newName);
	}
	template <typename R = void> R ReplaceMiningAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECDB1C))(this, newName);
	}
	template <typename R = void> R RemoveMiningAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECDC30))(this);
	}
	template <typename R = NextDialogueComponent*> R get_nextDialogue() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECDC3C))(this);
	}
	template <typename R = bool> R get_hasNextDialogue() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xEC7968))(this);
	}
	template <typename R = void> R AddNextDialogue(Il2CppArray<Button*>* newButtons) {
		return ((R (*)(DialogueEntity*, Il2CppArray<Button*>*))(Il2CppBase() + 0xECDCC4))(this, newButtons);
	}
	template <typename R = void> R ReplaceNextDialogue(Il2CppArray<Button*>* newButtons) {
		return ((R (*)(DialogueEntity*, Il2CppArray<Button*>*))(Il2CppBase() + 0xECDDD8))(this, newButtons);
	}
	template <typename R = void> R RemoveNextDialogue() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECDEEC))(this);
	}
	template <typename R = OccupationComponent*> R get_occupation() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECDEF8))(this);
	}
	template <typename R = bool> R get_hasOccupation() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECDF80))(this);
	}
	template <typename R = void> R AddOccupation(OccupationType newType) {
		return ((R (*)(DialogueEntity*, OccupationType))(Il2CppBase() + 0xECDF8C))(this, newType);
	}
	template <typename R = void> R ReplaceOccupation(OccupationType newType) {
		return ((R (*)(DialogueEntity*, OccupationType))(Il2CppBase() + 0xECE090))(this, newType);
	}
	template <typename R = void> R RemoveOccupation() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECE194))(this);
	}
	template <typename R = OdinsCupActionComponent*> R get_odinsCupAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECE1A0))(this);
	}
	template <typename R = bool> R get_hasOdinsCupAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECE228))(this);
	}
	template <typename R = void> R AddOdinsCupAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECE234))(this, newName);
	}
	template <typename R = void> R ReplaceOdinsCupAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECE348))(this, newName);
	}
	template <typename R = void> R RemoveOdinsCupAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECE45C))(this);
	}
	template <typename R = OfferActionComponent*> R get_offerAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECE468))(this);
	}
	template <typename R = bool> R get_hasOfferAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECE4F0))(this);
	}
	template <typename R = void> R AddOfferAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECE4FC))(this, newName);
	}
	template <typename R = void> R ReplaceOfferAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECE610))(this, newName);
	}
	template <typename R = void> R RemoveOfferAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECE724))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECE730))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECE7B8))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(DialogueEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xECE7C4))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(DialogueEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xECE8D8))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECE9EC))(this);
	}
	template <typename R = OwnerComponent*> R get_owner() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECE9F8))(this);
	}
	template <typename R = bool> R get_hasOwner() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECEA80))(this);
	}
	template <typename R = void> R AddOwner(int64_t newId) {
		return ((R (*)(DialogueEntity*, int64_t))(Il2CppBase() + 0xEC774C))(this, newId);
	}
	template <typename R = void> R ReplaceOwner(int64_t newId) {
		return ((R (*)(DialogueEntity*, int64_t))(Il2CppBase() + 0xECEA8C))(this, newId);
	}
	template <typename R = void> R RemoveOwner() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECEB90))(this);
	}
	template <typename R = PageComponent*> R get_page() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECEB9C))(this);
	}
	template <typename R = bool> R get_hasPage() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECEC24))(this);
	}
	template <typename R = void> R AddPage(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newText) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xECEC30))(this, newCaption, newCaptionImage, newText);
	}
	template <typename R = void> R ReplacePage(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newText) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xECED74))(this, newCaption, newCaptionImage, newText);
	}
	template <typename R = void> R RemovePage() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECEEB8))(this);
	}
	template <typename R = ParametersComponent*> R get_parameters() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECEEC4))(this);
	}
	template <typename R = bool> R get_hasParameters() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECEF4C))(this);
	}
	template <typename R = void> R AddParameters(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(DialogueEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xECEF58))(this, newNames);
	}
	template <typename R = void> R ReplaceParameters(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(DialogueEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xECF06C))(this, newNames);
	}
	template <typename R = void> R RemoveParameters() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECF180))(this);
	}
	template <typename R = PickupActionComponent*> R get_pickupAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECF18C))(this);
	}
	template <typename R = bool> R get_hasPickupAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECF214))(this);
	}
	template <typename R = void> R AddPickupAction(Il2CppString* newName, Il2CppArray<Item>* newList) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppArray<Item>*))(Il2CppBase() + 0xECF220))(this, newName, newList);
	}
	template <typename R = void> R ReplacePickupAction(Il2CppString* newName, Il2CppArray<Item>* newList) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppArray<Item>*))(Il2CppBase() + 0xECF348))(this, newName, newList);
	}
	template <typename R = void> R RemovePickupAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECF470))(this);
	}
	template <typename R = PortalActionComponent*> R get_portalAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECF47C))(this);
	}
	template <typename R = bool> R get_hasPortalAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECF504))(this);
	}
	template <typename R = void> R AddPortalAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECF510))(this, newName);
	}
	template <typename R = void> R ReplacePortalAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECF624))(this, newName);
	}
	template <typename R = void> R RemovePortalAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECF738))(this);
	}
	template <typename R = PortalComponent*> R get_portal() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECF744))(this);
	}
	template <typename R = bool> R get_hasPortal() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECF7B0))(this);
	}
	template <typename R = void> R AddPortal(Il2CppString* newName, Il2CppArray<Il2CppString*>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<Vec2SL>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<Vec2SL>*, int32_t, bool, bool))(Il2CppBase() + 0xECF7BC))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename R = void> R ReplacePortal(Il2CppString* newName, Il2CppArray<Il2CppString*>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<Vec2SL>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<Vec2SL>*, int32_t, bool, bool))(Il2CppBase() + 0xECF970))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename R = void> R RemovePortal() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECFB24))(this);
	}
	template <typename R = ProgressQuestComponent*> R get_progressQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECFB30))(this);
	}
	template <typename R = bool> R get_hasProgressQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECFBB8))(this);
	}
	template <typename R = void> R AddProgressQuest(Il2CppString* newName, Il2CppString* newTag, int32_t newValue) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0xECFBC4))(this, newName, newTag, newValue);
	}
	template <typename R = void> R ReplaceProgressQuest(Il2CppString* newName, Il2CppString* newTag, int32_t newValue) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0xECFCFC))(this, newName, newTag, newValue);
	}
	template <typename R = void> R RemoveProgressQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECFE34))(this);
	}
	template <typename R = QuestComponent*> R get_quest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECFE40))(this);
	}
	template <typename R = bool> R get_hasQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECFEC8))(this);
	}
	template <typename R = void> R AddQuest(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xEC7B0C))(this, newName);
	}
	template <typename R = void> R ReplaceQuest(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xECFED4))(this, newName);
	}
	template <typename R = void> R RemoveQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECFFE8))(this);
	}
	template <typename R = RavenNestManagementActionComponent*> R get_ravenNestManagementAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xECFFF4))(this);
	}
	template <typename R = bool> R get_hasRavenNestManagementAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED007C))(this);
	}
	template <typename R = void> R AddRavenNestManagementAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED0088))(this, newName);
	}
	template <typename R = void> R ReplaceRavenNestManagementAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED019C))(this, newName);
	}
	template <typename R = void> R RemoveRavenNestManagementAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED02B0))(this);
	}
	template <typename R = RavenNestStatsActionComponent*> R get_ravenNestStatsAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED02BC))(this);
	}
	template <typename R = bool> R get_hasRavenNestStatsAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED0344))(this);
	}
	template <typename R = void> R AddRavenNestStatsAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED0350))(this, newName);
	}
	template <typename R = void> R ReplaceRavenNestStatsAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED0464))(this, newName);
	}
	template <typename R = void> R RemoveRavenNestStatsAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED0578))(this);
	}
	template <typename R = RepairActionComponent*> R get_repairAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED0584))(this);
	}
	template <typename R = bool> R get_hasRepairAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED060C))(this);
	}
	template <typename R = void> R AddRepairAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED0618))(this, newName);
	}
	template <typename R = void> R ReplaceRepairAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED072C))(this, newName);
	}
	template <typename R = void> R RemoveRepairAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED0840))(this);
	}
	template <typename R = ResurrectActionComponent*> R get_resurrectAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED084C))(this);
	}
	template <typename R = bool> R get_hasResurrectAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED08D4))(this);
	}
	template <typename R = void> R AddResurrectAction(Il2CppString* newName, Il2CppArray<Item>* newList) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppArray<Item>*))(Il2CppBase() + 0xED08E0))(this, newName, newList);
	}
	template <typename R = void> R ReplaceResurrectAction(Il2CppString* newName, Il2CppArray<Item>* newList) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppArray<Item>*))(Il2CppBase() + 0xED0A08))(this, newName, newList);
	}
	template <typename R = void> R RemoveResurrectAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED0B30))(this);
	}
	template <typename R = RewardQuestComponent*> R get_rewardQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED0B3C))(this);
	}
	template <typename R = bool> R get_hasRewardQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED0BC4))(this);
	}
	template <typename R = void> R AddRewardQuest(Il2CppString* newName, Il2CppString* newTag) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xED0BD0))(this, newName, newTag);
	}
	template <typename R = void> R ReplaceRewardQuest(Il2CppString* newName, Il2CppString* newTag) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xED0CF8))(this, newName, newTag);
	}
	template <typename R = void> R RemoveRewardQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED0E20))(this);
	}
	template <typename R = SagaComponent*> R get_saga() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED0E2C))(this);
	}
	template <typename R = bool> R get_hasSaga() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED0EB4))(this);
	}
	template <typename R = void> R AddSaga(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newImage, Il2CppString* newText) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xED0EC0))(this, newCaption, newCaptionImage, newImage, newText);
	}
	template <typename R = void> R ReplaceSaga(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newImage, Il2CppString* newText) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xED1018))(this, newCaption, newCaptionImage, newImage, newText);
	}
	template <typename R = void> R RemoveSaga() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED1170))(this);
	}
	template <typename R = SaveActionComponent*> R get_saveAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED117C))(this);
	}
	template <typename R = bool> R get_hasSaveAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED1204))(this);
	}
	template <typename R = void> R AddSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0xED1210))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename R = void> R ReplaceSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0xED1360))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename R = void> R RemoveSaveAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED14B0))(this);
	}
	template <typename R = ShieldManagementActionComponent*> R get_shieldManagementAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED14BC))(this);
	}
	template <typename R = bool> R get_hasShieldManagementAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED1544))(this);
	}
	template <typename R = void> R AddShieldManagementAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED1550))(this, newName);
	}
	template <typename R = void> R ReplaceShieldManagementAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED1664))(this, newName);
	}
	template <typename R = void> R RemoveShieldManagementAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED1778))(this);
	}
	template <typename R = StartQuestComponent*> R get_startQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED1784))(this);
	}
	template <typename R = bool> R get_hasStartQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED180C))(this);
	}
	template <typename R = void> R AddStartQuest(Il2CppString* newName, Il2CppString* newTag) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xED1818))(this, newName, newTag);
	}
	template <typename R = void> R ReplaceStartQuest(Il2CppString* newName, Il2CppString* newTag) {
		return ((R (*)(DialogueEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xED1940))(this, newName, newTag);
	}
	template <typename R = void> R RemoveStartQuest() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED1A68))(this);
	}
	template <typename R = StartTournamentActionComponent*> R get_startTournamentAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED1A74))(this);
	}
	template <typename R = bool> R get_hasStartTournamentAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED1AFC))(this);
	}
	template <typename R = void> R AddStartTournamentAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED1B08))(this, newName);
	}
	template <typename R = void> R ReplaceStartTournamentAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED1C1C))(this, newName);
	}
	template <typename R = void> R RemoveStartTournamentAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED1D30))(this);
	}
	template <typename R = TargetComponent*> R get_target() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED1D3C))(this);
	}
	template <typename R = bool> R get_hasTarget() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED1DC4))(this);
	}
	template <typename R = void> R AddTarget(int32_t newId) {
		return ((R (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xEC7C20))(this, newId);
	}
	template <typename R = void> R ReplaceTarget(int32_t newId) {
		return ((R (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xED1DD0))(this, newId);
	}
	template <typename R = void> R RemoveTarget() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED1ED4))(this);
	}
	template <typename R = TempBuffComponent*> R get_tempBuff() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED1EE0))(this);
	}
	template <typename R = bool> R get_hasTempBuff() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED1F68))(this);
	}
	template <typename R = void> R AddTempBuff(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED1F74))(this, newName);
	}
	template <typename R = void> R ReplaceTempBuff(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED2088))(this, newName);
	}
	template <typename R = void> R RemoveTempBuff() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED219C))(this);
	}
	template <typename R = TriptychComponent*> R get_triptych() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED21A8))(this);
	}
	template <typename R = bool> R get_hasTriptych() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED2230))(this);
	}
	template <typename R = void> R AddTriptych(Il2CppString* newCaption, bool newShowCloseButton, Il2CppString* newImage1, Il2CppString* newImage2, Il2CppString* newImage3, Il2CppString* newText1, Il2CppString* newText2, Il2CppString* newText3, Il2CppString* newTooltipCation1, Il2CppString* newTooltipCation2, Il2CppString* newTooltipCation3, Il2CppString* newTooltipText1, Il2CppString* newTooltipText2, Il2CppString* newTooltipText3) {
		return ((R (*)(DialogueEntity*, Il2CppString*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xED223C))(this, newCaption, newShowCloseButton, newImage1, newImage2, newImage3, newText1, newText2, newText3, newTooltipCation1, newTooltipCation2, newTooltipCation3, newTooltipText1, newTooltipText2, newTooltipText3);
	}
	template <typename R = void> R ReplaceTriptych(Il2CppString* newCaption, bool newShowCloseButton, Il2CppString* newImage1, Il2CppString* newImage2, Il2CppString* newImage3, Il2CppString* newText1, Il2CppString* newText2, Il2CppString* newText3, Il2CppString* newTooltipCation1, Il2CppString* newTooltipCation2, Il2CppString* newTooltipCation3, Il2CppString* newTooltipText1, Il2CppString* newTooltipText2, Il2CppString* newTooltipText3) {
		return ((R (*)(DialogueEntity*, Il2CppString*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xED247C))(this, newCaption, newShowCloseButton, newImage1, newImage2, newImage3, newText1, newText2, newText3, newTooltipCation1, newTooltipCation2, newTooltipCation3, newTooltipText1, newTooltipText2, newTooltipText3);
	}
	template <typename R = void> R RemoveTriptych() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED26BC))(this);
	}
	template <typename R = UnlockActionComponent*> R get_unlockAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED26C8))(this);
	}
	template <typename R = bool> R get_hasUnlockAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED2750))(this);
	}
	template <typename R = void> R AddUnlockAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED275C))(this, newName);
	}
	template <typename R = void> R ReplaceUnlockAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED2870))(this, newName);
	}
	template <typename R = void> R RemoveUnlockAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED2984))(this);
	}
	template <typename R = UnlockContainerActionComponent*> R get_unlockContainerAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED2990))(this);
	}
	template <typename R = bool> R get_hasUnlockContainerAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED2A18))(this);
	}
	template <typename R = void> R AddUnlockContainerAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED2A24))(this, newName);
	}
	template <typename R = void> R ReplaceUnlockContainerAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED2B38))(this, newName);
	}
	template <typename R = void> R RemoveUnlockContainerAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED2C4C))(this);
	}
	template <typename R = UnlockPortalActionComponent*> R get_unlockPortalAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED2C58))(this);
	}
	template <typename R = bool> R get_hasUnlockPortalAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED2CE0))(this);
	}
	template <typename R = void> R AddUnlockPortalAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED2CEC))(this, newName);
	}
	template <typename R = void> R ReplaceUnlockPortalAction(Il2CppString* newName) {
		return ((R (*)(DialogueEntity*, Il2CppString*))(Il2CppBase() + 0xED2E00))(this, newName);
	}
	template <typename R = void> R RemoveUnlockPortalAction() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED2F14))(this);
	}
	template <typename R = WindowComponent*> R get_window() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED2F20))(this);
	}
	template <typename R = bool> R get_hasWindow() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED2FA8))(this);
	}
	template <typename R = void> R AddWindow(int32_t newId) {
		return ((R (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xED2FB4))(this, newId);
	}
	template <typename R = void> R ReplaceWindow(int32_t newId) {
		return ((R (*)(DialogueEntity*, int32_t))(Il2CppBase() + 0xED30B8))(this, newId);
	}
	template <typename R = void> R RemoveWindow() {
		return ((R (*)(DialogueEntity*))(Il2CppBase() + 0xED31BC))(this);
	}

};

