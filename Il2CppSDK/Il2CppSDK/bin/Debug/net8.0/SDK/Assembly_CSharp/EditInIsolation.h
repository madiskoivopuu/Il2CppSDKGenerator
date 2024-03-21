#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"


class EditInIsolation : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EditInIsolation"));
	}

	Il2CppArray<bool>*& _wasEnabled() {
		return *(Il2CppArray<bool>**)((uintptr_t)this + 0x18);
	}

};};
