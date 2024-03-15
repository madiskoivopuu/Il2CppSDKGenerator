#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CooldownHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownHelper"));
	}


	template <typename R = CooldownEntity*> static R StartSneakCooldown(GameEntity* target, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1338660))(0, target, world);
	}
	template <typename R = CooldownEntity*> static R GetActiveSneakCooldown(GameEntity* target, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1338808))(0, target, world);
	}
	template <typename R = bool> static R HasActiveSneakCooldown(GameEntity* target, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1338864))(0, target, world);
	}
	template <typename R = bool> static R HasActiveCooldown(GameEntity* target, ICommonContexts* world, Il2CppString* name) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x1338880))(0, target, world, name);
	}
	template <typename R = bool> static R HasActiveCooldown_1(GameEntity* target, ICommonContexts* world, Il2CppArray<Il2CppString*>* names) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x133889C))(0, target, world, names);
	}
	template <typename R = bool> static R HasActiveCooldown_2(GameEntity* actor, ICommonContexts* world, Il2CppArray<NameFloat>* values) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Il2CppArray<NameFloat>*))(Il2CppBase() + 0x13389E4))(0, actor, world, values);
	}
	template <typename R = bool> static R HasActiveCooldown_3(GameEntity* target, ICommonContexts* world, ItemEntity* item) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, ItemEntity*))(Il2CppBase() + 0x1338B2C))(0, target, world, item);
	}
	template <typename R = bool> static R HasActiveInteractCooldown(GameEntity* actor, ICommonContexts* world, GameDataEntity* targetData) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, GameDataEntity*))(Il2CppBase() + 0x1338B78))(0, actor, world, targetData);
	}
	template <typename R = CooldownEntity*> static R GetActiveCooldown(GameEntity* actor, ICommonContexts* world, Il2CppArray<NameFloat>* values) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Il2CppArray<NameFloat>*))(Il2CppBase() + 0x1338BEC))(0, actor, world, values);
	}
	template <typename R = CooldownEntity*> static R GetActiveInteractCooldown(GameEntity* actor, ICommonContexts* world, GameDataEntity* targetData) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, GameDataEntity*))(Il2CppBase() + 0x1338CD0))(0, actor, world, targetData);
	}
	template <typename R = CooldownEntity*> static R GetActiveCooldown_1(GameEntity* target, ICommonContexts* world, Il2CppString* name) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x1335C4C))(0, target, world, name);
	}
	template <typename R = CooldownEntity*> static R GetActiveCooldown_2(GameEntity* target, ICommonContexts* world, ItemEntity* item) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, ItemEntity*))(Il2CppBase() + 0x1338D44))(0, target, world, item);
	}
	template <typename R = float> static R GetCooldownValue(GameEntity* entity, Il2CppArray<Il2CppString*>* tags, float baseValue) {
		return ((R (*)(void *, GameEntity*, Il2CppArray<Il2CppString*>*, float))(Il2CppBase() + 0x1338D84))(0, entity, tags, baseValue);
	}
	template <typename R = CooldownEntity*> static R StartCooldown(GameEntity* target, ICommonContexts* world, bool useModifiers, Il2CppString* name, float duration, Il2CppArray<Il2CppString*>* tags, int64_t startTime) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, bool, Il2CppString*, float, Il2CppArray<Il2CppString*>*, int64_t))(Il2CppBase() + 0x13386CC))(0, target, world, useModifiers, name, duration, tags, startTime);
	}
	template <typename R = CooldownEntity*> static R SetCooldown(GameEntity* target, ICommonContexts* world, bool useModifiers, Il2CppString* name, float duration, Il2CppArray<Il2CppString*>* tags, int64_t startTime) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, bool, Il2CppString*, float, Il2CppArray<Il2CppString*>*, int64_t))(Il2CppBase() + 0x13390E8))(0, target, world, useModifiers, name, duration, tags, startTime);
	}
	template <typename R = void> static R StartCooldowns(GameEntity* target, ICommonContexts* world, bool useModifiers, ItemEntity* item, int64_t startTime, ActionEntity* action) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, bool, ItemEntity*, int64_t, ActionEntity*))(Il2CppBase() + 0x1339224))(0, target, world, useModifiers, item, startTime, action);
	}
	template <typename R = bool> static R IsExpired(CooldownEntity* cooldown, int64_t now) {
		return ((R (*)(void *, CooldownEntity*, int64_t))(Il2CppBase() + 0x1335D94))(0, cooldown, now);
	}
	template <typename R = int64_t> static R GetTimeLeft(uintptr_t entity, int64_t now) {
		return ((R (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x0))(0, entity, now);
	}
	template <typename R = int64_t> static R GetEndTime(uintptr_t entity) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, entity);
	}
	template <typename R = CooldownEntity*> static R GetActiveCooldown_3(ItemEntity* itemEntity, ICommonContexts* contexts, int32_t targetId) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*, int32_t))(Il2CppBase() + 0x1335A4C))(0, itemEntity, contexts, targetId);
	}
	template <typename R = bool> static R HasActiveCooldown_4(ItemEntity* itemEntity, ICommonContexts* contexts, int32_t targetId, int64_t now) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*, int32_t, int64_t))(Il2CppBase() + 0x1339400))(0, itemEntity, contexts, targetId, now);
	}
	template <typename R = bool> static R NeedBroadcast(CooldownEntity* cooldown) {
		return ((R (*)(void *, CooldownEntity*))(Il2CppBase() + 0x1339450))(0, cooldown);
	}

};

