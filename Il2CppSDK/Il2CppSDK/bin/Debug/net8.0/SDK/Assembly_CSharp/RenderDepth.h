#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }

class RenderDepth : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RenderDepth"));
	}

	UnityEngine::Camera*& _camera() {
		return *(UnityEngine::Camera**)((uintptr_t)this + 0x18);
	}

};};
