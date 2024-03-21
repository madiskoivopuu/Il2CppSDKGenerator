#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

class HidePlayerOverlap : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HidePlayerOverlap"));
	}

	bool& Activate_animation() {
		return *(bool*)((uintptr_t)this + 0x18);
	}

	bool& activated() {
		return *(bool*)((uintptr_t)this + 0x19);
	}

	float& Chance() {
		return *(float*)((uintptr_t)this + 0x1C);
	}

	bool& DestroyAfter() {
		return *(bool*)((uintptr_t)this + 0x20);
	}

	float& Countdown() {
		return *(float*)((uintptr_t)this + 0x24);
	}

	float& Timer() {
		return *(float*)((uintptr_t)this + 0x28);
	}

	bool& Randomize() {
		return *(bool*)((uintptr_t)this + 0x2C);
	}

	UnityEngine::Animator*& animator() {
		return *(UnityEngine::Animator**)((uintptr_t)this + 0x30);
	}

};};
