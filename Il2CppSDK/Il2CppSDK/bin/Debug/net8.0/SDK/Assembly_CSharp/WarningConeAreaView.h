#pragma once

#include "BaseWarningAreaView.h"

namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Coroutine; }
namespace System_Collections { class IEnumerator; }

class WarningConeAreaView : public BaseWarningAreaView {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningConeAreaView"));
	}

	UnityEngine::MeshRenderer*& _baseCone() {
		return *(UnityEngine::MeshRenderer**)((uintptr_t)this + 0x20);
	}

	UnityEngine::MeshRenderer*& _animatedCone() {
		return *(UnityEngine::MeshRenderer**)((uintptr_t)this + 0x28);
	}

	static int32_t& _trianglesPerRad() {
		return *(int32_t*)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppDictionary<float, Mesh*>*& _meshСache() {
		return *(Il2CppDictionary<float, Mesh*>**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	UnityEngine::Coroutine*& _currentCoroutine() {
		return *(UnityEngine::Coroutine**)((uintptr_t)this + 0x30);
	}

};};
