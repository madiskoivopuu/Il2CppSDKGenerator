#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetsSelectorHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetsSelectorHelper"));
	}

	 static Il2CppList<GameEntity*>*& _buffer() {
		return *(Il2CppList<GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = OneTargetProcessor*> static R& _oneTargetProcessor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = ListTargetProcessor*> static R& _listTargetProcessor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = SplashTargetProcessor*> static R& _splashTargetProcessor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = RepeatMagicProcessor*> static R& _repeatMagicProcessor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename R = int32_t> static R SelectTargets(IArenaWorld* world, TargetsSelector* selector, GameEntity* actor, Il2CppList<GameEntity*>* result, Nullable1int32_t>* overrideMaxCount) {
		return ((R (*)(void *, IArenaWorld*, TargetsSelector*, GameEntity*, Il2CppList<GameEntity*>*, Nullable1int32_t>*))(Il2CppBase() + 0x16A6D70))(0, world, selector, actor, result, overrideMaxCount);
	}
	template <typename R = int32_t> static R SelectTargets_1(IArenaWorld* world, TargetsSelector* selector, GameEntity* actor, GameEntity* center, Il2CppList<GameEntity*>* result) {
		return ((R (*)(void *, IArenaWorld*, TargetsSelector*, GameEntity*, GameEntity*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x16A8384))(0, world, selector, actor, center, result);
	}
	template <typename R = GameEntity*> static R SelectTarget(IArenaWorld* world, TargetsSelector* selector, GameEntity* actor) {
		return ((R (*)(void *, IArenaWorld*, TargetsSelector*, GameEntity*))(Il2CppBase() + 0x16A8568))(0, world, selector, actor);
	}
	template <typename R = void> static R ProcessSplash(IArenaWorld* world, MagicEntity* magic, SplashComponent* splashComponent, GameEntity* splashCenter, GameEntity* actor) {
		return ((R (*)(void *, IArenaWorld*, MagicEntity*, SplashComponent*, GameEntity*, GameEntity*))(Il2CppBase() + 0x16A8768))(0, world, magic, splashComponent, splashCenter, actor);
	}
	template <typename R = void> static R ProcessRepeatMagic(ICommonContexts* world, MagicEntity* magic, RepeatMagicComponent* repeatMagicComponent, GameEntity* center, GameEntity* actor) {
		return ((R (*)(void *, ICommonContexts*, MagicEntity*, RepeatMagicComponent*, GameEntity*, GameEntity*))(Il2CppBase() + 0x16A8AAC))(0, world, magic, repeatMagicComponent, center, actor);
	}
	template <typename R = bool> static R CheckTarget(IArenaWorld* world, TargetsSelector* selector, GameEntity* actor, GameEntity* center, int32_t actorId, IClanGuildEntity* source, GameEntity* target) {
		return ((R (*)(void *, IArenaWorld*, TargetsSelector*, GameEntity*, GameEntity*, int32_t, IClanGuildEntity*, GameEntity*))(Il2CppBase() + 0x16A8E80))(0, world, selector, actor, center, actorId, source, target);
	}
	template <typename R = int32_t> static R ProcessTargets(IArenaWorld* world, TargetsSelector* selector, GameEntity* actor, GameEntity* center, float centerRotation, int32_t actorId, IClanGuildEntity* source, ITargetProcessor* processor, Nullable1int32_t>* overrideMaxCount) {
		return ((R (*)(void *, IArenaWorld*, TargetsSelector*, GameEntity*, GameEntity*, float, int32_t, IClanGuildEntity*, ITargetProcessor*, Nullable1int32_t>*))(Il2CppBase() + 0x16A6F54))(0, world, selector, actor, center, centerRotation, actorId, source, processor, overrideMaxCount);
	}
	template <typename R = bool> static R ProcessTargetsg__ProcessTarget|15_0(GameEntity* target, bool validTarget, uintptr_t ) {
		return ((R (*)(void *, GameEntity*, bool, uintptr_t))(Il2CppBase() + 0x16A96BC))(0, target, validTarget, );
	}

};

