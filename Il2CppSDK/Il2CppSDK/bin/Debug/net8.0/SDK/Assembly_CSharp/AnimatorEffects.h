#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"
#include "HideHelper/SlotIndex.h"
#include "HideHelper/SlotPrefab.h"
#include "HideHelper/ToolPrefab.h"

class HideHelper*;
class AnimatorEventsProxy*;

class AnimatorEffects : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorEffects"));
	}

	Il2CppArray<AnimatorEffects::Effect*>*& _effects() {
		return *(Il2CppArray<AnimatorEffects::Effect*>**)((uintptr_t)this + 0x18);
	}

	HideHelper*& _hideHelper() {
		return *(HideHelper**)((uintptr_t)this + 0x20);
	}

	AnimatorEventsProxy*& _proxy() {
		return *(AnimatorEventsProxy**)((uintptr_t)this + 0x28);
	}

};};
