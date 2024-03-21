#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"
#include "../UnityEngine_CoreModule/UnityEngine/Color.h"


class LightningHelper : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LightningHelper"));
	}

	UnityEngine::Color& _skyColor() {
		return *(UnityEngine::Color*)((uintptr_t)this + 0x18);
	}

	UnityEngine::Color& _equatorColor() {
		return *(UnityEngine::Color*)((uintptr_t)this + 0x28);
	}

	UnityEngine::Color& _groudColor() {
		return *(UnityEngine::Color*)((uintptr_t)this + 0x38);
	}

	UnityEngine::Color& _fogColor() {
		return *(UnityEngine::Color*)((uintptr_t)this + 0x48);
	}

	float& _fogStart() {
		return *(float*)((uintptr_t)this + 0x58);
	}

	float& _fogEnd() {
		return *(float*)((uintptr_t)this + 0x5C);
	}

};};
