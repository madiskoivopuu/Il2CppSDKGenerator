#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"
#include "../System_Core/System_Collections_Generic/HashSet1.h"

class IAnimatorEventsProxyListener*;

class AnimatorEventsProxy : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorEventsProxy"));
	}

	System_Collections_Generic::HashSet1<IAnimatorEventsProxyListener*>*& _listeners() {
		return *(System_Collections_Generic::HashSet1<IAnimatorEventsProxyListener*>**)((uintptr_t)this + 0x18);
	}

};};
