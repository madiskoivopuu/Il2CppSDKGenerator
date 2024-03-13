#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionHelper"));
	}

	template <typename T = float> static T& SneakCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SneakItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T CanBeInterruptedByInput(ActionEntity* action, int64_t now, bool byOtherAction) {
		return ((T (*)(void *, ActionEntity*, int64_t, bool))(Il2CppBase() + 0x1DD2614))(0, action, now, byOtherAction);
	}
	template <typename T = int32_t> static T GetRandomValue(ActionEntity* action, ICommonContexts* world, int32_t range) {
		return ((T (*)(void *, ActionEntity*, ICommonContexts*, int32_t))(Il2CppBase() + 0x1DD2814))(0, action, world, range);
	}
	template <typename T = int64_t> static T GetApplyTime(ActionEntity* actionEntity) {
		return ((T (*)(void *, ActionEntity*))(Il2CppBase() + 0x1DD277C))(0, actionEntity);
	}
	template <typename T = float> static T GetDelay(ActionEntity* actionEntity) {
		return ((T (*)(void *, ActionEntity*))(Il2CppBase() + 0x1DD29DC))(0, actionEntity);
	}
	template <typename T = float> static T GetDuration(ActionEntity* actionEntity) {
		return ((T (*)(void *, ActionEntity*))(Il2CppBase() + 0x1DD2ADC))(0, actionEntity);
	}
	template <typename T = float> static T GetPeriod(ActionEntity* actionEntity) {
		return ((T (*)(void *, ActionEntity*))(Il2CppBase() + 0x1DD2A5C))(0, actionEntity);
	}
	template <typename T = int64_t> static T GetExpireTime(ActionEntity* action) {
		return ((T (*)(void *, ActionEntity*))(Il2CppBase() + 0x1DD2B5C))(0, action);
	}
	template <typename T = bool> static T IsActionExpired(ActionEntity* action, int64_t now) {
		return ((T (*)(void *, ActionEntity*, int64_t))(Il2CppBase() + 0x1DD2C1C))(0, action, now);
	}
	template <typename T = bool> static T IsBusyMoving(GameEntity* actor, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1DD2C44))(0, actor, world);
	}
	template <typename T = bool> static T IsBusyCharge(GameEntity* actor, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1DD2D78))(0, actor, world);
	}
	template <typename T = bool> static T IsBusyOrActionsBlocked(GameEntity* actor, ICommonContexts* world, int64_t now, Nullable1ActionType*>* ignore) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, int64_t, Nullable1ActionType*>*))(Il2CppBase() + 0x1DD2E90))(0, actor, world, now, ignore);
	}
	template <typename T = bool> static T IsBusyByOther(GameEntity* target, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1DD30FC))(0, target, world, actor);
	}
	template <typename T = bool> static T IgnoreStunned(ActionEntity* actionEntity, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, ActionEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1DD3380))(0, actionEntity, world, actor);
	}
	template <typename T = bool> static T IgnoreSilence(ActionEntity* actionEntity, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, ActionEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1DD3408))(0, actionEntity, world, actor);
	}
	template <typename T = bool> static T IgnoreImpotent(ActionEntity* actionEntity, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, ActionEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1DD3490))(0, actionEntity, world, actor);
	}
	template <typename T = bool> static T IgnoreRooted(ActionEntity* actionEntity, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, ActionEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1DD3518))(0, actionEntity, world, actor);
	}
	template <typename T = ActionBreakReasons*> static T CheckBreakAction(GameEntity* actor, ICommonContexts* world, ActionEntity* action, bool start) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, ActionEntity*, bool))(Il2CppBase() + 0x1DD35A0))(0, actor, world, action, start);
	}
	template <typename T = ActionBreakReasons*> static T CheckBreakMoveInventory(GameEntity* actor, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1DD3758))(0, actor, world);
	}
	template <typename T = bool> static T IsBusy(GameEntity* actor, ICommonContexts* world, int64_t now, Nullable1ActionType*>* ignore) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, int64_t, Nullable1ActionType*>*))(Il2CppBase() + 0x1DD2F78))(0, actor, world, now, ignore);
	}
	template <typename T = ItemEntity*> static T GetPocketItem(ICommonContexts* world, IIdEntity* actor) {
		return ((T (*)(void *, ICommonContexts*, IIdEntity*))(Il2CppBase() + 0x1DD38FC))(0, world, actor);
	}
	template <typename T = bool> static T CanInteract(IArenaWorld* world, GameEntity* entity, GameEntity* target) {
		return ((T (*)(void *, IArenaWorld*, GameEntity*, GameEntity*))(Il2CppBase() + 0x1DD3B08))(0, world, entity, target);
	}
	template <typename T = InteractTemplate*> static T GetInteractComponent(ICommonContexts* world, GameEntity* entity, GameEntity* target, IInteractActionsEntity* interactEntity) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, GameEntity*, IInteractActionsEntity*))(Il2CppBase() + 0x1DD3FC0))(0, world, entity, target, interactEntity);
	}
	template <typename T = bool> static T CheckInteractComponent(ICommonContexts* world, GameEntity* entity, GameEntity* target, InteractTemplate* interactComponent) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, GameEntity*, InteractTemplate*))(Il2CppBase() + 0x1DD3C7C))(0, world, entity, target, interactComponent);
	}
	template <typename T = bool> static T Accessed(GameEntity* actor, GameEntity* target) {
		return ((T (*)(void *, GameEntity*, GameEntity*))(Il2CppBase() + 0x1DD42D0))(0, actor, target);
	}
	template <typename T = Vec2*> static T GetInteractPosition(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1DD43D8))(0, gameEntity);
	}
	template <typename T = bool> static T IsPlaceOwner(uintptr_t entity, ICommonContexts* world, GameEntity* target) {
		return ((T (*)(void *, uintptr_t, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x0))(0, entity, world, target);
	}
	template <typename T = ValueTuple4InteractTemplate*, ItemEntity*, int32_t, float>*> static T GetAction(ICommonContexts* world, GameEntity* entity, GameEntity* target, IInteractActionsEntity* interactEntity) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, GameEntity*, IInteractActionsEntity*))(Il2CppBase() + 0x1DD4570))(0, world, entity, target, interactEntity);
	}
	template <typename T = Il2CppString*> static T GetInteractIcon(ICommonContexts* world, GameEntity* entity, GameEntity* target) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x1DD4800))(0, world, entity, target);
	}
	template <typename T = ValueTuple2InventorySlotEntity*, ItemEntity*>*> static T GetUseItem(ICommonContexts* world, GameEntity* entity, int32_t inventoryItemId) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, int32_t))(Il2CppBase() + 0x1DD4910))(0, world, entity, inventoryItemId);
	}
	template <typename T = bool> static T InInteractRadius(GameEntity* target, GameEntity* entity, float gap) {
		return ((T (*)(void *, GameEntity*, GameEntity*, float))(Il2CppBase() + 0x1DD4B70))(0, target, entity, gap);
	}
	template <typename T = bool> static T InItemInteractRadius(GameEntity* target, GameEntity* entity, ItemEntity* item, float gap) {
		return ((T (*)(void *, GameEntity*, GameEntity*, ItemEntity*, float))(Il2CppBase() + 0x1DD4D40))(0, target, entity, item, gap);
	}
	template <typename T = bool> static T InInteractItemRadiusWithCompensation(GameEntity* target, GameEntity* entity, ItemEntity* item, int64_t actionTick, float gap) {
		return ((T (*)(void *, GameEntity*, GameEntity*, ItemEntity*, int64_t, float))(Il2CppBase() + 0x1DD4E70))(0, target, entity, item, actionTick, gap);
	}
	template <typename T = ItemEntity*> static T GetItem(ICommonContexts* world, GameEntity* actor, int32_t inventoryItemId, Il2CppString* itemName) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x1DD5008))(0, world, actor, inventoryItemId, itemName);
	}
	template <typename T = ActionEntity*> static T CreateAction(ICommonContexts* world, ActionType* actionType, ActionEntity* actionData, GameEntity* actor, GameEntity* target, ItemEntity* item, float durationCoef, int32_t inventoryItemId, float angle, int64_t startTime, float chance, Nullable1int32_t>* sequenceValue) {
		return ((T (*)(void *, ICommonContexts*, ActionType*, ActionEntity*, GameEntity*, GameEntity*, ItemEntity*, float, int32_t, float, int64_t, float, Nullable1int32_t>*))(Il2CppBase() + 0x1DD5280))(0, world, actionType, actionData, actor, target, item, durationCoef, inventoryItemId, angle, startTime, chance, sequenceValue);
	}
	template <typename T = ValueTuple2ActionBreakReasons*, ActionEntity*>*> static T StartAction(ICommonContexts* world, ActionType* actionType, GameEntity* actor, GameEntity* target, IInteractActionsEntity* interactTarget, Il2CppString* itemName, int32_t inventoryItemId, float angle, int64_t startTime, float chance, Nullable1int32_t>* sequenceValue, bool checkBreak) {
		return ((T (*)(void *, ICommonContexts*, ActionType*, GameEntity*, GameEntity*, IInteractActionsEntity*, Il2CppString*, int32_t, float, int64_t, float, Nullable1int32_t>*, bool))(Il2CppBase() + 0x1DD6054))(0, world, actionType, actor, target, interactTarget, itemName, inventoryItemId, angle, startTime, chance, sequenceValue, checkBreak);
	}
	template <typename T = ActionEntity*> static T ToActionDataEntity(Il2CppString* actionName, ICommonContexts* world) {
		return ((T (*)(void *, Il2CppString*, ICommonContexts*))(Il2CppBase() + 0x1DD7A24))(0, actionName, world);
	}
	template <typename T = Il2CppString*> static T GetActionName(ItemEntity* item, ICommonContexts* world, GameEntity* actor, ActionType* actionType, GameEntity* target) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*, GameEntity*, ActionType*, GameEntity*))(Il2CppBase() + 0x1DD7718))(0, item, world, actor, actionType, target);
	}
	template <typename T = Il2CppString*> static T GetInteractActionName(GameEntity* target, ICommonContexts* world, IInteractActionsEntity* interactEntity, GameEntity* actor, ActionType* actionType) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, IInteractActionsEntity*, GameEntity*, ActionType*))(Il2CppBase() + 0x1DD6590))(0, target, world, interactEntity, actor, actionType);
	}
	template <typename T = Il2CppString*> static T ToWarningString(ActionBreakReasons* actionBreakReason) {
		return ((T (*)(void *, ActionBreakReasons*))(Il2CppBase() + 0x1DD7AF8))(0, actionBreakReason);
	}

};

