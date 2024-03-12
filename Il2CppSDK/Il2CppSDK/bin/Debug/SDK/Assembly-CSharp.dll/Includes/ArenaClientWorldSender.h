#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArenaClientWorldSender
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaClientWorldSender"));
	}


	template <typename T = void> static T SendDetectedQuality(uintptr_t world, unsigned char detectedQuality) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x1A24F7C))(0, world, detectedQuality);
	}
	template <typename T = void> static T SendFuse(uintptr_t world, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1A2509C))(0, world, targetId);
	}
	template <typename T = void> static T SendChattingStatus(uintptr_t world, int32_t targetId, bool chatting) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1A251C8))(0, world, targetId, chatting);
	}
	template <typename T = void> static T SendChangePvpClanRelation(uintptr_t world, int64_t targetClanId, bool setWar) {
		return ((T (*)(void *, uintptr_t, int64_t, bool))(Il2CppBase() + 0x1A25300))(0, world, targetClanId, setWar);
	}
	template <typename T = void> static T LinkAccount(uintptr_t world, uintptr_t type, Il2CppString* linkToThisSocialId, bool isForce, int64_t idToLink) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, bool, int64_t))(Il2CppBase() + 0x1A25434))(0, world, type, linkToThisSocialId, isForce, idToLink);
	}
	template <typename T = void> static T UnlinkAccount(uintptr_t world, uintptr_t type, Il2CppString* idToUnlink) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A25730))(0, world, type, idToUnlink);
	}
	template <typename T = void> static T SendPushNotificationSettings(uintptr_t world, bool pushEndbled, Il2CppArray<uintptr_t>* blocked) {
		return ((T (*)(void *, uintptr_t, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A25870))(0, world, pushEndbled, blocked);
	}
	template <typename T = void> static T SendLanguage(uintptr_t world, Il2CppString* language) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A259B4))(0, world, language);
	}
	template <typename T = void> static T SendInput(uintptr_t world, uintptr_t xy, int64_t ticks, int32_t moveToTargetId, bool reliable) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t, int32_t, bool))(Il2CppBase() + 0x1A25AE0))(0, world, xy, ticks, moveToTargetId, reliable);
	}
	template <typename T = void> static T SendSwitchSneak(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A25C5C))(0, world);
	}
	template <typename T = void> static T SendAction(uintptr_t world, uintptr_t action) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A25D60))(0, world, action);
	}
	template <typename T = void> static T SendCancelUse(uintptr_t world, Il2CppString* itemName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A25EC0))(0, world, itemName);
	}
	template <typename T = void> static T SendInterruptAction(uintptr_t world, uintptr_t action) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A25FEC))(0, world, action);
	}
	template <typename T = void> static T SendFishingHook(uintptr_t world, int64_t time, bool useNet) {
		return ((T (*)(void *, uintptr_t, int64_t, bool))(Il2CppBase() + 0x1A26228))(0, world, time, useNet);
	}
	template <typename T = void> static T SendGetRavenNestStats(uintptr_t world, int32_t id, int64_t lastTime) {
		return ((T (*)(void *, uintptr_t, int32_t, int64_t))(Il2CppBase() + 0x1A2635C))(0, world, id, lastTime);
	}
	template <typename T = int64_t> static T SendBuildEntity(uintptr_t world, Il2CppString* name, uintptr_t pos, unsigned char orientation) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, unsigned char))(Il2CppBase() + 0x1A26494))(0, world, name, pos, orientation);
	}
	template <typename T = void> static T SendUpgradeBuildEntity(uintptr_t world, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1A2671C))(0, world, id);
	}
	template <typename T = void> static T SendDestroyBuildEntity(uintptr_t world, int32_t entityId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1A2683C))(0, world, entityId);
	}
	template <typename T = void> static T SendMoveBuildEntity(uintptr_t world, int32_t id, float x, float y, unsigned char orientation) {
		return ((T (*)(void *, uintptr_t, int32_t, float, float, unsigned char))(Il2CppBase() + 0x1A2695C))(0, world, id, x, y, orientation);
	}
	template <typename T = void> static T SendTakeFurniture(uintptr_t world, uintptr_t entity, bool disassemble) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1A26AA4))(0, world, entity, disassemble);
	}
	template <typename T = void> static T SendCloseWindow(uintptr_t world, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A26BF4))(0, world, name);
	}
	template <typename T = void> static T SendTryFillRavenNest(uintptr_t world, int32_t targetId, int32_t fromId, Il2CppString* resource) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1A26D20))(0, world, targetId, fromId, resource);
	}
	template <typename T = void> static T SendTryFillCampBath(uintptr_t world, int32_t targetId, int32_t fromId, Il2CppString* resource) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1A26E6C))(0, world, targetId, fromId, resource);
	}
	template <typename T = void> static T SendTryMoveFromInventory(uintptr_t world, uintptr_t invetoryEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A26FB8))(0, world, invetoryEntity);
	}
	template <typename T = void> static T SendTryMoveResource(uintptr_t world, Il2CppString* resource) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A27188))(0, world, resource);
	}
	template <typename T = void> static T SendTryMoveFromInventory_1(uintptr_t world, int32_t fromId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1A27064))(0, world, fromId);
	}
	template <typename T = void> static T SendMoveInventory(uintptr_t world, uintptr_t invetoryEntity, int32_t toId) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A272C4))(0, world, invetoryEntity, toId);
	}
	template <typename T = void> static T SendTryMoveFromInventoryConvertable(uintptr_t world, uintptr_t fromInventory, uintptr_t toInventory) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A275FC))(0, world, fromInventory, toInventory);
	}
	template <typename T = void> static T SendMoveResource(uintptr_t world, Il2CppString* resource, int32_t toId) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1A274C0))(0, world, resource, toId);
	}
	template <typename T = void> static T SendMoveInventory_1(uintptr_t world, int32_t fromId, int32_t toId) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1A27394))(0, world, fromId, toId);
	}
	template <typename T = void> static T SendSplitInventory(uintptr_t world, int32_t id, int32_t splitedCount, int32_t toId) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1A277A4))(0, world, id, splitedCount, toId);
	}
	template <typename T = void> static T SendDeleteInventory(uintptr_t world, int32_t id, void* count) {
		return ((T (*)(void *, uintptr_t, int32_t, void*))(Il2CppBase() + 0x1A278E4))(0, world, id, count);
	}
	template <typename T = void> static T SendUseInstant(uintptr_t world, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1A27A18))(0, world, id);
	}
	template <typename T = void> static T SendTakeAllInventory(uintptr_t world, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1A27B38))(0, world, targetId);
	}
	template <typename T = void> static T SendPutAllInventory(uintptr_t world, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1A27C60))(0, world, targetId);
	}
	template <typename T = void> static T SendOrganizeInventory(uintptr_t world, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1A27D80))(0, world, targetId);
	}
	template <typename T = void> static T SendSkipCraft(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A27EA0))(0, world);
	}
	template <typename T = void> static T SendSkipRepair(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A27FA4))(0, world);
	}
	template <typename T = void> static T SendFinalize(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A280A8))(0, world);
	}
	template <typename T = void> static T SendPassPrerequisite(uintptr_t world, int32_t id, int32_t grade) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1A281C4))(0, world, id, grade);
	}
	template <typename T = void> static T SendEnterDungeon(uintptr_t world, int32_t id, int32_t grade) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1A282F0))(0, world, id, grade);
	}
	template <typename T = void> static T SendApplyBattery(uintptr_t world, int32_t targetId, int32_t slotId, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1A2841C))(0, world, targetId, slotId, name);
	}
	template <typename T = void> static T SendUpdateBattery(uintptr_t world, int32_t targetId, int64_t targetDuration) {
		return ((T (*)(void *, uintptr_t, int32_t, int64_t))(Il2CppBase() + 0x1A28568))(0, world, targetId, targetDuration);
	}
	template <typename T = void> static T SendLearnBlueprint(uintptr_t world, Il2CppString* blueprintName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A2856C))(0, world, blueprintName);
	}
	template <typename T = void> static T SendCraftBlueprint(uintptr_t world, Il2CppString* blueprintName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A28698))(0, world, blueprintName);
	}
	template <typename T = void> static T SendCheat(uintptr_t world, Il2CppString* cheatName, int32_t count, Il2CppString* param) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x1A287C4))(0, world, cheatName, count, param);
	}
	template <typename T = void> static T SendCheatAddResource(uintptr_t world, Il2CppString* resourceName, int32_t count, void* durability) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x1A287C8))(0, world, resourceName, count, durability);
	}
	template <typename T = void> static T SendCheatResetLimit(uintptr_t world, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1A287CC))(0, world, targetId);
	}
	template <typename T = void> static T SendToMailCheat(uintptr_t world, Il2CppString* resourceName, int32_t count, void* durability) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x1A287D0))(0, world, resourceName, count, durability);
	}
	template <typename T = void> static T SendCheatAddQuestProgress(uintptr_t world, Il2CppString* questName, int32_t addProgress) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1A287D4))(0, world, questName, addProgress);
	}
	template <typename T = void> static T SendCheatSpawnObject(uintptr_t world, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A287D8))(0, world, name);
	}
	template <typename T = void> static T SendCheatToggleSelfMagic(uintptr_t world, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A287DC))(0, world, name);
	}
	template <typename T = void> static T SendLeaveArena(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A287E0))(0, world);
	}
	template <typename T = void> static T SendAcceptInvite(uintptr_t world, int64_t inviteId, bool isAccept) {
		return ((T (*)(void *, uintptr_t, int64_t, bool))(Il2CppBase() + 0x1A2893C))(0, world, inviteId, isAccept);
	}
	template <typename T = void> static T SendOnGetUsersForInvite(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A28A8C))(0, world);
	}
	template <typename T = void> static T SendKickUser(uintptr_t world, int64_t idToKick) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1A28BA8))(0, world, idToKick);
	}
	template <typename T = void> static T SendClanFindUserForInvite(uintptr_t world, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A28CF0))(0, world, name);
	}
	template <typename T = void> static T SendClanInviteUser(uintptr_t world, int64_t idToInvite, unsigned char slot, Il2CppString* description) {
		return ((T (*)(void *, uintptr_t, int64_t, unsigned char, Il2CppString*))(Il2CppBase() + 0x1A28E2C))(0, world, idToInvite, slot, description);
	}
	template <typename T = void> static T SendRenameClan(uintptr_t world, Il2CppString* newName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A28F80))(0, world, newName);
	}
	template <typename T = void> static T SendAllowClanMembersStartRaid(uintptr_t world, bool allow) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x1A290DC))(0, world, allow);
	}
	template <typename T = void> static T SendCreateClan(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A29220))(0, world);
	}
	template <typename T = void> static T SendDisbandClan(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A29228))(0, world);
	}
	template <typename T = void> static T SendClanJoinRequest(uintptr_t world, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A29360))(0, world, text);
	}
	template <typename T = void> static T SendClanJoinStopSearch(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A294BC))(0, world);
	}
	template <typename T = void> static T SendTakeStoreInbox(uintptr_t world, int64_t messageId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1A295F4))(0, world, messageId);
	}
	template <typename T = void> static T SendTakeTournamentReward(uintptr_t world, int64_t messageId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1A29714))(0, world, messageId);
	}
	template <typename T = void> static T SendAcquireDicedItem(uintptr_t world, Il2CppString* entityName, int64_t mailMessageId) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int64_t))(Il2CppBase() + 0x1A29834))(0, world, entityName, mailMessageId);
	}
	template <typename T = void> static T SendAcquireDailyVIPChest(uintptr_t world, int64_t storeDataId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1A29970))(0, world, storeDataId);
	}
	template <typename T = void> static T SendResetStoreProducts(uintptr_t world, int32_t targetId, uintptr_t category) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1A29A90))(0, world, targetId, category);
	}
	template <typename T = void> static T SendStartIAPPurchase(uintptr_t world, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A29BBC))(0, world, data);
	}
	template <typename T = void> static T SendFailIAPPurchase(uintptr_t world, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A29CD4))(0, world, data);
	}
	template <typename T = void> static T SendValidateIAPPurchase(uintptr_t world, uintptr_t request) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A29DE8))(0, world, request);
	}
	template <typename T = void> static T SendPurchaseForCurrency(uintptr_t world, int64_t storeId, uintptr_t cType) {
		return ((T (*)(void *, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x1A29EFC))(0, world, storeId, cType);
	}
	template <typename T = void> static T SendPurchaseForItems(uintptr_t world, int64_t storeId, Il2CppString* itemName) {
		return ((T (*)(void *, uintptr_t, int64_t, Il2CppString*))(Il2CppBase() + 0x1A2A02C))(0, world, storeId, itemName);
	}
	template <typename T = void> static T SendPurchaseForTargetInventory(uintptr_t world, uintptr_t currency, int32_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A2A168))(0, world, currency, index);
	}
	template <typename T = void> static T SendCosmetics(uintptr_t world, uintptr_t gender, Il2CppDictionary<int32_t, Il2CppString*>* slots) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppDictionary<int32_t, Il2CppString*>*))(Il2CppBase() + 0x1A2A294))(0, world, gender, slots);
	}
	template <typename T = void> static T SendCustomization(uintptr_t world, uintptr_t gender, Il2CppString* hairName, Il2CppString* beardName, Il2CppString* hairColorName, Il2CppString* skinColorName, Il2CppString* faceName, Il2CppString* className) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A2A3D4))(0, world, gender, hairName, beardName, hairColorName, skinColorName, faceName, className);
	}
	template <typename T = void> static T SendShare(uintptr_t world, int32_t targetId, bool isShared) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1A2A62C))(0, world, targetId, isShared);
	}
	template <typename T = void> static T SendRename(uintptr_t world, Il2CppString* newName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A2A764))(0, world, newName);
	}
	template <typename T = void> static T SendWorkerRename(uintptr_t world, int32_t furnitureId, Il2CppString* newName) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1A2A8C0))(0, world, furnitureId, newName);
	}
	template <typename T = void> static T SendSelectClass(uintptr_t world, Il2CppString* newClass, bool fast) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x1A2AA00))(0, world, newClass, fast);
	}
	template <typename T = void> static T SendPriorityTarget(uintptr_t world, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1A2AB40))(0, world, targetId);
	}
	template <typename T = void> static T SendFCMToken(uintptr_t world, Il2CppString* token, unsigned char platform) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, unsigned char))(Il2CppBase() + 0x1A2AC60))(0, world, token, platform);
	}
	template <typename T = void> static T SendClientLog(uintptr_t world, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A2AD9C))(0, world, text);
	}
	template <typename T = void> static T SendMinimapPing(uintptr_t world, float xPos, float yPos) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x1A2AEC8))(0, world, xPos, yPos);
	}
	template <typename T = void> static T SendMountFuse(uintptr_t world, Il2CppArray<uintptr_t>* Ids, int32_t typeIndex, Il2CppArray<uintptr_t>* selectedSkillSlots) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A2B008))(0, world, Ids, typeIndex, selectedSkillSlots);
	}
	template <typename T = void> static T SendDeleteInfoMessage(uintptr_t world, int64_t messageId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1A2B16C))(0, world, messageId);
	}
	template <typename T = void> static T SendMannequinSwap(uintptr_t world, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1A2B28C))(0, world, targetId);
	}
	template <typename T = void> static T SendStartGuildQuest(uintptr_t world, Il2CppString* questName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A2B3AC))(0, world, questName);
	}
	template <typename T = void> static T SendCreateGuild(uintptr_t world, Il2CppString* name, Il2CppString* tag, Il2CppString* description, int32_t language, uintptr_t guildType) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x1A2B500))(0, world, name, tag, description, language, guildType);
	}
	template <typename T = void> static T SendDisbandGuild(uintptr_t world, int64_t id) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1A2B690))(0, world, id);
	}
	template <typename T = void> static T SendUpdateGuild(uintptr_t world, Il2CppString* name, Il2CppString* tag, Il2CppString* description, int32_t language, uintptr_t guildType) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x1A2B7B0))(0, world, name, tag, description, language, guildType);
	}
	template <typename T = void> static T SendGuildFindUserForInvite(uintptr_t world, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A2B940))(0, world, name);
	}
	template <typename T = void> static T SendFindGuildForInvite(uintptr_t world, Il2CppString* guildTag, Il2CppString* guildName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A2BA7C))(0, world, guildTag, guildName);
	}
	template <typename T = void> static T SendGuildInvitePlayer(uintptr_t world, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1A2BBD4))(0, world, playerId);
	}
	template <typename T = void> static T SendPlayerInviteGuild(uintptr_t world, int64_t guildId, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, int64_t, Il2CppString*))(Il2CppBase() + 0x1A2BD04))(0, world, guildId, text);
	}
	template <typename T = void> static T SendChangeGuildDailyMessage(uintptr_t world, unsigned char type, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, unsigned char, Il2CppString*))(Il2CppBase() + 0x1A2BE48))(0, world, type, text);
	}
	template <typename T = void> static T SendGuildUserRole(uintptr_t world, int64_t targetPlayerId, uintptr_t role) {
		return ((T (*)(void *, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x1A2BF88))(0, world, targetPlayerId, role);
	}
	template <typename T = void> static T SendGuildMemberKick(uintptr_t world, int64_t targetPlayerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1A2C0B8))(0, world, targetPlayerId);
	}
	template <typename T = void> static T SendAcceptGuildInvite(uintptr_t world, int64_t inviteId, bool accept) {
		return ((T (*)(void *, uintptr_t, int64_t, bool))(Il2CppBase() + 0x1A2C1D8))(0, world, inviteId, accept);
	}
	template <typename T = void> static T SendRollChestReward(uintptr_t world, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1A2C30C))(0, world, targetId);
	}
	template <typename T = void> static T SendGuildRatingRequest(uintptr_t world, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A2C42C))(0, world, type);
	}
	template <typename T = void> static T SendGuildJoinResultReceive(uintptr_t world, int64_t messageId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1A2C54C))(0, world, messageId);
	}
	template <typename T = void> static T SendCreateLobby(uintptr_t world, uintptr_t type, int32_t playersCount) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A2C66C))(0, world, type, playersCount);
	}
	template <typename T = void> static T SendAcceptLobby(uintptr_t world, int64_t portalsId, bool accept) {
		return ((T (*)(void *, uintptr_t, int64_t, bool))(Il2CppBase() + 0x1A2C798))(0, world, portalsId, accept);
	}
	template <typename T = void> static T SendFindPlayersLobby(uintptr_t world, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A2C8CC))(0, world, type);
	}
	template <typename T = void> static T SendGlobalTournamentRequest(uintptr_t world, Il2CppString* tournamentBlueprint) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A2C9F8))(0, world, tournamentBlueprint);
	}
	template <typename T = void> static T SendCycleRequest(uintptr_t world, uintptr_t type, Il2CppString* deviceID, Il2CppString* googleID, Il2CppString* gameCenterID, Il2CppString* huaweyID, Il2CppString* firebaseID) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A2CB24))(0, world, type, deviceID, googleID, gameCenterID, huaweyID, firebaseID);
	}
	template <typename T = void> static T SendExtractorAction(uintptr_t world, uintptr_t type, int32_t targetId, int32_t toSlotId, int32_t fromSlotId, int32_t stealResourceCount) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1A2CCF0))(0, world, type, targetId, toSlotId, fromSlotId, stealResourceCount);
	}
	template <typename T = void> static T SendEquipBestAndTakeAllInventory(uintptr_t world, uintptr_t avatar, uintptr_t targetChest) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A2CE48))(0, world, avatar, targetChest);
	}

};

}
