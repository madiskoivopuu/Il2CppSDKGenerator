#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArenaClientWorldSender
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaClientWorldSender"));
	}


	template <typename R = void> static R SendDetectedQuality(ICommonClientWorld* world, uint8_t detectedQuality) {
		return ((R (*)(void *, ICommonClientWorld*, uint8_t))(Il2CppBase() + 0x1A24F7C))(0, world, detectedQuality);
	}
	template <typename R = void> static R SendFuse(ICommonClientWorld* world, int32_t targetId) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A2509C))(0, world, targetId);
	}
	template <typename R = void> static R SendChattingStatus(ICommonClientWorld* world, int32_t targetId, bool chatting) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, bool))(Il2CppBase() + 0x1A251C8))(0, world, targetId, chatting);
	}
	template <typename R = void> static R SendChangePvpClanRelation(ICommonClientWorld* world, int64_t targetClanId, bool setWar) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t, bool))(Il2CppBase() + 0x1A25300))(0, world, targetClanId, setWar);
	}
	template <typename R = void> static R LinkAccount(ICommonClientWorld* world, LinkType type, Il2CppString* linkToThisSocialId, bool isForce, int64_t idToLink) {
		return ((R (*)(void *, ICommonClientWorld*, LinkType, Il2CppString*, bool, int64_t))(Il2CppBase() + 0x1A25434))(0, world, type, linkToThisSocialId, isForce, idToLink);
	}
	template <typename R = void> static R UnlinkAccount(ICommonClientWorld* world, LinkType type, Il2CppString* idToUnlink) {
		return ((R (*)(void *, ICommonClientWorld*, LinkType, Il2CppString*))(Il2CppBase() + 0x1A25730))(0, world, type, idToUnlink);
	}
	template <typename R = void> static R SendPushNotificationSettings(ICommonClientWorld* world, bool pushEndbled, Il2CppArray<Il2CppString*>* blocked) {
		return ((R (*)(void *, ICommonClientWorld*, bool, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A25870))(0, world, pushEndbled, blocked);
	}
	template <typename R = void> static R SendLanguage(ICommonClientWorld* world, Il2CppString* language) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A259B4))(0, world, language);
	}
	template <typename R = void> static R SendInput(ICommonClientWorld* world, Vec2 xy, int64_t ticks, int32_t moveToTargetId, bool reliable) {
		return ((R (*)(void *, ICommonClientWorld*, Vec2, int64_t, int32_t, bool))(Il2CppBase() + 0x1A25AE0))(0, world, xy, ticks, moveToTargetId, reliable);
	}
	template <typename R = void> static R SendSwitchSneak(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A25C5C))(0, world);
	}
	template <typename R = void> static R SendAction(ICommonClientWorld* world, ActionEntity* action) {
		return ((R (*)(void *, ICommonClientWorld*, ActionEntity*))(Il2CppBase() + 0x1A25D60))(0, world, action);
	}
	template <typename R = void> static R SendCancelUse(ICommonClientWorld* world, Il2CppString* itemName) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A25EC0))(0, world, itemName);
	}
	template <typename R = void> static R SendInterruptAction(ICommonClientWorld* world, ActionEntity* action) {
		return ((R (*)(void *, ICommonClientWorld*, ActionEntity*))(Il2CppBase() + 0x1A25FEC))(0, world, action);
	}
	template <typename R = void> static R SendFishingHook(ICommonClientWorld* world, int64_t time, bool useNet) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t, bool))(Il2CppBase() + 0x1A26228))(0, world, time, useNet);
	}
	template <typename R = void> static R SendGetRavenNestStats(ICommonClientWorld* world, int32_t id, int64_t lastTime) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, int64_t))(Il2CppBase() + 0x1A2635C))(0, world, id, lastTime);
	}
	template <typename R = int64_t> static R SendBuildEntity(ICommonClientWorld* world, Il2CppString* name, Vec2 pos, uint8_t orientation) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, Vec2, uint8_t))(Il2CppBase() + 0x1A26494))(0, world, name, pos, orientation);
	}
	template <typename R = void> static R SendUpgradeBuildEntity(ICommonClientWorld* world, int32_t id) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A2671C))(0, world, id);
	}
	template <typename R = void> static R SendDestroyBuildEntity(ICommonClientWorld* world, int32_t entityId) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A2683C))(0, world, entityId);
	}
	template <typename R = void> static R SendMoveBuildEntity(ICommonClientWorld* world, int32_t id, float x, float y, uint8_t orientation) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, float, float, uint8_t))(Il2CppBase() + 0x1A2695C))(0, world, id, x, y, orientation);
	}
	template <typename R = void> static R SendTakeFurniture(ICommonClientWorld* world, GameEntity* entity, bool disassemble) {
		return ((R (*)(void *, ICommonClientWorld*, GameEntity*, bool))(Il2CppBase() + 0x1A26AA4))(0, world, entity, disassemble);
	}
	template <typename R = void> static R SendCloseWindow(ICommonClientWorld* world, Il2CppString* name) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A26BF4))(0, world, name);
	}
	template <typename R = void> static R SendTryFillRavenNest(ICommonClientWorld* world, int32_t targetId, int32_t fromId, Il2CppString* resource) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1A26D20))(0, world, targetId, fromId, resource);
	}
	template <typename R = void> static R SendTryFillCampBath(ICommonClientWorld* world, int32_t targetId, int32_t fromId, Il2CppString* resource) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1A26E6C))(0, world, targetId, fromId, resource);
	}
	template <typename R = void> static R SendTryMoveFromInventory(ICommonClientWorld* world, InventorySlotEntity* invetoryEntity) {
		return ((R (*)(void *, ICommonClientWorld*, InventorySlotEntity*))(Il2CppBase() + 0x1A26FB8))(0, world, invetoryEntity);
	}
	template <typename R = void> static R SendTryMoveResource(ICommonClientWorld* world, Il2CppString* resource) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A27188))(0, world, resource);
	}
	template <typename R = void> static R SendTryMoveFromInventory_1(ICommonClientWorld* world, int32_t fromId) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A27064))(0, world, fromId);
	}
	template <typename R = void> static R SendMoveInventory(ICommonClientWorld* world, InventorySlotEntity* invetoryEntity, int32_t toId) {
		return ((R (*)(void *, ICommonClientWorld*, InventorySlotEntity*, int32_t))(Il2CppBase() + 0x1A272C4))(0, world, invetoryEntity, toId);
	}
	template <typename R = void> static R SendTryMoveFromInventoryConvertable(ICommonClientWorld* world, InventorySlotEntity* fromInventory, InventorySlotEntity* toInventory) {
		return ((R (*)(void *, ICommonClientWorld*, InventorySlotEntity*, InventorySlotEntity*))(Il2CppBase() + 0x1A275FC))(0, world, fromInventory, toInventory);
	}
	template <typename R = void> static R SendMoveResource(ICommonClientWorld* world, Il2CppString* resource, int32_t toId) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0x1A274C0))(0, world, resource, toId);
	}
	template <typename R = void> static R SendMoveInventory_1(ICommonClientWorld* world, int32_t fromId, int32_t toId) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0x1A27394))(0, world, fromId, toId);
	}
	template <typename R = void> static R SendSplitInventory(ICommonClientWorld* world, int32_t id, int32_t splitedCount, int32_t toId) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1A277A4))(0, world, id, splitedCount, toId);
	}
	template <typename R = void> static R SendDeleteInventory(ICommonClientWorld* world, int32_t id, Nullable1<int32_t>* count) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, Nullable1<int32_t>*))(Il2CppBase() + 0x1A278E4))(0, world, id, count);
	}
	template <typename R = void> static R SendUseInstant(ICommonClientWorld* world, int32_t id) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A27A18))(0, world, id);
	}
	template <typename R = void> static R SendTakeAllInventory(ICommonClientWorld* world, int32_t targetId) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A27B38))(0, world, targetId);
	}
	template <typename R = void> static R SendPutAllInventory(ICommonClientWorld* world, int32_t targetId) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A27C60))(0, world, targetId);
	}
	template <typename R = void> static R SendOrganizeInventory(ICommonClientWorld* world, int32_t targetId) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A27D80))(0, world, targetId);
	}
	template <typename R = void> static R SendSkipCraft(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A27EA0))(0, world);
	}
	template <typename R = void> static R SendSkipRepair(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A27FA4))(0, world);
	}
	template <typename R = void> static R SendFinalize(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A280A8))(0, world);
	}
	template <typename R = void> static R SendPassPrerequisite(ICommonClientWorld* world, int32_t id, int32_t grade) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0x1A281C4))(0, world, id, grade);
	}
	template <typename R = void> static R SendEnterDungeon(ICommonClientWorld* world, int32_t id, int32_t grade) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0x1A282F0))(0, world, id, grade);
	}
	template <typename R = void> static R SendApplyBattery(ICommonClientWorld* world, int32_t targetId, int32_t slotId, Il2CppString* name) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1A2841C))(0, world, targetId, slotId, name);
	}
	template <typename R = void> static R SendUpdateBattery(ICommonClientWorld* world, int32_t targetId, int64_t targetDuration) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, int64_t))(Il2CppBase() + 0x1A28568))(0, world, targetId, targetDuration);
	}
	template <typename R = void> static R SendLearnBlueprint(ICommonClientWorld* world, Il2CppString* blueprintName) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A2856C))(0, world, blueprintName);
	}
	template <typename R = void> static R SendCraftBlueprint(ICommonClientWorld* world, Il2CppString* blueprintName) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A28698))(0, world, blueprintName);
	}
	template <typename R = void> static R SendCheat(ICommonClientWorld* world, Il2CppString* cheatName, int32_t count, Il2CppString* param) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x1A287C4))(0, world, cheatName, count, param);
	}
	template <typename R = void> static R SendCheatAddResource(ICommonClientWorld* world, Il2CppString* resourceName, int32_t count, Nullable1<float>* durability) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, int32_t, Nullable1<float>*))(Il2CppBase() + 0x1A287C8))(0, world, resourceName, count, durability);
	}
	template <typename R = void> static R SendCheatResetLimit(ICommonClientWorld* world, int32_t targetId) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A287CC))(0, world, targetId);
	}
	template <typename R = void> static R SendToMailCheat(ICommonClientWorld* world, Il2CppString* resourceName, int32_t count, Nullable1<float>* durability) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, int32_t, Nullable1<float>*))(Il2CppBase() + 0x1A287D0))(0, world, resourceName, count, durability);
	}
	template <typename R = void> static R SendCheatAddQuestProgress(ICommonClientWorld* world, Il2CppString* questName, int32_t addProgress) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0x1A287D4))(0, world, questName, addProgress);
	}
	template <typename R = void> static R SendCheatSpawnObject(ICommonClientWorld* world, Il2CppString* name) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A287D8))(0, world, name);
	}
	template <typename R = void> static R SendCheatToggleSelfMagic(ICommonClientWorld* world, Il2CppString* name) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A287DC))(0, world, name);
	}
	template <typename R = void> static R SendLeaveArena(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A287E0))(0, world);
	}
	template <typename R = void> static R SendAcceptInvite(ICommonClientWorld* world, int64_t inviteId, bool isAccept) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t, bool))(Il2CppBase() + 0x1A2893C))(0, world, inviteId, isAccept);
	}
	template <typename R = void> static R SendOnGetUsersForInvite(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A28A8C))(0, world);
	}
	template <typename R = void> static R SendKickUser(ICommonClientWorld* world, int64_t idToKick) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A28BA8))(0, world, idToKick);
	}
	template <typename R = void> static R SendClanFindUserForInvite(ICommonClientWorld* world, Il2CppString* name) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A28CF0))(0, world, name);
	}
	template <typename R = void> static R SendClanInviteUser(ICommonClientWorld* world, int64_t idToInvite, uint8_t slot, Il2CppString* description) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t, uint8_t, Il2CppString*))(Il2CppBase() + 0x1A28E2C))(0, world, idToInvite, slot, description);
	}
	template <typename R = void> static R SendRenameClan(ICommonClientWorld* world, Il2CppString* newName) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A28F80))(0, world, newName);
	}
	template <typename R = void> static R SendAllowClanMembersStartRaid(ICommonClientWorld* world, bool allow) {
		return ((R (*)(void *, ICommonClientWorld*, bool))(Il2CppBase() + 0x1A290DC))(0, world, allow);
	}
	template <typename R = void> static R SendCreateClan(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A29220))(0, world);
	}
	template <typename R = void> static R SendDisbandClan(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A29228))(0, world);
	}
	template <typename R = void> static R SendClanJoinRequest(ICommonClientWorld* world, Il2CppString* text) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A29360))(0, world, text);
	}
	template <typename R = void> static R SendClanJoinStopSearch(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A294BC))(0, world);
	}
	template <typename R = void> static R SendTakeStoreInbox(ICommonClientWorld* world, int64_t messageId) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A295F4))(0, world, messageId);
	}
	template <typename R = void> static R SendTakeTournamentReward(ICommonClientWorld* world, int64_t messageId) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A29714))(0, world, messageId);
	}
	template <typename R = void> static R SendAcquireDicedItem(ICommonClientWorld* world, Il2CppString* entityName, int64_t mailMessageId) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, int64_t))(Il2CppBase() + 0x1A29834))(0, world, entityName, mailMessageId);
	}
	template <typename R = void> static R SendAcquireDailyVIPChest(ICommonClientWorld* world, int64_t storeDataId) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A29970))(0, world, storeDataId);
	}
	template <typename R = void> static R SendResetStoreProducts(ICommonClientWorld* world, int32_t targetId, StoreCategory category) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, StoreCategory))(Il2CppBase() + 0x1A29A90))(0, world, targetId, category);
	}
	template <typename R = void> static R SendStartIAPPurchase(ICommonClientWorld* world, StartIAPPurchaseData data) {
		return ((R (*)(void *, ICommonClientWorld*, StartIAPPurchaseData))(Il2CppBase() + 0x1A29BBC))(0, world, data);
	}
	template <typename R = void> static R SendFailIAPPurchase(ICommonClientWorld* world, FailIAPPurchaseData data) {
		return ((R (*)(void *, ICommonClientWorld*, FailIAPPurchaseData))(Il2CppBase() + 0x1A29CD4))(0, world, data);
	}
	template <typename R = void> static R SendValidateIAPPurchase(ICommonClientWorld* world, ValidatePurchaseData request) {
		return ((R (*)(void *, ICommonClientWorld*, ValidatePurchaseData))(Il2CppBase() + 0x1A29DE8))(0, world, request);
	}
	template <typename R = void> static R SendPurchaseForCurrency(ICommonClientWorld* world, int64_t storeId, CurrencyType cType) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t, CurrencyType))(Il2CppBase() + 0x1A29EFC))(0, world, storeId, cType);
	}
	template <typename R = void> static R SendPurchaseForItems(ICommonClientWorld* world, int64_t storeId, Il2CppString* itemName) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t, Il2CppString*))(Il2CppBase() + 0x1A2A02C))(0, world, storeId, itemName);
	}
	template <typename R = void> static R SendPurchaseForTargetInventory(ICommonClientWorld* world, CurrencyType currency, int32_t index) {
		return ((R (*)(void *, ICommonClientWorld*, CurrencyType, int32_t))(Il2CppBase() + 0x1A2A168))(0, world, currency, index);
	}
	template <typename R = void> static R SendCosmetics(ICommonClientWorld* world, Gender gender, Il2CppDictionary<int32_t, Il2CppString*>* slots) {
		return ((R (*)(void *, ICommonClientWorld*, Gender, Il2CppDictionary<int32_t, Il2CppString*>*))(Il2CppBase() + 0x1A2A294))(0, world, gender, slots);
	}
	template <typename R = void> static R SendCustomization(ICommonClientWorld* world, Gender gender, Il2CppString* hairName, Il2CppString* beardName, Il2CppString* hairColorName, Il2CppString* skinColorName, Il2CppString* faceName, Il2CppString* className) {
		return ((R (*)(void *, ICommonClientWorld*, Gender, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A2A3D4))(0, world, gender, hairName, beardName, hairColorName, skinColorName, faceName, className);
	}
	template <typename R = void> static R SendShare(ICommonClientWorld* world, int32_t targetId, bool isShared) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, bool))(Il2CppBase() + 0x1A2A62C))(0, world, targetId, isShared);
	}
	template <typename R = void> static R SendRename(ICommonClientWorld* world, Il2CppString* newName) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A2A764))(0, world, newName);
	}
	template <typename R = void> static R SendWorkerRename(ICommonClientWorld* world, int32_t furnitureId, Il2CppString* newName) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, Il2CppString*))(Il2CppBase() + 0x1A2A8C0))(0, world, furnitureId, newName);
	}
	template <typename R = void> static R SendSelectClass(ICommonClientWorld* world, Il2CppString* newClass, bool fast) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, bool))(Il2CppBase() + 0x1A2AA00))(0, world, newClass, fast);
	}
	template <typename R = void> static R SendPriorityTarget(ICommonClientWorld* world, int32_t targetId) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A2AB40))(0, world, targetId);
	}
	template <typename R = void> static R SendFCMToken(ICommonClientWorld* world, Il2CppString* token, uint8_t platform) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, uint8_t))(Il2CppBase() + 0x1A2AC60))(0, world, token, platform);
	}
	template <typename R = void> static R SendClientLog(ICommonClientWorld* world, Il2CppString* text) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A2AD9C))(0, world, text);
	}
	template <typename R = void> static R SendMinimapPing(ICommonClientWorld* world, float xPos, float yPos) {
		return ((R (*)(void *, ICommonClientWorld*, float, float))(Il2CppBase() + 0x1A2AEC8))(0, world, xPos, yPos);
	}
	template <typename R = void> static R SendMountFuse(ICommonClientWorld* world, Il2CppArray<int32_t>* Ids, int32_t typeIndex, Il2CppArray<int32_t>* selectedSkillSlots) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppArray<int32_t>*, int32_t, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1A2B008))(0, world, Ids, typeIndex, selectedSkillSlots);
	}
	template <typename R = void> static R SendDeleteInfoMessage(ICommonClientWorld* world, int64_t messageId) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A2B16C))(0, world, messageId);
	}
	template <typename R = void> static R SendMannequinSwap(ICommonClientWorld* world, int32_t targetId) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A2B28C))(0, world, targetId);
	}
	template <typename R = void> static R SendStartGuildQuest(ICommonClientWorld* world, Il2CppString* questName) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A2B3AC))(0, world, questName);
	}
	template <typename R = void> static R SendCreateGuild(ICommonClientWorld* world, Il2CppString* name, Il2CppString* tag, Il2CppString* description, int32_t language, GuildType guildType) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, GuildType))(Il2CppBase() + 0x1A2B500))(0, world, name, tag, description, language, guildType);
	}
	template <typename R = void> static R SendDisbandGuild(ICommonClientWorld* world, int64_t id) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A2B690))(0, world, id);
	}
	template <typename R = void> static R SendUpdateGuild(ICommonClientWorld* world, Il2CppString* name, Il2CppString* tag, Il2CppString* description, int32_t language, GuildType guildType) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, GuildType))(Il2CppBase() + 0x1A2B7B0))(0, world, name, tag, description, language, guildType);
	}
	template <typename R = void> static R SendGuildFindUserForInvite(ICommonClientWorld* world, Il2CppString* name) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A2B940))(0, world, name);
	}
	template <typename R = void> static R SendFindGuildForInvite(ICommonClientWorld* world, Il2CppString* guildTag, Il2CppString* guildName) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A2BA7C))(0, world, guildTag, guildName);
	}
	template <typename R = void> static R SendGuildInvitePlayer(ICommonClientWorld* world, int64_t playerId) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A2BBD4))(0, world, playerId);
	}
	template <typename R = void> static R SendPlayerInviteGuild(ICommonClientWorld* world, int64_t guildId, Il2CppString* text) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t, Il2CppString*))(Il2CppBase() + 0x1A2BD04))(0, world, guildId, text);
	}
	template <typename R = void> static R SendChangeGuildDailyMessage(ICommonClientWorld* world, uint8_t type, Il2CppString* text) {
		return ((R (*)(void *, ICommonClientWorld*, uint8_t, Il2CppString*))(Il2CppBase() + 0x1A2BE48))(0, world, type, text);
	}
	template <typename R = void> static R SendGuildUserRole(ICommonClientWorld* world, int64_t targetPlayerId, GuildRole role) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t, GuildRole))(Il2CppBase() + 0x1A2BF88))(0, world, targetPlayerId, role);
	}
	template <typename R = void> static R SendGuildMemberKick(ICommonClientWorld* world, int64_t targetPlayerId) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A2C0B8))(0, world, targetPlayerId);
	}
	template <typename R = void> static R SendAcceptGuildInvite(ICommonClientWorld* world, int64_t inviteId, bool accept) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t, bool))(Il2CppBase() + 0x1A2C1D8))(0, world, inviteId, accept);
	}
	template <typename R = void> static R SendRollChestReward(ICommonClientWorld* world, int32_t targetId) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A2C30C))(0, world, targetId);
	}
	template <typename R = void> static R SendGuildRatingRequest(ICommonClientWorld* world, RatingGuildType type) {
		return ((R (*)(void *, ICommonClientWorld*, RatingGuildType))(Il2CppBase() + 0x1A2C42C))(0, world, type);
	}
	template <typename R = void> static R SendGuildJoinResultReceive(ICommonClientWorld* world, int64_t messageId) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A2C54C))(0, world, messageId);
	}
	template <typename R = void> static R SendCreateLobby(ICommonClientWorld* world, LobbyType type, int32_t playersCount) {
		return ((R (*)(void *, ICommonClientWorld*, LobbyType, int32_t))(Il2CppBase() + 0x1A2C66C))(0, world, type, playersCount);
	}
	template <typename R = void> static R SendAcceptLobby(ICommonClientWorld* world, int64_t portalsId, bool accept) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t, bool))(Il2CppBase() + 0x1A2C798))(0, world, portalsId, accept);
	}
	template <typename R = void> static R SendFindPlayersLobby(ICommonClientWorld* world, LobbyType type) {
		return ((R (*)(void *, ICommonClientWorld*, LobbyType))(Il2CppBase() + 0x1A2C8CC))(0, world, type);
	}
	template <typename R = void> static R SendGlobalTournamentRequest(ICommonClientWorld* world, Il2CppString* tournamentBlueprint) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A2C9F8))(0, world, tournamentBlueprint);
	}
	template <typename R = void> static R SendCycleRequest(ICommonClientWorld* world, RequestType type, Il2CppString* deviceID, Il2CppString* googleID, Il2CppString* gameCenterID, Il2CppString* huaweyID, Il2CppString* firebaseID) {
		return ((R (*)(void *, ICommonClientWorld*, RequestType, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A2CB24))(0, world, type, deviceID, googleID, gameCenterID, huaweyID, firebaseID);
	}
	template <typename R = void> static R SendExtractorAction(ICommonClientWorld* world, RequestType type, int32_t targetId, int32_t toSlotId, int32_t fromSlotId, int32_t stealResourceCount) {
		return ((R (*)(void *, ICommonClientWorld*, RequestType, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1A2CCF0))(0, world, type, targetId, toSlotId, fromSlotId, stealResourceCount);
	}
	template <typename R = void> static R SendEquipBestAndTakeAllInventory(ICommonClientWorld* world, GameEntity* avatar, GameEntity* targetChest) {
		return ((R (*)(void *, ICommonClientWorld*, GameEntity*, GameEntity*))(Il2CppBase() + 0x1A2CE48))(0, world, avatar, targetChest);
	}

};

