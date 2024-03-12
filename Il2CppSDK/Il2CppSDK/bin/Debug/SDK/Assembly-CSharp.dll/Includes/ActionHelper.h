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

	template <typename T = bool> static T CanBeInterruptedByInput(uintptr_t action, int64_t now, bool byOtherAction) {
		return ((T (*)(void *, uintptr_t, int64_t, bool))(Il2CppBase() + 0x1DD2614))(0, action, now, byOtherAction);
	}
	template <typename T = int32_t> static T GetRandomValue(uintptr_t action, uintptr_t world, int32_t range) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1DD2814))(0, action, world, range);
	}
	template <typename T = int64_t> static T GetApplyTime(uintptr_t actionEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DD277C))(0, actionEntity);
	}
	template <typename T = float> static T GetDelay(uintptr_t actionEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DD29DC))(0, actionEntity);
	}
	template <typename T = float> static T GetDuration(uintptr_t actionEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DD2ADC))(0, actionEntity);
	}
	template <typename T = float> static T GetPeriod(uintptr_t actionEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DD2A5C))(0, actionEntity);
	}
	template <typename T = int64_t> static T GetExpireTime(uintptr_t action) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DD2B5C))(0, action);
	}
	template <typename T = bool> static T IsActionExpired(uintptr_t action, int64_t now) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1DD2C1C))(0, action, now);
	}
	template <typename T = bool> static T IsBusyMoving(uintptr_t actor, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD2C44))(0, actor, world);
	}
	template <typename T = bool> static T IsBusyCharge(uintptr_t actor, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD2D78))(0, actor, world);
	}
	template <typename T = bool> static T IsBusyOrActionsBlocked(uintptr_t actor, uintptr_t world, int64_t now, void* ignore) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t, void*))(Il2CppBase() + 0x1DD2E90))(0, actor, world, now, ignore);
	}
	template <typename T = bool> static T IsBusyByOther(uintptr_t target, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD30FC))(0, target, world, actor);
	}
	template <typename T = bool> static T IgnoreStunned(uintptr_t actionEntity, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD3380))(0, actionEntity, world, actor);
	}
	template <typename T = bool> static T IgnoreSilence(uintptr_t actionEntity, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD3408))(0, actionEntity, world, actor);
	}
	template <typename T = bool> static T IgnoreImpotent(uintptr_t actionEntity, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD3490))(0, actionEntity, world, actor);
	}
	template <typename T = bool> static T IgnoreRooted(uintptr_t actionEntity, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD3518))(0, actionEntity, world, actor);
	}
	template <typename T = uintptr_t> static T CheckBreakAction(uintptr_t actor, uintptr_t world, uintptr_t action, bool start) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1DD35A0))(0, actor, world, action, start);
	}
	template <typename T = uintptr_t> static T CheckBreakMoveInventory(uintptr_t actor, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD3758))(0, actor, world);
	}
	template <typename T = bool> static T IsBusy(uintptr_t actor, uintptr_t world, int64_t now, void* ignore) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t, void*))(Il2CppBase() + 0x1DD2F78))(0, actor, world, now, ignore);
	}
	template <typename T = uintptr_t> static T GetPocketItem(uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD38FC))(0, world, actor);
	}
	template <typename T = bool> static T CanInteract(uintptr_t world, uintptr_t entity, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD3B08))(0, world, entity, target);
	}
	template <typename T = uintptr_t> static T GetInteractComponent(uintptr_t world, uintptr_t entity, uintptr_t target, uintptr_t interactEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD3FC0))(0, world, entity, target, interactEntity);
	}
	template <typename T = bool> static T CheckInteractComponent(uintptr_t world, uintptr_t entity, uintptr_t target, uintptr_t interactComponent) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD3C7C))(0, world, entity, target, interactComponent);
	}
	template <typename T = bool> static T Accessed(uintptr_t actor, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD42D0))(0, actor, target);
	}
	template <typename T = uintptr_t> static T GetInteractPosition(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DD43D8))(0, gameEntity);
	}
	template <typename T = bool> static T IsPlaceOwner(uintptr_t entity, uintptr_t world, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, entity, world, target);
	}
	template <typename T = void*> static T GetAction(uintptr_t world, uintptr_t entity, uintptr_t target, uintptr_t interactEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD4570))(0, world, entity, target, interactEntity);
	}
	template <typename T = Il2CppString*> static T GetInteractIcon(uintptr_t world, uintptr_t entity, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD4800))(0, world, entity, target);
	}
	template <typename T = void*> static T GetUseItem(uintptr_t world, uintptr_t entity, int32_t inventoryItemId) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1DD4910))(0, world, entity, inventoryItemId);
	}
	template <typename T = bool> static T InInteractRadius(uintptr_t target, uintptr_t entity, float gap) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1DD4B70))(0, target, entity, gap);
	}
	template <typename T = bool> static T InItemInteractRadius(uintptr_t target, uintptr_t entity, uintptr_t item, float gap) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1DD4D40))(0, target, entity, item, gap);
	}
	template <typename T = bool> static T InInteractItemRadiusWithCompensation(uintptr_t target, uintptr_t entity, uintptr_t item, int64_t actionTick, float gap) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int64_t, float))(Il2CppBase() + 0x1DD4E70))(0, target, entity, item, actionTick, gap);
	}
	template <typename T = uintptr_t> static T GetItem(uintptr_t world, uintptr_t actor, int32_t inventoryItemId, Il2CppString* itemName) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1DD5008))(0, world, actor, inventoryItemId, itemName);
	}
	template <typename T = uintptr_t> static T CreateAction(uintptr_t world, uintptr_t actionType, uintptr_t actionData, uintptr_t actor, uintptr_t target, uintptr_t item, float durationCoef, int32_t inventoryItemId, float angle, int64_t startTime, float chance, void* sequenceValue) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float, int32_t, float, int64_t, float, void*))(Il2CppBase() + 0x1DD5280))(0, world, actionType, actionData, actor, target, item, durationCoef, inventoryItemId, angle, startTime, chance, sequenceValue);
	}
	template <typename T = void*> static T StartAction(uintptr_t world, uintptr_t actionType, uintptr_t actor, uintptr_t target, uintptr_t interactTarget, Il2CppString* itemName, int32_t inventoryItemId, float angle, int64_t startTime, float chance, void* sequenceValue, bool checkBreak) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, int32_t, float, int64_t, float, void*, bool))(Il2CppBase() + 0x1DD6054))(0, world, actionType, actor, target, interactTarget, itemName, inventoryItemId, angle, startTime, chance, sequenceValue, checkBreak);
	}
	template <typename T = uintptr_t> static T ToActionDataEntity(Il2CppString* actionName, uintptr_t world) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1DD7A24))(0, actionName, world);
	}
	template <typename T = Il2CppString*> static T GetActionName(uintptr_t item, uintptr_t world, uintptr_t actor, uintptr_t actionType, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD7718))(0, item, world, actor, actionType, target);
	}
	template <typename T = Il2CppString*> static T GetInteractActionName(uintptr_t target, uintptr_t world, uintptr_t interactEntity, uintptr_t actor, uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD6590))(0, target, world, interactEntity, actor, actionType);
	}
	template <typename T = Il2CppString*> static T ToWarningString(uintptr_t actionBreakReason) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DD7AF8))(0, actionBreakReason);
	}

};

}
