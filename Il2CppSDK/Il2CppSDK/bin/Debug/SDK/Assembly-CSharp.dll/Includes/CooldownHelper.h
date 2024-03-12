#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CooldownHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownHelper"));
	}


	template <typename T = uintptr_t> static T StartSneakCooldown(uintptr_t target, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1338660))(0, target, world);
	}
	template <typename T = uintptr_t> static T GetActiveSneakCooldown(uintptr_t target, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1338808))(0, target, world);
	}
	template <typename T = bool> static T HasActiveSneakCooldown(uintptr_t target, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1338864))(0, target, world);
	}
	template <typename T = bool> static T HasActiveCooldown(uintptr_t target, uintptr_t world, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1338880))(0, target, world, name);
	}
	template <typename T = bool> static T HasActiveCooldown_1(uintptr_t target, uintptr_t world, Il2CppArray<uintptr_t>* names) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x133889C))(0, target, world, names);
	}
	template <typename T = bool> static T HasActiveCooldown_2(uintptr_t actor, uintptr_t world, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x13389E4))(0, actor, world, values);
	}
	template <typename T = bool> static T HasActiveCooldown_3(uintptr_t target, uintptr_t world, uintptr_t item) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1338B2C))(0, target, world, item);
	}
	template <typename T = bool> static T HasActiveInteractCooldown(uintptr_t actor, uintptr_t world, uintptr_t targetData) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1338B78))(0, actor, world, targetData);
	}
	template <typename T = uintptr_t> static T GetActiveCooldown(uintptr_t actor, uintptr_t world, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1338BEC))(0, actor, world, values);
	}
	template <typename T = uintptr_t> static T GetActiveInteractCooldown(uintptr_t actor, uintptr_t world, uintptr_t targetData) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1338CD0))(0, actor, world, targetData);
	}
	template <typename T = uintptr_t> static T GetActiveCooldown_1(uintptr_t target, uintptr_t world, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1335C4C))(0, target, world, name);
	}
	template <typename T = uintptr_t> static T GetActiveCooldown_2(uintptr_t target, uintptr_t world, uintptr_t item) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1338D44))(0, target, world, item);
	}
	template <typename T = float> static T GetCooldownValue(uintptr_t entity, Il2CppArray<uintptr_t>* tags, float baseValue) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x1338D84))(0, entity, tags, baseValue);
	}
	template <typename T = uintptr_t> static T StartCooldown(uintptr_t target, uintptr_t world, bool useModifiers, Il2CppString* name, float duration, Il2CppArray<uintptr_t>* tags, int64_t startTime) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, Il2CppString*, float, Il2CppArray<uintptr_t>*, int64_t))(Il2CppBase() + 0x13386CC))(0, target, world, useModifiers, name, duration, tags, startTime);
	}
	template <typename T = uintptr_t> static T SetCooldown(uintptr_t target, uintptr_t world, bool useModifiers, Il2CppString* name, float duration, Il2CppArray<uintptr_t>* tags, int64_t startTime) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, Il2CppString*, float, Il2CppArray<uintptr_t>*, int64_t))(Il2CppBase() + 0x13390E8))(0, target, world, useModifiers, name, duration, tags, startTime);
	}
	template <typename T = void> static T StartCooldowns(uintptr_t target, uintptr_t world, bool useModifiers, uintptr_t item, int64_t startTime, uintptr_t action) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x1339224))(0, target, world, useModifiers, item, startTime, action);
	}
	template <typename T = bool> static T IsExpired(uintptr_t cooldown, int64_t now) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1335D94))(0, cooldown, now);
	}
	template <typename T = int64_t> static T GetTimeLeft(uintptr_t entity, int64_t now) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x0))(0, entity, now);
	}
	template <typename T = int64_t> static T GetEndTime(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, entity);
	}
	template <typename T = uintptr_t> static T GetActiveCooldown_3(uintptr_t itemEntity, uintptr_t contexts, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1335A4C))(0, itemEntity, contexts, targetId);
	}
	template <typename T = bool> static T HasActiveCooldown_4(uintptr_t itemEntity, uintptr_t contexts, int32_t targetId, int64_t now) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, int64_t))(Il2CppBase() + 0x1339400))(0, itemEntity, contexts, targetId, now);
	}
	template <typename T = bool> static T NeedBroadcast(uintptr_t cooldown) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1339450))(0, cooldown);
	}

};

}
