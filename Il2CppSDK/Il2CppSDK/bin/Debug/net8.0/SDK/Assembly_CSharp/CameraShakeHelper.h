#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"


class CameraShakeHelper : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraShakeHelper"));
	}

	bool& UseTriggerName() {
		return *(bool*)((uintptr_t)this + 0x18);
	}

	Il2CppString*& CameraShakeTrigger() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

};};
