#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

class RotateToCamera : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotateToCamera"));
	}

	UnityEngine::Transform*& Camera() {
		return *(UnityEngine::Transform**)((uintptr_t)this + 0x18);
	}

	Il2CppString*& cameraTag() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

};};
