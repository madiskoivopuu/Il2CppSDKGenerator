#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"


class DestroyAfter : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyAfter"));
	}

	bool& _byDelay() {
		return *(bool*)((uintptr_t)this + 0x18);
	}

	float& _delay() {
		return *(float*)((uintptr_t)this + 0x1C);
	}

};};
