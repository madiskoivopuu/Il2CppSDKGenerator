#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"
#include "../UnityEngine_CoreModule/UnityEngine/Color.h"
#include "../UnityEngine_CoreModule/UnityEngine/Vector4.h"

class CanvasMeshRenderer*;

class CanvasMeshRendererExposedParams : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CanvasMeshRendererExposedParams"));
	}

	float& _k_emissive() {
		return *(float*)((uintptr_t)this + 0x18);
	}

	float& _min_k_emissive() {
		return *(float*)((uintptr_t)this + 0x1C);
	}

	float& _b_emissive() {
		return *(float*)((uintptr_t)this + 0x20);
	}

	UnityEngine::Color& _ColorPrimaryEmissive() {
		return *(UnityEngine::Color*)((uintptr_t)this + 0x24);
	}

	UnityEngine::Color& _ColorSecondaryEmissive() {
		return *(UnityEngine::Color*)((uintptr_t)this + 0x34);
	}

	UnityEngine::Vector4& _ShapeTexture_ST() {
		return *(UnityEngine::Vector4*)((uintptr_t)this + 0x44);
	}

	CanvasMeshRenderer*& canvasMeshRenderer() {
		return *(CanvasMeshRenderer**)((uintptr_t)this + 0x58);
	}

	float& _defaultK_emissive() {
		return *(float*)((uintptr_t)this + 0x60);
	}

};};
