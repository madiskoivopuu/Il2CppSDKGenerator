#pragma once

#include "BaseWarningAreaView.h"

namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Coroutine; }
namespace System_Collections { class IEnumerator; }

class WarningCircleAreaView : public BaseWarningAreaView {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningCircleAreaView"));
	}

	UnityEngine::MeshRenderer*& _baseCircle() {
		return *(UnityEngine::MeshRenderer**)((uintptr_t)this + 0x20);
	}

	UnityEngine::MeshRenderer*& _holeCircle() {
		return *(UnityEngine::MeshRenderer**)((uintptr_t)this + 0x28);
	}

	UnityEngine::MeshRenderer*& _circleAnimated() {
		return *(UnityEngine::MeshRenderer**)((uintptr_t)this + 0x30);
	}

	UnityEngine::Coroutine*& _currentCoroutine() {
		return *(UnityEngine::Coroutine**)((uintptr_t)this + 0x38);
	}

};};
