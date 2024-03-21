#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"
#include "../UnityEngine_CoreModule/UnityEngine/Color.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace System_Collections { class IEnumerator; }

class WarningController : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningController"));
	}

	float& Distance() {
		return *(float*)((uintptr_t)this + 0x18);
	}

	float& WarningTime() {
		return *(float*)((uintptr_t)this + 0x1C);
	}

	UnityEngine::Color& WarningColor() {
		return *(UnityEngine::Color*)((uintptr_t)this + 0x20);
	}

	UnityEngine::AnimationCurve*& BaseColorAnim() {
		return *(UnityEngine::AnimationCurve**)((uintptr_t)this + 0x30);
	}

	UnityEngine::AnimationCurve*& AnimatedColorAnim() {
		return *(UnityEngine::AnimationCurve**)((uintptr_t)this + 0x38);
	}

	UnityEngine::AnimationCurve*& AnimatedRangeAnim() {
		return *(UnityEngine::AnimationCurve**)((uintptr_t)this + 0x40);
	}

	bool& isCircle() {
		return *(bool*)((uintptr_t)this + 0x48);
	}

	UnityEngine::GameObject*& CircleWarning() {
		return *(UnityEngine::GameObject**)((uintptr_t)this + 0x50);
	}

	UnityEngine::GameObject*& _baseCircle() {
		return *(UnityEngine::GameObject**)((uintptr_t)this + 0x58);
	}

	UnityEngine::GameObject*& _holeCircle() {
		return *(UnityEngine::GameObject**)((uintptr_t)this + 0x60);
	}

	UnityEngine::GameObject*& _circleAnimated() {
		return *(UnityEngine::GameObject**)((uintptr_t)this + 0x68);
	}

	float& SafeZone() {
		return *(float*)((uintptr_t)this + 0x70);
	}

	bool& Holed() {
		return *(bool*)((uintptr_t)this + 0x74);
	}

	bool& isLine() {
		return *(bool*)((uintptr_t)this + 0x75);
	}

	UnityEngine::GameObject*& LineWarning() {
		return *(UnityEngine::GameObject**)((uintptr_t)this + 0x78);
	}

	UnityEngine::GameObject*& _rightPart() {
		return *(UnityEngine::GameObject**)((uintptr_t)this + 0x80);
	}

	UnityEngine::GameObject*& _leftPart() {
		return *(UnityEngine::GameObject**)((uintptr_t)this + 0x88);
	}

	UnityEngine::GameObject*& _middlePart() {
		return *(UnityEngine::GameObject**)((uintptr_t)this + 0x90);
	}

	float& Width() {
		return *(float*)((uintptr_t)this + 0x98);
	}

	bool& isCone() {
		return *(bool*)((uintptr_t)this + 0x9C);
	}

	UnityEngine::GameObject*& ConeWarning() {
		return *(UnityEngine::GameObject**)((uintptr_t)this + 0xA0);
	}

	UnityEngine::GameObject*& _baseCone() {
		return *(UnityEngine::GameObject**)((uintptr_t)this + 0xA8);
	}

	UnityEngine::GameObject*& _animatedCone() {
		return *(UnityEngine::GameObject**)((uintptr_t)this + 0xB0);
	}

	float& Angle() {
		return *(float*)((uintptr_t)this + 0xB8);
	}

	int32_t& trianglesPerRad() {
		return *(int32_t*)((uintptr_t)this + 0xBC);
	}

	Il2CppList<Vector3>*& vertices() {
		return *(Il2CppList<Vector3>**)((uintptr_t)this + 0xC0);
	}

};};
