#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FishingHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingHelper"));
	}


	template <typename T = bool> static T IsFishing(GameEntity* actor, ICommonContexts* world, int64_t now) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, int64_t))(Il2CppBase() + 0x1699718))(0, actor, world, now);
	}
	template <typename T = ActionEntity*> static T GetActiveFishingAction(GameEntity* actor, ICommonContexts* world, int64_t now) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, int64_t))(Il2CppBase() + 0x1699734))(0, actor, world, now);
	}
	template <typename T = ConfigEntity*> static T GetFishingOscillation(ICommonContexts* world, ActionEntity* actionEntity) {
		return ((T (*)(void *, ICommonContexts*, ActionEntity*))(Il2CppBase() + 0x1699A24))(0, world, actionEntity);
	}
	template <typename T = Il2CppString*> static T GetLureName(ICommonContexts* world, GameEntity* target, Il2CppString* lureTag) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, Il2CppString*))(Il2CppBase() + 0x1699C90))(0, world, target, lureTag);
	}
	template <typename T = Nullable1float>*> static T GetFishingOscillationValue(ICommonContexts* world, ActionEntity* actionEntity, Il2CppString* name, int64_t time) {
		return ((T (*)(void *, ICommonContexts*, ActionEntity*, Il2CppString*, int64_t))(Il2CppBase() + 0x1699EF4))(0, world, actionEntity, name, time);
	}

};

