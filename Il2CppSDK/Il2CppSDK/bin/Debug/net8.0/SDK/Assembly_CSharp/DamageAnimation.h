#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class AnimationCurve; }
namespace System_Collections { class IEnumerator; }

class DamageAnimation : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageAnimation"));
	}

	UnityEngine::GameObject*& animationTarget() {
		return *(UnityEngine::GameObject**)((uintptr_t)this + 0x18);
	}

	UnityEngine::AnimationCurve*& rotationCurveX() {
		return *(UnityEngine::AnimationCurve**)((uintptr_t)this + 0x20);
	}

	UnityEngine::AnimationCurve*& rotationCurveY() {
		return *(UnityEngine::AnimationCurve**)((uintptr_t)this + 0x28);
	}

	UnityEngine::AnimationCurve*& rotationCurveZ() {
		return *(UnityEngine::AnimationCurve**)((uintptr_t)this + 0x30);
	}

	float& duration() {
		return *(float*)((uintptr_t)this + 0x38);
	}

};};
