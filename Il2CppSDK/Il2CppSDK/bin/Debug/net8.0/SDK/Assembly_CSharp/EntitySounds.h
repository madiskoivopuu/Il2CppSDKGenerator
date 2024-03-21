#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

class GameEntity*;
namespace UnityEngine { class Coroutine; }
namespace System_Collections { class IEnumerator; }

class EntitySounds : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntitySounds"));
	}

	Il2CppString*& FootstepTheme() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	Il2CppString*& FootstepInvisibleTheme() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

	Il2CppString*& DeathTheme() {
		return *(Il2CppString**)((uintptr_t)this + 0x28);
	}

	Il2CppString*& DamageTheme() {
		return *(Il2CppString**)((uintptr_t)this + 0x30);
	}

	Il2CppString*& CreateTheme() {
		return *(Il2CppString**)((uintptr_t)this + 0x38);
	}

	Il2CppString*& DestroyTheme() {
		return *(Il2CppString**)((uintptr_t)this + 0x40);
	}

	Il2CppString*& OpenTheme() {
		return *(Il2CppString**)((uintptr_t)this + 0x48);
	}

	Il2CppString*& CloseTheme() {
		return *(Il2CppString**)((uintptr_t)this + 0x50);
	}

	Il2CppString*& AggressionTheme() {
		return *(Il2CppString**)((uintptr_t)this + 0x58);
	}

	float& AggressionChance() {
		return *(float*)((uintptr_t)this + 0x60);
	}

	float& AggressionInterval() {
		return *(float*)((uintptr_t)this + 0x64);
	}

	int32_t& _entityId() {
		return *(int32_t*)((uintptr_t)this + 0x68);
	}

	uint32_t& _stepId() {
		return *(uint32_t*)((uintptr_t)this + 0x6C);
	}

	UnityEngine::Coroutine*& _aggressionCoroutine() {
		return *(UnityEngine::Coroutine**)((uintptr_t)this + 0x70);
	}

};};
