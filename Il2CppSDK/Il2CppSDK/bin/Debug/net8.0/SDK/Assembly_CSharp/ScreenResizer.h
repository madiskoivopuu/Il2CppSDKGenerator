#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RenderTexture; }

class ScreenResizer : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScreenResizer"));
	}

	float& sizeMultiplier() {
		return *(float*)((uintptr_t)this + 0x18);
	}

	UnityEngine::RenderTexture*& myRenderTexture() {
		return *(UnityEngine::RenderTexture**)((uintptr_t)this + 0x20);
	}

};};
