#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

class AnimationEventSpawnEffect : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationEventSpawnEffect"));
	}

	UnityEngine::GameObject*& Effect() {
		return *(UnityEngine::GameObject**)((uintptr_t)this + 0x18);
	}

	float& DestroyAfter() {
		return *(float*)((uintptr_t)this + 0x20);
	}

	bool& SpawnAsChild() {
		return *(bool*)((uintptr_t)this + 0x24);
	}

	bool& SpawnAtSocket() {
		return *(bool*)((uintptr_t)this + 0x25);
	}

	UnityEngine::Transform*& Socket() {
		return *(UnityEngine::Transform**)((uintptr_t)this + 0x28);
	}

};};
