#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FishingHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingHelper"));
	}


	template <typename R = bool> static R IsFishing(GameEntity* actor, ICommonContexts* world, int64_t now) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, int64_t))(Il2CppBase() + 0x1699718))(0, actor, world, now);
	}
	template <typename R = ActionEntity*> static R GetActiveFishingAction(GameEntity* actor, ICommonContexts* world, int64_t now) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, int64_t))(Il2CppBase() + 0x1699734))(0, actor, world, now);
	}
	template <typename R = ConfigEntity*> static R GetFishingOscillation(ICommonContexts* world, ActionEntity* actionEntity) {
		return ((R (*)(void *, ICommonContexts*, ActionEntity*))(Il2CppBase() + 0x1699A24))(0, world, actionEntity);
	}
	template <typename R = Il2CppString*> static R GetLureName(ICommonContexts* world, GameEntity* target, Il2CppString* lureTag) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, Il2CppString*))(Il2CppBase() + 0x1699C90))(0, world, target, lureTag);
	}
	 static Nullable1<float>* GetFishingOscillationValue(ICommonContexts* world, ActionEntity* actionEntity, Il2CppString* name, int64_t time) {
		return ((Nullable1<float>* (*)(void *, ICommonContexts*, ActionEntity*, Il2CppString*, int64_t))(Il2CppBase() + 0x1699EF4))(0, world, actionEntity, name, time);
	}

};

