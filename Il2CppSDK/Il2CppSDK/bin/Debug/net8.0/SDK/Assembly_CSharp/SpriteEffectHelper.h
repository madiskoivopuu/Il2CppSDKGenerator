#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

class SpriteEffectHelper : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteEffectHelper"));
	}

	UnityEngine::SpriteRenderer*& Icon() {
		return *(UnityEngine::SpriteRenderer**)((uintptr_t)this + 0x18);
	}

	UnityEngine::SpriteRenderer*& RarityIcon() {
		return *(UnityEngine::SpriteRenderer**)((uintptr_t)this + 0x20);
	}

	UnityEngine::GameObject*& FX() {
		return *(UnityEngine::GameObject**)((uintptr_t)this + 0x28);
	}

	UnityEngine::Material*& FXMat() {
		return *(UnityEngine::Material**)((uintptr_t)this + 0x30);
	}

	Il2CppArray<Color32>*& colors() {
		return *(Il2CppArray<Color32>**)((uintptr_t)this + 0x38);
	}

};};
