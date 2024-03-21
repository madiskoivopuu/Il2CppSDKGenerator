#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Texture; }

class MatCapSettings : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MatCapSettings"));
	}

	UnityEngine::Texture*& _mc_d() {
		return *(UnityEngine::Texture**)((uintptr_t)this + 0x18);
	}

	UnityEngine::Texture*& _mc_r1() {
		return *(UnityEngine::Texture**)((uintptr_t)this + 0x20);
	}

	UnityEngine::Texture*& _mc_r4() {
		return *(UnityEngine::Texture**)((uintptr_t)this + 0x28);
	}

	UnityEngine::Texture*& _mc_r7() {
		return *(UnityEngine::Texture**)((uintptr_t)this + 0x30);
	}

	float& _mc_power() {
		return *(float*)((uintptr_t)this + 0x38);
	}

};};
