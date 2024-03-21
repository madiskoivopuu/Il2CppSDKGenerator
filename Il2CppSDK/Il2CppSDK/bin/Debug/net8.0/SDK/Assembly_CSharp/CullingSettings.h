#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"
#include "../UnityEngine_CoreModule/UnityEngine/Vector4.h"


class CullingSettings : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CullingSettings"));
	}

	UnityEngine::Vector4& _Culling() {
		return *(UnityEngine::Vector4*)((uintptr_t)this + 0x18);
	}

};};
