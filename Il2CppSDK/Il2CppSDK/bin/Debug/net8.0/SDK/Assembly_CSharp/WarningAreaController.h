#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"
#include "../UnityEngine_CoreModule/UnityEngine/Color.h"

namespace UnityEngine { class AnimationCurve; }

class WarningAreaController : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningAreaController"));
	}

	Il2CppString*& _currentViewName() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	float& Distance() {
		return *(float*)((uintptr_t)this + 0x20);
	}

	float& StartDistance() {
		return *(float*)((uintptr_t)this + 0x24);
	}

	float& Width() {
		return *(float*)((uintptr_t)this + 0x28);
	}

	float& Angle() {
		return *(float*)((uintptr_t)this + 0x2C);
	}

	float& Duration() {
		return *(float*)((uintptr_t)this + 0x30);
	}

	UnityEngine::Color& Color() {
		return *(UnityEngine::Color*)((uintptr_t)this + 0x34);
	}

	UnityEngine::AnimationCurve*& BaseColorAnim() {
		return *(UnityEngine::AnimationCurve**)((uintptr_t)this + 0x48);
	}

	UnityEngine::AnimationCurve*& AnimatedColorAnim() {
		return *(UnityEngine::AnimationCurve**)((uintptr_t)this + 0x50);
	}

	UnityEngine::AnimationCurve*& AnimatedRangeAnim() {
		return *(UnityEngine::AnimationCurve**)((uintptr_t)this + 0x58);
	}

	Il2CppArray<BaseWarningAreaView*>*& _views() {
		return *(Il2CppArray<BaseWarningAreaView*>**)((uintptr_t)this + 0x60);
	}

};};
