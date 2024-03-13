#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetsSelectorHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetsSelectorHelper"));
	}

	template <typename T = Il2CppList<GameEntity*>*> static T& _buffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = OneTargetProcessor*> static T& _oneTargetProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = ListTargetProcessor*> static T& _listTargetProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = SplashTargetProcessor*> static T& _splashTargetProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = RepeatMagicProcessor*> static T& _repeatMagicProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = int32_t> static T SelectTargets(IArenaWorld* world, TargetsSelector* selector, GameEntity* actor, Il2CppList<GameEntity*>* result, Nullable1int32_t>* overrideMaxCount) {
		return ((T (*)(void *, IArenaWorld*, TargetsSelector*, GameEntity*, Il2CppList<GameEntity*>*, Nullable1int32_t>*))(Il2CppBase() + 0x16A6D70))(0, world, selector, actor, result, overrideMaxCount);
	}
	template <typename T = int32_t> static T SelectTargets_1(IArenaWorld* world, TargetsSelector* selector, GameEntity* actor, GameEntity* center, Il2CppList<GameEntity*>* result) {
		return ((T (*)(void *, IArenaWorld*, TargetsSelector*, GameEntity*, GameEntity*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x16A8384))(0, world, selector, actor, center, result);
	}
	template <typename T = GameEntity*> static T SelectTarget(IArenaWorld* world, TargetsSelector* selector, GameEntity* actor) {
		return ((T (*)(void *, IArenaWorld*, TargetsSelector*, GameEntity*))(Il2CppBase() + 0x16A8568))(0, world, selector, actor);
	}
	template <typename T = void> static T ProcessSplash(IArenaWorld* world, MagicEntity* magic, SplashComponent* splashComponent, GameEntity* splashCenter, GameEntity* actor) {
		return ((T (*)(void *, IArenaWorld*, MagicEntity*, SplashComponent*, GameEntity*, GameEntity*))(Il2CppBase() + 0x16A8768))(0, world, magic, splashComponent, splashCenter, actor);
	}
	template <typename T = void> static T ProcessRepeatMagic(ICommonContexts* world, MagicEntity* magic, RepeatMagicComponent* repeatMagicComponent, GameEntity* center, GameEntity* actor) {
		return ((T (*)(void *, ICommonContexts*, MagicEntity*, RepeatMagicComponent*, GameEntity*, GameEntity*))(Il2CppBase() + 0x16A8AAC))(0, world, magic, repeatMagicComponent, center, actor);
	}
	template <typename T = bool> static T CheckTarget(IArenaWorld* world, TargetsSelector* selector, GameEntity* actor, GameEntity* center, int32_t actorId, IClanGuildEntity* source, GameEntity* target) {
		return ((T (*)(void *, IArenaWorld*, TargetsSelector*, GameEntity*, GameEntity*, int32_t, IClanGuildEntity*, GameEntity*))(Il2CppBase() + 0x16A8E80))(0, world, selector, actor, center, actorId, source, target);
	}
	template <typename T = int32_t> static T ProcessTargets(IArenaWorld* world, TargetsSelector* selector, GameEntity* actor, GameEntity* center, float centerRotation, int32_t actorId, IClanGuildEntity* source, ITargetProcessor* processor, Nullable1int32_t>* overrideMaxCount) {
		return ((T (*)(void *, IArenaWorld*, TargetsSelector*, GameEntity*, GameEntity*, float, int32_t, IClanGuildEntity*, ITargetProcessor*, Nullable1int32_t>*))(Il2CppBase() + 0x16A6F54))(0, world, selector, actor, center, centerRotation, actorId, source, processor, overrideMaxCount);
	}
	template <typename T = bool> static T ProcessTargetsg__ProcessTarget|15_0(GameEntity* target, bool validTarget, uintptr_t ) {
		return ((T (*)(void *, GameEntity*, bool, uintptr_t))(Il2CppBase() + 0x16A96BC))(0, target, validTarget, );
	}

};

