#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace System_Collections { class IEnumerator; }

class FireHazardtest : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FireHazard_test"));
	}

	UnityEngine::GameObject*& Emitter() {
		return *(UnityEngine::GameObject**)((uintptr_t)this + 0x18);
	}

	UnityEngine::GameObject*& Projectile() {
		return *(UnityEngine::GameObject**)((uintptr_t)this + 0x20);
	}

	float& Speed() {
		return *(float*)((uintptr_t)this + 0x28);
	}

	float& Timer() {
		return *(float*)((uintptr_t)this + 0x2C);
	}

	float& Delay() {
		return *(float*)((uintptr_t)this + 0x30);
	}

	float& Radius() {
		return *(float*)((uintptr_t)this + 0x34);
	}

	float& Distanse() {
		return *(float*)((uintptr_t)this + 0x38);
	}

};};
