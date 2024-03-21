#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }
namespace System_Collections { class IEnumerator; }

class MimicSpawnHack : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MimicSpawnHack"));
	}

	UnityEngine::Animator*& _animator() {
		return *(UnityEngine::Animator**)((uintptr_t)this + 0x18);
	}

	float& _IsSpawnDelay() {
		return *(float*)((uintptr_t)this + 0x20);
	}

};};
