#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

class ControlAnimatorParameters : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ControlAnimatorParameters"));
	}

	UnityEngine::Animator*& animator() {
		return *(UnityEngine::Animator**)((uintptr_t)this + 0x18);
	}

	Il2CppArray<Animator*>*& controlledAnimators() {
		return *(Il2CppArray<Animator*>**)((uintptr_t)this + 0x20);
	}

};};
