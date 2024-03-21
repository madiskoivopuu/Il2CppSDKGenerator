#pragma once

#include "../UnityEngine_AnimationModule/UnityEngine/StateMachineBehaviour.h"


class StateLock : public StateMachineBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StateLock"));
	}

	float& setAttackExitDelayTime() {
		return *(float*)((uintptr_t)this + 0x18);
	}

	float& _exitDelayTime() {
		return *(float*)((uintptr_t)this + 0x1C);
	}

};};
