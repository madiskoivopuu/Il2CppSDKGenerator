#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArenaClientWorldSender
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaClientWorldSender"));
	}


	template <typename T = void> static T SendDetectedQuality(ICommonClientWorld* world, uint8_t detectedQuality) {
		return ((T (*)(void *, ICommonClientWorld*, uint8_t))(Il2CppBase() + 0x1A24F7C))(0, world, detectedQuality);
	}
	template <typename T = void> static T SendFuse(ICommonClientWorld* world, int32_t targetId) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A2509C))(0, world, targetId);
	}
	template <typename T = void> static T SendChattingStatus(ICommonClientWorld* world, int32_t targetId, bool chatting) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t, bool))(Il2CppBase() + 0x1A251C8))(0, world, targetId, chatting);
	}
	template <typename T = void> static T SendChangePvpClanRelation(ICommonClientWorld* world, int64_t targetClanId, bool setWar) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t, bool))(Il2CppBase() + 0x1A25300))(0, world, targetClanId, setWar);
	}
	template <typename T = void> static T LinkAccount(ICommonClientWorld* world, LinkType* type, Il2CppString* linkToThisSocialId, bool isForce, int64_t idToLink) {
		return ((T (*)(void *, ICommonClientWorld*, LinkType*, Il2CppString*, bool, int64_t))(Il2CppBase() + 0x1A25434))(0, world, type, linkToThisSocialId, isForce, idToLink);
	}
	template <typename T = void> static T UnlinkAccount(ICommonClientWorld* world, LinkType* type, Il2CppString* idToUnlink) {
		return ((T (*)(void *, ICommonClientWorld*, LinkType*, Il2CppString*))(Il2CppBase() + 0x1A25730))(0, world, type, idToUnlink);
	}
	template <typename T = void> static T SendPushNotificationSettings(ICommonClientWorld* world, bool pushEndbled, Il2CppArray<uintptr_t>* blocked) {
		return ((T (*)(void *, ICommonClientWorld*, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A25870))(0, world, pushEndbled, blocked);
	}
	template <typename T = void> static T SendLanguage(ICommonClientWorld* world, Il2CppString* language) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A259B4))(0, world, language);
	}
	template <typename T = void> static T SendInput(ICommonClientWorld* world, Vec2* xy, int64_t ticks, int32_t moveToTargetId, bool reliable) {
		return ((T (*)(void *, ICommonClientWorld*, Vec2*, int64_t, int32_t, bool))(Il2CppBase() + 0x1A25AE0))(0, world, xy, ticks, moveToTargetId, reliable);
	}
	template <typename T = void> static T SendSwitchSneak(ICommonClientWorld* world) {
		return ((T (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A25C5C))(0, world);
	}
	template <typename T = void> static T SendAction(ICommonClientWorld* world, ActionEntity* action) {
		return ((T (*)(void *, ICommonClientWorld*, ActionEntity*))(Il2CppBase() + 0x1A25D60))(0, world, action);
	}
	template <typename T = void> static T SendCancelUse(ICommonClientWorld* world, Il2CppString* itemName) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A25EC0))(0, world, itemName);
	}
	template <typename T = void> static T SendInterruptAction(ICommonClientWorld* world, ActionEntity* action) {
		return ((T (*)(void *, ICommonClientWorld*, ActionEntity*))(Il2CppBase() + 0x1A25FEC))(0, world, action);
	}
	template <typename T = void> static T SendFishingHook(ICommonClientWorld* world, int64_t time, bool useNet) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t, bool))(Il2CppBase() + 0x1A26228))(0, world, time, useNet);
	}
	template <typename T = void> static T SendGetRavenNestStats(ICommonClientWorld* world, int32_t id, int64_t lastTime) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t, int64_t))(Il2CppBase() + 0x1A2635C))(0, world, id, lastTime);
	}
	template <typename T = int64_t> static T SendBuildEntity(ICommonClientWorld* world, Il2CppString* name, Vec2* pos, uint8_t orientation) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*, Vec2*, uint8_t))(Il2CppBase() + 0x1A26494))(0, world, name, pos, orientation);
	}
	template <typename T = void> static T SendUpgradeBuildEntity(ICommonClientWorld* world, int32_t id) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A2671C))(0, world, id);
	}
	template <typename T = void> static T SendDestroyBuildEntity(ICommonClientWorld* world, int32_t entityId) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A2683C))(0, world, entityId);
	}
	template <typename T = void> static T SendMoveBuildEntity(ICommonClientWorld* world, int32_t id, float x, float y, uint8_t orientation) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t, float, float, uint8_t))(Il2CppBase() + 0x1A2695C))(0, world, id, x, y, orientation);
	}
	template <typename T = void> static T SendTakeFurniture(ICommonClientWorld* world, GameEntity* entity, bool disassemble) {
		return ((T (*)(void *, ICommonClientWorld*, GameEntity*, bool))(Il2CppBase() + 0x1A26AA4))(0, world, entity, disassemble);
	}
	template <typename T = void> static T SendCloseWindow(ICommonClientWorld* world, Il2CppString* name) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A26BF4))(0, world, name);
	}
	template <typename T = void> static T SendTryFillRavenNest(ICommonClientWorld* world, int32_t targetId, int32_t fromId, Il2CppString* resource) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1A26D20))(0, world, targetId, fromId, resource);
	}
	template <typename T = void> static T SendTryFillCampBath(ICommonClientWorld* world, int32_t targetId, int32_t fromId, Il2CppString* resource) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1A26E6C))(0, world, targetId, fromId, resource);
	}
	template <typename T = void> static T SendTryMoveFromInventory(ICommonClientWorld* world, InventorySlotEntity* invetoryEntity) {
		return ((T (*)(void *, ICommonClientWorld*, InventorySlotEntity*))(Il2CppBase() + 0x1A26FB8))(0, world, invetoryEntity);
	}
	template <typename T = void> static T SendTryMoveResource(ICommonClientWorld* world, Il2CppString* resource) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A27188))(0, world, resource);
	}
	template <typename T = void> static T SendTryMoveFromInventory_1(ICommonClientWorld* world, int32_t fromId) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A27064))(0, world, fromId);
	}
	template <typename T = void> static T SendMoveInventory(ICommonClientWorld* world, InventorySlotEntity* invetoryEntity, int32_t toId) {
		return ((T (*)(void *, ICommonClientWorld*, InventorySlotEntity*, int32_t))(Il2CppBase() + 0x1A272C4))(0, world, invetoryEntity, toId);
	}
	template <typename T = void> static T SendTryMoveFromInventoryConvertable(ICommonClientWorld* world, InventorySlotEntity* fromInventory, InventorySlotEntity* toInventory) {
		return ((T (*)(void *, ICommonClientWorld*, InventorySlotEntity*, InventorySlotEntity*))(Il2CppBase() + 0x1A275FC))(0, world, fromInventory, toInventory);
	}
	template <typename T = void> static T SendMoveResource(ICommonClientWorld* world, Il2CppString* resource, int32_t toId) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0x1A274C0))(0, world, resource, toId);
	}
	template <typename T = void> static T SendMoveInventory_1(ICommonClientWorld* world, int32_t fromId, int32_t toId) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0x1A27394))(0, world, fromId, toId);
	}
	template <typename T = void> static T SendSplitInventory(ICommonClientWorld* world, int32_t id, int32_t splitedCount, int32_t toId) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1A277A4))(0, world, id, splitedCount, toId);
	}
	template <typename T = void> static T SendDeleteInventory(ICommonClientWorld* world, int32_t id, Nullable1int32_t>* count) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t, Nullable1int32_t>*))(Il2CppBase() + 0x1A278E4))(0, world, id, count);
	}
	template <typename T = void> static T SendUseInstant(ICommonClientWorld* world, int32_t id) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A27A18))(0, world, id);
	}
	template <typename T = void> static T SendTakeAllInventory(ICommonClientWorld* world, int32_t targetId) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A27B38))(0, world, targetId);
	}
	template <typename T = void> static T SendPutAllInventory(ICommonClientWorld* world, int32_t targetId) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A27C60))(0, world, targetId);
	}
	template <typename T = void> static T SendOrganizeInventory(ICommonClientWorld* world, int32_t targetId) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A27D80))(0, world, targetId);
	}
	template <typename T = void> static T SendSkipCraft(ICommonClientWorld* world) {
		return ((T (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A27EA0))(0, world);
	}
	template <typename T = void> static T SendSkipRepair(ICommonClientWorld* world) {
		return ((T (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A27FA4))(0, world);
	}
	template <typename T = void> static T SendFinalize(ICommonClientWorld* world) {
		return ((T (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A280A8))(0, world);
	}
	template <typename T = void> static T SendPassPrerequisite(ICommonClientWorld* world, int32_t id, int32_t grade) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0x1A281C4))(0, world, id, grade);
	}
	template <typename T = void> static T SendEnterDungeon(ICommonClientWorld* world, int32_t id, int32_t grade) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0x1A282F0))(0, world, id, grade);
	}
	template <typename T = void> static T SendApplyBattery(ICommonClientWorld* world, int32_t targetId, int32_t slotId, Il2CppString* name) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1A2841C))(0, world, targetId, slotId, name);
	}
	template <typename T = void> static T SendUpdateBattery(ICommonClientWorld* world, int32_t targetId, int64_t targetDuration) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t, int64_t))(Il2CppBase() + 0x1A28568))(0, world, targetId, targetDuration);
	}
	template <typename T = void> static T SendLearnBlueprint(ICommonClientWorld* world, Il2CppString* blueprintName) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A2856C))(0, world, blueprintName);
	}
	template <typename T = void> static T SendCraftBlueprint(ICommonClientWorld* world, Il2CppString* blueprintName) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A28698))(0, world, blueprintName);
	}
	template <typename T = void> static T SendCheat(ICommonClientWorld* world, Il2CppString* cheatName, int32_t count, Il2CppString* param) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x1A287C4))(0, world, cheatName, count, param);
	}
	template <typename T = void> static T SendCheatAddResource(ICommonClientWorld* world, Il2CppString* resourceName, int32_t count, Nullable1float>* durability) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*, int32_t, Nullable1float>*))(Il2CppBase() + 0x1A287C8))(0, world, resourceName, count, durability);
	}
	template <typename T = void> static T SendCheatResetLimit(ICommonClientWorld* world, int32_t targetId) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A287CC))(0, world, targetId);
	}
	template <typename T = void> static T SendToMailCheat(ICommonClientWorld* world, Il2CppString* resourceName, int32_t count, Nullable1float>* durability) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*, int32_t, Nullable1float>*))(Il2CppBase() + 0x1A287D0))(0, world, resourceName, count, durability);
	}
	template <typename T = void> static T SendCheatAddQuestProgress(ICommonClientWorld* world, Il2CppString* questName, int32_t addProgress) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0x1A287D4))(0, world, questName, addProgress);
	}
	template <typename T = void> static T SendCheatSpawnObject(ICommonClientWorld* world, Il2CppString* name) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A287D8))(0, world, name);
	}
	template <typename T = void> static T SendCheatToggleSelfMagic(ICommonClientWorld* world, Il2CppString* name) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A287DC))(0, world, name);
	}
	template <typename T = void> static T SendLeaveArena(ICommonClientWorld* world) {
		return ((T (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A287E0))(0, world);
	}
	template <typename T = void> static T SendAcceptInvite(ICommonClientWorld* world, int64_t inviteId, bool isAccept) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t, bool))(Il2CppBase() + 0x1A2893C))(0, world, inviteId, isAccept);
	}
	template <typename T = void> static T SendOnGetUsersForInvite(ICommonClientWorld* world) {
		return ((T (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A28A8C))(0, world);
	}
	template <typename T = void> static T SendKickUser(ICommonClientWorld* world, int64_t idToKick) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A28BA8))(0, world, idToKick);
	}
	template <typename T = void> static T SendClanFindUserForInvite(ICommonClientWorld* world, Il2CppString* name) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A28CF0))(0, world, name);
	}
	template <typename T = void> static T SendClanInviteUser(ICommonClientWorld* world, int64_t idToInvite, uint8_t slot, Il2CppString* description) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t, uint8_t, Il2CppString*))(Il2CppBase() + 0x1A28E2C))(0, world, idToInvite, slot, description);
	}
	template <typename T = void> static T SendRenameClan(ICommonClientWorld* world, Il2CppString* newName) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A28F80))(0, world, newName);
	}
	template <typename T = void> static T SendAllowClanMembersStartRaid(ICommonClientWorld* world, bool allow) {
		return ((T (*)(void *, ICommonClientWorld*, bool))(Il2CppBase() + 0x1A290DC))(0, world, allow);
	}
	template <typename T = void> static T SendCreateClan(ICommonClientWorld* world) {
		return ((T (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A29220))(0, world);
	}
	template <typename T = void> static T SendDisbandClan(ICommonClientWorld* world) {
		return ((T (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A29228))(0, world);
	}
	template <typename T = void> static T SendClanJoinRequest(ICommonClientWorld* world, Il2CppString* text) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A29360))(0, world, text);
	}
	template <typename T = void> static T SendClanJoinStopSearch(ICommonClientWorld* world) {
		return ((T (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x1A294BC))(0, world);
	}
	template <typename T = void> static T SendTakeStoreInbox(ICommonClientWorld* world, int64_t messageId) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A295F4))(0, world, messageId);
	}
	template <typename T = void> static T SendTakeTournamentReward(ICommonClientWorld* world, int64_t messageId) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A29714))(0, world, messageId);
	}
	template <typename T = void> static T SendAcquireDicedItem(ICommonClientWorld* world, Il2CppString* entityName, int64_t mailMessageId) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*, int64_t))(Il2CppBase() + 0x1A29834))(0, world, entityName, mailMessageId);
	}
	template <typename T = void> static T SendAcquireDailyVIPChest(ICommonClientWorld* world, int64_t storeDataId) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A29970))(0, world, storeDataId);
	}
	template <typename T = void> static T SendResetStoreProducts(ICommonClientWorld* world, int32_t targetId, StoreCategory* category) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t, StoreCategory*))(Il2CppBase() + 0x1A29A90))(0, world, targetId, category);
	}
	template <typename T = void> static T SendStartIAPPurchase(ICommonClientWorld* world, StartIAPPurchaseData* data) {
		return ((T (*)(void *, ICommonClientWorld*, StartIAPPurchaseData*))(Il2CppBase() + 0x1A29BBC))(0, world, data);
	}
	template <typename T = void> static T SendFailIAPPurchase(ICommonClientWorld* world, FailIAPPurchaseData* data) {
		return ((T (*)(void *, ICommonClientWorld*, FailIAPPurchaseData*))(Il2CppBase() + 0x1A29CD4))(0, world, data);
	}
	template <typename T = void> static T SendValidateIAPPurchase(ICommonClientWorld* world, ValidatePurchaseData* request) {
		return ((T (*)(void *, ICommonClientWorld*, ValidatePurchaseData*))(Il2CppBase() + 0x1A29DE8))(0, world, request);
	}
	template <typename T = void> static T SendPurchaseForCurrency(ICommonClientWorld* world, int64_t storeId, CurrencyType* cType) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t, CurrencyType*))(Il2CppBase() + 0x1A29EFC))(0, world, storeId, cType);
	}
	template <typename T = void> static T SendPurchaseForItems(ICommonClientWorld* world, int64_t storeId, Il2CppString* itemName) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t, Il2CppString*))(Il2CppBase() + 0x1A2A02C))(0, world, storeId, itemName);
	}
	template <typename T = void> static T SendPurchaseForTargetInventory(ICommonClientWorld* world, CurrencyType* currency, int32_t index) {
		return ((T (*)(void *, ICommonClientWorld*, CurrencyType*, int32_t))(Il2CppBase() + 0x1A2A168))(0, world, currency, index);
	}
	template <typename T = void> static T SendCosmetics(ICommonClientWorld* world, Gender* gender, Il2CppDictionary<int32_t, Il2CppString*>* slots) {
		return ((T (*)(void *, ICommonClientWorld*, Gender*, Il2CppDictionary<int32_t, Il2CppString*>*))(Il2CppBase() + 0x1A2A294))(0, world, gender, slots);
	}
	template <typename T = void> static T SendCustomization(ICommonClientWorld* world, Gender* gender, Il2CppString* hairName, Il2CppString* beardName, Il2CppString* hairColorName, Il2CppString* skinColorName, Il2CppString* faceName, Il2CppString* className) {
		return ((T (*)(void *, ICommonClientWorld*, Gender*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A2A3D4))(0, world, gender, hairName, beardName, hairColorName, skinColorName, faceName, className);
	}
	template <typename T = void> static T SendShare(ICommonClientWorld* world, int32_t targetId, bool isShared) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t, bool))(Il2CppBase() + 0x1A2A62C))(0, world, targetId, isShared);
	}
	template <typename T = void> static T SendRename(ICommonClientWorld* world, Il2CppString* newName) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A2A764))(0, world, newName);
	}
	template <typename T = void> static T SendWorkerRename(ICommonClientWorld* world, int32_t furnitureId, Il2CppString* newName) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t, Il2CppString*))(Il2CppBase() + 0x1A2A8C0))(0, world, furnitureId, newName);
	}
	template <typename T = void> static T SendSelectClass(ICommonClientWorld* world, Il2CppString* newClass, bool fast) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*, bool))(Il2CppBase() + 0x1A2AA00))(0, world, newClass, fast);
	}
	template <typename T = void> static T SendPriorityTarget(ICommonClientWorld* world, int32_t targetId) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A2AB40))(0, world, targetId);
	}
	template <typename T = void> static T SendFCMToken(ICommonClientWorld* world, Il2CppString* token, uint8_t platform) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*, uint8_t))(Il2CppBase() + 0x1A2AC60))(0, world, token, platform);
	}
	template <typename T = void> static T SendClientLog(ICommonClientWorld* world, Il2CppString* text) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A2AD9C))(0, world, text);
	}
	template <typename T = void> static T SendMinimapPing(ICommonClientWorld* world, float xPos, float yPos) {
		return ((T (*)(void *, ICommonClientWorld*, float, float))(Il2CppBase() + 0x1A2AEC8))(0, world, xPos, yPos);
	}
	template <typename T = void> static T SendMountFuse(ICommonClientWorld* world, Il2CppArray<uintptr_t>* Ids, int32_t typeIndex, Il2CppArray<uintptr_t>* selectedSkillSlots) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A2B008))(0, world, Ids, typeIndex, selectedSkillSlots);
	}
	template <typename T = void> static T SendDeleteInfoMessage(ICommonClientWorld* world, int64_t messageId) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A2B16C))(0, world, messageId);
	}
	template <typename T = void> static T SendMannequinSwap(ICommonClientWorld* world, int32_t targetId) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A2B28C))(0, world, targetId);
	}
	template <typename T = void> static T SendStartGuildQuest(ICommonClientWorld* world, Il2CppString* questName) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A2B3AC))(0, world, questName);
	}
	template <typename T = void> static T SendCreateGuild(ICommonClientWorld* world, Il2CppString* name, Il2CppString* tag, Il2CppString* description, int32_t language, GuildType* guildType) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, GuildType*))(Il2CppBase() + 0x1A2B500))(0, world, name, tag, description, language, guildType);
	}
	template <typename T = void> static T SendDisbandGuild(ICommonClientWorld* world, int64_t id) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A2B690))(0, world, id);
	}
	template <typename T = void> static T SendUpdateGuild(ICommonClientWorld* world, Il2CppString* name, Il2CppString* tag, Il2CppString* description, int32_t language, GuildType* guildType) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, GuildType*))(Il2CppBase() + 0x1A2B7B0))(0, world, name, tag, description, language, guildType);
	}
	template <typename T = void> static T SendGuildFindUserForInvite(ICommonClientWorld* world, Il2CppString* name) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A2B940))(0, world, name);
	}
	template <typename T = void> static T SendFindGuildForInvite(ICommonClientWorld* world, Il2CppString* guildTag, Il2CppString* guildName) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A2BA7C))(0, world, guildTag, guildName);
	}
	template <typename T = void> static T SendGuildInvitePlayer(ICommonClientWorld* world, int64_t playerId) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A2BBD4))(0, world, playerId);
	}
	template <typename T = void> static T SendPlayerInviteGuild(ICommonClientWorld* world, int64_t guildId, Il2CppString* text) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t, Il2CppString*))(Il2CppBase() + 0x1A2BD04))(0, world, guildId, text);
	}
	template <typename T = void> static T SendChangeGuildDailyMessage(ICommonClientWorld* world, uint8_t type, Il2CppString* text) {
		return ((T (*)(void *, ICommonClientWorld*, uint8_t, Il2CppString*))(Il2CppBase() + 0x1A2BE48))(0, world, type, text);
	}
	template <typename T = void> static T SendGuildUserRole(ICommonClientWorld* world, int64_t targetPlayerId, GuildRole* role) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t, GuildRole*))(Il2CppBase() + 0x1A2BF88))(0, world, targetPlayerId, role);
	}
	template <typename T = void> static T SendGuildMemberKick(ICommonClientWorld* world, int64_t targetPlayerId) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A2C0B8))(0, world, targetPlayerId);
	}
	template <typename T = void> static T SendAcceptGuildInvite(ICommonClientWorld* world, int64_t inviteId, bool accept) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t, bool))(Il2CppBase() + 0x1A2C1D8))(0, world, inviteId, accept);
	}
	template <typename T = void> static T SendRollChestReward(ICommonClientWorld* world, int32_t targetId) {
		return ((T (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1A2C30C))(0, world, targetId);
	}
	template <typename T = void> static T SendGuildRatingRequest(ICommonClientWorld* world, RatingGuildType* type) {
		return ((T (*)(void *, ICommonClientWorld*, RatingGuildType*))(Il2CppBase() + 0x1A2C42C))(0, world, type);
	}
	template <typename T = void> static T SendGuildJoinResultReceive(ICommonClientWorld* world, int64_t messageId) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x1A2C54C))(0, world, messageId);
	}
	template <typename T = void> static T SendCreateLobby(ICommonClientWorld* world, LobbyType* type, int32_t playersCount) {
		return ((T (*)(void *, ICommonClientWorld*, LobbyType*, int32_t))(Il2CppBase() + 0x1A2C66C))(0, world, type, playersCount);
	}
	template <typename T = void> static T SendAcceptLobby(ICommonClientWorld* world, int64_t portalsId, bool accept) {
		return ((T (*)(void *, ICommonClientWorld*, int64_t, bool))(Il2CppBase() + 0x1A2C798))(0, world, portalsId, accept);
	}
	template <typename T = void> static T SendFindPlayersLobby(ICommonClientWorld* world, LobbyType* type) {
		return ((T (*)(void *, ICommonClientWorld*, LobbyType*))(Il2CppBase() + 0x1A2C8CC))(0, world, type);
	}
	template <typename T = void> static T SendGlobalTournamentRequest(ICommonClientWorld* world, Il2CppString* tournamentBlueprint) {
		return ((T (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1A2C9F8))(0, world, tournamentBlueprint);
	}
	template <typename T = void> static T SendCycleRequest(ICommonClientWorld* world, RequestType* type, Il2CppString* deviceID, Il2CppString* googleID, Il2CppString* gameCenterID, Il2CppString* huaweyID, Il2CppString* firebaseID) {
		return ((T (*)(void *, ICommonClientWorld*, RequestType*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A2CB24))(0, world, type, deviceID, googleID, gameCenterID, huaweyID, firebaseID);
	}
	template <typename T = void> static T SendExtractorAction(ICommonClientWorld* world, RequestType* type, int32_t targetId, int32_t toSlotId, int32_t fromSlotId, int32_t stealResourceCount) {
		return ((T (*)(void *, ICommonClientWorld*, RequestType*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1A2CCF0))(0, world, type, targetId, toSlotId, fromSlotId, stealResourceCount);
	}
	template <typename T = void> static T SendEquipBestAndTakeAllInventory(ICommonClientWorld* world, GameEntity* avatar, GameEntity* targetChest) {
		return ((T (*)(void *, ICommonClientWorld*, GameEntity*, GameEntity*))(Il2CppBase() + 0x1A2CE48))(0, world, avatar, targetChest);
	}

};

