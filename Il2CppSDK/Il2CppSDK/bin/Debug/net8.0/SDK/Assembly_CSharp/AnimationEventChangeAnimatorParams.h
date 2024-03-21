#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

class AnimationEventChangeAnimatorParams : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationEventChangeAnimatorParams"));
	}

	UnityEngine::Animator*& animator() {
		return *(UnityEngine::Animator**)((uintptr_t)this + 0x18);
	}

	Il2CppString*& IntName() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

	int32_t& DefaultState() {
		return *(int32_t*)((uintptr_t)this + 0x28);
	}

};};
