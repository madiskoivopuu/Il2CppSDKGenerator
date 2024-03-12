#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FishingHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingHelper"));
	}


	template <typename T = bool> static T IsFishing(uintptr_t actor, uintptr_t world, int64_t now) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x1699718))(0, actor, world, now);
	}
	template <typename T = uintptr_t> static T GetActiveFishingAction(uintptr_t actor, uintptr_t world, int64_t now) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x1699734))(0, actor, world, now);
	}
	template <typename T = uintptr_t> static T GetFishingOscillation(uintptr_t world, uintptr_t actionEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1699A24))(0, world, actionEntity);
	}
	template <typename T = Il2CppString*> static T GetLureName(uintptr_t world, uintptr_t target, Il2CppString* lureTag) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1699C90))(0, world, target, lureTag);
	}
	template <typename T = void*> static T GetFishingOscillationValue(uintptr_t world, uintptr_t actionEntity, Il2CppString* name, int64_t time) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, int64_t))(Il2CppBase() + 0x1699EF4))(0, world, actionEntity, name, time);
	}

};

}
