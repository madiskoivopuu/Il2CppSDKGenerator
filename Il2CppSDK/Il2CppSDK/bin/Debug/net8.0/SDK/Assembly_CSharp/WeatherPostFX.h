#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

class RTInit*;
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Camera; }

class WeatherPostFX : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeatherPostFX"));
	}

	UnityEngine::Material*& Material() {
		return *(UnityEngine::Material**)((uintptr_t)this + 0x18);
	}

	RTInit*& RT_Camera() {
		return *(RTInit**)((uintptr_t)this + 0x20);
	}

	bool& IsGlobalMap() {
		return *(bool*)((uintptr_t)this + 0x28);
	}

	UnityEngine::RenderTexture*& _rt() {
		return *(UnityEngine::RenderTexture**)((uintptr_t)this + 0x30);
	}

	UnityEngine::RenderTexture*& RT_Temp() {
		return *(UnityEngine::RenderTexture**)((uintptr_t)this + 0x38);
	}

	UnityEngine::Camera*& _camera() {
		return *(UnityEngine::Camera**)((uintptr_t)this + 0x40);
	}

	int32_t& _currentQuality() {
		return *(int32_t*)((uintptr_t)this + 0x48);
	}

};};
