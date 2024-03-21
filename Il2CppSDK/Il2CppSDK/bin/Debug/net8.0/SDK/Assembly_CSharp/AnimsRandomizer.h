#pragma once

#include "../UnityEngine_AnimationModule/UnityEngine/StateMachineBehaviour.h"


class AnimsRandomizer : public StateMachineBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimsRandomizer"));
	}

	float& delayMin() {
		return *(float*)((uintptr_t)this + 0x18);
	}

	float& delayMax() {
		return *(float*)((uintptr_t)this + 0x1C);
	}

	float& initialDelay() {
		return *(float*)((uintptr_t)this + 0x20);
	}

	float& defaultLoopLenght() {
		return *(float*)((uintptr_t)this + 0x24);
	}

	int32_t& defaultInt() {
		return *(int32_t*)((uintptr_t)this + 0x28);
	}

	bool& isPlaying() {
		return *(bool*)((uintptr_t)this + 0x2C);
	}

	Il2CppString*& IntName() {
		return *(Il2CppString**)((uintptr_t)this + 0x30);
	}

	int32_t& _intHash() {
		return *(int32_t*)((uintptr_t)this + 0x38);
	}

	Il2CppArray<float>*& chances() {
		return *(Il2CppArray<float>**)((uintptr_t)this + 0x40);
	}

};};
