#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"


class WallHiderHelper : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WallHiderHelper"));
	}

	int32_t& _id() {
		return *(int32_t*)((uintptr_t)this + 0x18);
	}

	Il2CppArray<GameObject*>*& _WhatToHide() {
		return *(Il2CppArray<GameObject*>**)((uintptr_t)this + 0x20);
	}

	Il2CppArray<Material*>*& _materials() {
		return *(Il2CppArray<Material*>**)((uintptr_t)this + 0x28);
	}

};};
