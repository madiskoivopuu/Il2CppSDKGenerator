#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }
namespace System_Collections { class IEnumerator; }

class AnimationIntRandomizer : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationIntRandomizer"));
	}

	float& minTime() {
		return *(float*)((uintptr_t)this + 0x18);
	}

	float& maxTime() {
		return *(float*)((uintptr_t)this + 0x1C);
	}

	UnityEngine::Animator*& animator() {
		return *(UnityEngine::Animator**)((uintptr_t)this + 0x20);
	}

};};
