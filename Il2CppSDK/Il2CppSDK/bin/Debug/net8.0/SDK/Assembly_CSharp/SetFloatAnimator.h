#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"


class SetFloatAnimator : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetFloatAnimator"));
	}

	Il2CppString*& FloatName() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	float& MinValue() {
		return *(float*)((uintptr_t)this + 0x20);
	}

	float& MaxValue() {
		return *(float*)((uintptr_t)this + 0x24);
	}

	Il2CppString*& TriggerName() {
		return *(Il2CppString**)((uintptr_t)this + 0x28);
	}

	int32_t& MinDelayValue() {
		return *(int32_t*)((uintptr_t)this + 0x30);
	}

	int32_t& MaxDelayValue() {
		return *(int32_t*)((uintptr_t)this + 0x34);
	}

};};
