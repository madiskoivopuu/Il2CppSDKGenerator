#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionHelper"));
	}

	template <typename R = float> static R& SneakCooldown() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SneakItem() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = bool> static R CanBeInterruptedByInput(ActionEntity* action, int64_t now, bool byOtherAction) {
		return ((R (*)(void *, ActionEntity*, int64_t, bool))(Il2CppBase() + 0x1DD2614))(0, action, now, byOtherAction);
	}
	template <typename R = int32_t> static R GetRandomValue(ActionEntity* action, ICommonContexts* world, int32_t range) {
		return ((R (*)(void *, ActionEntity*, ICommonContexts*, int32_t))(Il2CppBase() + 0x1DD2814))(0, action, world, range);
	}
	template <typename R = int64_t> static R GetApplyTime(ActionEntity* actionEntity) {
		return ((R (*)(void *, ActionEntity*))(Il2CppBase() + 0x1DD277C))(0, actionEntity);
	}
	template <typename R = float> static R GetDelay(ActionEntity* actionEntity) {
		return ((R (*)(void *, ActionEntity*))(Il2CppBase() + 0x1DD29DC))(0, actionEntity);
	}
	template <typename R = float> static R GetDuration(ActionEntity* actionEntity) {
		return ((R (*)(void *, ActionEntity*))(Il2CppBase() + 0x1DD2ADC))(0, actionEntity);
	}
	template <typename R = float> static R GetPeriod(ActionEntity* actionEntity) {
		return ((R (*)(void *, ActionEntity*))(Il2CppBase() + 0x1DD2A5C))(0, actionEntity);
	}
	template <typename R = int64_t> static R GetExpireTime(ActionEntity* action) {
		return ((R (*)(void *, ActionEntity*))(Il2CppBase() + 0x1DD2B5C))(0, action);
	}
	template <typename R = bool> static R IsActionExpired(ActionEntity* action, int64_t now) {
		return ((R (*)(void *, ActionEntity*, int64_t))(Il2CppBase() + 0x1DD2C1C))(0, action, now);
	}
	template <typename R = bool> static R IsBusyMoving(GameEntity* actor, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1DD2C44))(0, actor, world);
	}
	template <typename R = bool> static R IsBusyCharge(GameEntity* actor, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1DD2D78))(0, actor, world);
	}
	template <typename R = bool> static R IsBusyOrActionsBlocked(GameEntity* actor, ICommonContexts* world, int64_t now, Nullable1ActionType*>* ignore) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, int64_t, Nullable1ActionType*>*))(Il2CppBase() + 0x1DD2E90))(0, actor, world, now, ignore);
	}
	template <typename R = bool> static R IsBusyByOther(GameEntity* target, ICommonContexts* world, GameEntity* actor) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1DD30FC))(0, target, world, actor);
	}
	template <typename R = bool> static R IgnoreStunned(ActionEntity* actionEntity, ICommonContexts* world, GameEntity* actor) {
		return ((R (*)(void *, ActionEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1DD3380))(0, actionEntity, world, actor);
	}
	template <typename R = bool> static R IgnoreSilence(ActionEntity* actionEntity, ICommonContexts* world, GameEntity* actor) {
		return ((R (*)(void *, ActionEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1DD3408))(0, actionEntity, world, actor);
	}
	template <typename R = bool> static R IgnoreImpotent(ActionEntity* actionEntity, ICommonContexts* world, GameEntity* actor) {
		return ((R (*)(void *, ActionEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1DD3490))(0, actionEntity, world, actor);
	}
	template <typename R = bool> static R IgnoreRooted(ActionEntity* actionEntity, ICommonContexts* world, GameEntity* actor) {
		return ((R (*)(void *, ActionEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1DD3518))(0, actionEntity, world, actor);
	}
	template <typename R = ActionBreakReasons*> static R CheckBreakAction(GameEntity* actor, ICommonContexts* world, ActionEntity* action, bool start) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, ActionEntity*, bool))(Il2CppBase() + 0x1DD35A0))(0, actor, world, action, start);
	}
	template <typename R = ActionBreakReasons*> static R CheckBreakMoveInventory(GameEntity* actor, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1DD3758))(0, actor, world);
	}
	template <typename R = bool> static R IsBusy(GameEntity* actor, ICommonContexts* world, int64_t now, Nullable1ActionType*>* ignore) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, int64_t, Nullable1ActionType*>*))(Il2CppBase() + 0x1DD2F78))(0, actor, world, now, ignore);
	}
	template <typename R = ItemEntity*> static R GetPocketItem(ICommonContexts* world, IIdEntity* actor) {
		return ((R (*)(void *, ICommonContexts*, IIdEntity*))(Il2CppBase() + 0x1DD38FC))(0, world, actor);
	}
	template <typename R = bool> static R CanInteract(IArenaWorld* world, GameEntity* entity, GameEntity* target) {
		return ((R (*)(void *, IArenaWorld*, GameEntity*, GameEntity*))(Il2CppBase() + 0x1DD3B08))(0, world, entity, target);
	}
	template <typename R = InteractTemplate*> static R GetInteractComponent(ICommonContexts* world, GameEntity* entity, GameEntity* target, IInteractActionsEntity* interactEntity) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, GameEntity*, IInteractActionsEntity*))(Il2CppBase() + 0x1DD3FC0))(0, world, entity, target, interactEntity);
	}
	template <typename R = bool> static R CheckInteractComponent(ICommonContexts* world, GameEntity* entity, GameEntity* target, InteractTemplate* interactComponent) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, GameEntity*, InteractTemplate*))(Il2CppBase() + 0x1DD3C7C))(0, world, entity, target, interactComponent);
	}
	template <typename R = bool> static R Accessed(GameEntity* actor, GameEntity* target) {
		return ((R (*)(void *, GameEntity*, GameEntity*))(Il2CppBase() + 0x1DD42D0))(0, actor, target);
	}
	template <typename R = Vec2*> static R GetInteractPosition(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1DD43D8))(0, gameEntity);
	}
	template <typename R = bool> static R IsPlaceOwner(uintptr_t entity, ICommonContexts* world, GameEntity* target) {
		return ((R (*)(void *, uintptr_t, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x0))(0, entity, world, target);
	}
	 static ValueTuple4InteractTemplate*, ItemEntity*, int32_t, float>* GetAction(ICommonContexts* world, GameEntity* entity, GameEntity* target, IInteractActionsEntity* interactEntity) {
		return ((ValueTuple4InteractTemplate*, ItemEntity*, int32_t, float>* (*)(void *, ICommonContexts*, GameEntity*, GameEntity*, IInteractActionsEntity*))(Il2CppBase() + 0x1DD4570))(0, world, entity, target, interactEntity);
	}
	template <typename R = Il2CppString*> static R GetInteractIcon(ICommonContexts* world, GameEntity* entity, GameEntity* target) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x1DD4800))(0, world, entity, target);
	}
	 static ValueTuple2InventorySlotEntity*, ItemEntity*>* GetUseItem(ICommonContexts* world, GameEntity* entity, int32_t inventoryItemId) {
		return ((ValueTuple2InventorySlotEntity*, ItemEntity*>* (*)(void *, ICommonContexts*, GameEntity*, int32_t))(Il2CppBase() + 0x1DD4910))(0, world, entity, inventoryItemId);
	}
	template <typename R = bool> static R InInteractRadius(GameEntity* target, GameEntity* entity, float gap) {
		return ((R (*)(void *, GameEntity*, GameEntity*, float))(Il2CppBase() + 0x1DD4B70))(0, target, entity, gap);
	}
	template <typename R = bool> static R InItemInteractRadius(GameEntity* target, GameEntity* entity, ItemEntity* item, float gap) {
		return ((R (*)(void *, GameEntity*, GameEntity*, ItemEntity*, float))(Il2CppBase() + 0x1DD4D40))(0, target, entity, item, gap);
	}
	template <typename R = bool> static R InInteractItemRadiusWithCompensation(GameEntity* target, GameEntity* entity, ItemEntity* item, int64_t actionTick, float gap) {
		return ((R (*)(void *, GameEntity*, GameEntity*, ItemEntity*, int64_t, float))(Il2CppBase() + 0x1DD4E70))(0, target, entity, item, actionTick, gap);
	}
	template <typename R = ItemEntity*> static R GetItem(ICommonContexts* world, GameEntity* actor, int32_t inventoryItemId, Il2CppString* itemName) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x1DD5008))(0, world, actor, inventoryItemId, itemName);
	}
	template <typename R = ActionEntity*> static R CreateAction(ICommonContexts* world, ActionType* actionType, ActionEntity* actionData, GameEntity* actor, GameEntity* target, ItemEntity* item, float durationCoef, int32_t inventoryItemId, float angle, int64_t startTime, float chance, Nullable1int32_t>* sequenceValue) {
		return ((R (*)(void *, ICommonContexts*, ActionType*, ActionEntity*, GameEntity*, GameEntity*, ItemEntity*, float, int32_t, float, int64_t, float, Nullable1int32_t>*))(Il2CppBase() + 0x1DD5280))(0, world, actionType, actionData, actor, target, item, durationCoef, inventoryItemId, angle, startTime, chance, sequenceValue);
	}
	 static ValueTuple2ActionBreakReasons*, ActionEntity*>* StartAction(ICommonContexts* world, ActionType* actionType, GameEntity* actor, GameEntity* target, IInteractActionsEntity* interactTarget, Il2CppString* itemName, int32_t inventoryItemId, float angle, int64_t startTime, float chance, Nullable1int32_t>* sequenceValue, bool checkBreak) {
		return ((ValueTuple2ActionBreakReasons*, ActionEntity*>* (*)(void *, ICommonContexts*, ActionType*, GameEntity*, GameEntity*, IInteractActionsEntity*, Il2CppString*, int32_t, float, int64_t, float, Nullable1int32_t>*, bool))(Il2CppBase() + 0x1DD6054))(0, world, actionType, actor, target, interactTarget, itemName, inventoryItemId, angle, startTime, chance, sequenceValue, checkBreak);
	}
	template <typename R = ActionEntity*> static R ToActionDataEntity(Il2CppString* actionName, ICommonContexts* world) {
		return ((R (*)(void *, Il2CppString*, ICommonContexts*))(Il2CppBase() + 0x1DD7A24))(0, actionName, world);
	}
	template <typename R = Il2CppString*> static R GetActionName(ItemEntity* item, ICommonContexts* world, GameEntity* actor, ActionType* actionType, GameEntity* target) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*, GameEntity*, ActionType*, GameEntity*))(Il2CppBase() + 0x1DD7718))(0, item, world, actor, actionType, target);
	}
	template <typename R = Il2CppString*> static R GetInteractActionName(GameEntity* target, ICommonContexts* world, IInteractActionsEntity* interactEntity, GameEntity* actor, ActionType* actionType) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, IInteractActionsEntity*, GameEntity*, ActionType*))(Il2CppBase() + 0x1DD6590))(0, target, world, interactEntity, actor, actionType);
	}
	template <typename R = Il2CppString*> static R ToWarningString(ActionBreakReasons* actionBreakReason) {
		return ((R (*)(void *, ActionBreakReasons*))(Il2CppBase() + 0x1DD7AF8))(0, actionBreakReason);
	}

};

