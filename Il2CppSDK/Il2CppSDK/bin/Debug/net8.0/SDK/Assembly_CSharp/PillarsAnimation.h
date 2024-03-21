#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }
namespace System_Collections { class IEnumerator; }

class PillarsAnimation : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PillarsAnimation"));
	}

	Il2CppString*& _soundName() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	float& _idleCooldownMin() {
		return *(float*)((uintptr_t)this + 0x20);
	}

	float& _idleCooldownMax() {
		return *(float*)((uintptr_t)this + 0x24);
	}

	float& _actionTime() {
		return *(float*)((uintptr_t)this + 0x28);
	}

	UnityEngine::Animator*& _animator() {
		return *(UnityEngine::Animator**)((uintptr_t)this + 0x30);
	}

	float& _idleCooldown() {
		return *(float*)((uintptr_t)this + 0x38);
	}

};};
