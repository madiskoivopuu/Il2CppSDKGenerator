#pragma once

#include "BaseWarningAreaView.h"

namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Coroutine; }
namespace System_Collections { class IEnumerator; }

class WarningLineAreaView : public BaseWarningAreaView {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningLineAreaView"));
	}

	UnityEngine::MeshRenderer*& _rightPart() {
		return *(UnityEngine::MeshRenderer**)((uintptr_t)this + 0x20);
	}

	UnityEngine::MeshRenderer*& _leftPart() {
		return *(UnityEngine::MeshRenderer**)((uintptr_t)this + 0x28);
	}

	UnityEngine::MeshRenderer*& _middlePart() {
		return *(UnityEngine::MeshRenderer**)((uintptr_t)this + 0x30);
	}

	UnityEngine::Coroutine*& _currentCoroutine() {
		return *(UnityEngine::Coroutine**)((uintptr_t)this + 0x38);
	}

};};
