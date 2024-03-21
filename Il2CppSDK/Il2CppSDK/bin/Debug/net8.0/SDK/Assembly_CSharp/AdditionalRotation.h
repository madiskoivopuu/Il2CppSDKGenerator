#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"
#include "../UnityEngine_CoreModule/UnityEngine/Vector3.h"


class AdditionalRotation : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdditionalRotation"));
	}

	UnityEngine::Vector3& AddRotationFrom() {
		return *(UnityEngine::Vector3*)((uintptr_t)this + 0x18);
	}

	UnityEngine::Vector3& AddRotationTo() {
		return *(UnityEngine::Vector3*)((uintptr_t)this + 0x24);
	}

};};
