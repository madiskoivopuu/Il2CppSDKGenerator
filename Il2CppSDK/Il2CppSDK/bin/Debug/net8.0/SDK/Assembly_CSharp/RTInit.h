#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RenderTexture; }

class RTInit : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RTInit"));
	}

	UnityEngine::RenderTexture*& RT_WeatherFX() {
		return *(UnityEngine::RenderTexture**)((uintptr_t)this + 0x18);
	}

};};
