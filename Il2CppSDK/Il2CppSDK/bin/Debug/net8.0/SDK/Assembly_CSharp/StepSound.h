#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"


class StepSound : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StepSound"));
	}

	int32_t& EntityId() {
		return *(int32_t*)((uintptr_t)this + 0x18);
	}

	Il2CppString*& FootstepTheme() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

	Il2CppString*& FootstepInvisibleTheme() {
		return *(Il2CppString**)((uintptr_t)this + 0x28);
	}

};};
