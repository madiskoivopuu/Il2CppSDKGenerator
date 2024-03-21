#pragma once

#include "../mscorlib/System/Object.h"
#include "Ferr2DTTerrainDirection.h"
#include "../UnityEngine_CoreModule/UnityEngine/Rect.h"


class Ferr2DTSegmentDescription : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Ferr2DT_SegmentDescription"));
	}

	Ferr2DTTerrainDirection& applyTo() {
		return *(Ferr2DTTerrainDirection*)((uintptr_t)this + 0x10);
	}

	float& zOffset() {
		return *(float*)((uintptr_t)this + 0x14);
	}

	float& yOffset() {
		return *(float*)((uintptr_t)this + 0x18);
	}

	UnityEngine::Rect& leftCap() {
		return *(UnityEngine::Rect*)((uintptr_t)this + 0x1C);
	}

	UnityEngine::Rect& innerLeftCap() {
		return *(UnityEngine::Rect*)((uintptr_t)this + 0x2C);
	}

	UnityEngine::Rect& rightCap() {
		return *(UnityEngine::Rect*)((uintptr_t)this + 0x3C);
	}

	UnityEngine::Rect& innerRightCap() {
		return *(UnityEngine::Rect*)((uintptr_t)this + 0x4C);
	}

	Il2CppArray<Rect>*& body() {
		return *(Il2CppArray<Rect>**)((uintptr_t)this + 0x60);
	}

	float& capOffset() {
		return *(float*)((uintptr_t)this + 0x68);
	}

};};
