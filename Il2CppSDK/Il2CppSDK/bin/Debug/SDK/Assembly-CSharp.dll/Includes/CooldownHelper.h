#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CooldownHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownHelper"));
	}


	template <typename T = CooldownEntity*> static T StartSneakCooldown(GameEntity* target, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1338660))(0, target, world);
	}
	template <typename T = CooldownEntity*> static T GetActiveSneakCooldown(GameEntity* target, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1338808))(0, target, world);
	}
	template <typename T = bool> static T HasActiveSneakCooldown(GameEntity* target, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1338864))(0, target, world);
	}
	template <typename T = bool> static T HasActiveCooldown(GameEntity* target, ICommonContexts* world, Il2CppString* name) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x1338880))(0, target, world, name);
	}
	template <typename T = bool> static T HasActiveCooldown_1(GameEntity* target, ICommonContexts* world, Il2CppArray<uintptr_t>* names) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x133889C))(0, target, world, names);
	}
	template <typename T = bool> static T HasActiveCooldown_2(GameEntity* actor, ICommonContexts* world, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x13389E4))(0, actor, world, values);
	}
	template <typename T = bool> static T HasActiveCooldown_3(GameEntity* target, ICommonContexts* world, ItemEntity* item) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, ItemEntity*))(Il2CppBase() + 0x1338B2C))(0, target, world, item);
	}
	template <typename T = bool> static T HasActiveInteractCooldown(GameEntity* actor, ICommonContexts* world, GameDataEntity* targetData) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, GameDataEntity*))(Il2CppBase() + 0x1338B78))(0, actor, world, targetData);
	}
	template <typename T = CooldownEntity*> static T GetActiveCooldown(GameEntity* actor, ICommonContexts* world, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1338BEC))(0, actor, world, values);
	}
	template <typename T = CooldownEntity*> static T GetActiveInteractCooldown(GameEntity* actor, ICommonContexts* world, GameDataEntity* targetData) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, GameDataEntity*))(Il2CppBase() + 0x1338CD0))(0, actor, world, targetData);
	}
	template <typename T = CooldownEntity*> static T GetActiveCooldown_1(GameEntity* target, ICommonContexts* world, Il2CppString* name) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x1335C4C))(0, target, world, name);
	}
	template <typename T = CooldownEntity*> static T GetActiveCooldown_2(GameEntity* target, ICommonContexts* world, ItemEntity* item) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, ItemEntity*))(Il2CppBase() + 0x1338D44))(0, target, world, item);
	}
	template <typename T = float> static T GetCooldownValue(GameEntity* entity, Il2CppArray<uintptr_t>* tags, float baseValue) {
		return ((T (*)(void *, GameEntity*, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x1338D84))(0, entity, tags, baseValue);
	}
	template <typename T = CooldownEntity*> static T StartCooldown(GameEntity* target, ICommonContexts* world, bool useModifiers, Il2CppString* name, float duration, Il2CppArray<uintptr_t>* tags, int64_t startTime) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, bool, Il2CppString*, float, Il2CppArray<uintptr_t>*, int64_t))(Il2CppBase() + 0x13386CC))(0, target, world, useModifiers, name, duration, tags, startTime);
	}
	template <typename T = CooldownEntity*> static T SetCooldown(GameEntity* target, ICommonContexts* world, bool useModifiers, Il2CppString* name, float duration, Il2CppArray<uintptr_t>* tags, int64_t startTime) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, bool, Il2CppString*, float, Il2CppArray<uintptr_t>*, int64_t))(Il2CppBase() + 0x13390E8))(0, target, world, useModifiers, name, duration, tags, startTime);
	}
	template <typename T = void> static T StartCooldowns(GameEntity* target, ICommonContexts* world, bool useModifiers, ItemEntity* item, int64_t startTime, ActionEntity* action) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, bool, ItemEntity*, int64_t, ActionEntity*))(Il2CppBase() + 0x1339224))(0, target, world, useModifiers, item, startTime, action);
	}
	template <typename T = bool> static T IsExpired(CooldownEntity* cooldown, int64_t now) {
		return ((T (*)(void *, CooldownEntity*, int64_t))(Il2CppBase() + 0x1335D94))(0, cooldown, now);
	}
	template <typename T = int64_t> static T GetTimeLeft(uintptr_t entity, int64_t now) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x0))(0, entity, now);
	}
	template <typename T = int64_t> static T GetEndTime(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, entity);
	}
	template <typename T = CooldownEntity*> static T GetActiveCooldown_3(ItemEntity* itemEntity, ICommonContexts* contexts, int32_t targetId) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*, int32_t))(Il2CppBase() + 0x1335A4C))(0, itemEntity, contexts, targetId);
	}
	template <typename T = bool> static T HasActiveCooldown_4(ItemEntity* itemEntity, ICommonContexts* contexts, int32_t targetId, int64_t now) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*, int32_t, int64_t))(Il2CppBase() + 0x1339400))(0, itemEntity, contexts, targetId, now);
	}
	template <typename T = bool> static T NeedBroadcast(CooldownEntity* cooldown) {
		return ((T (*)(void *, CooldownEntity*))(Il2CppBase() + 0x1339450))(0, cooldown);
	}

};

