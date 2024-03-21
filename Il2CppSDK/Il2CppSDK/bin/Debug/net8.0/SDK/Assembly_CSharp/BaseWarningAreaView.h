#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

class WarningAreaController*;

class BaseWarningAreaView : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseWarningAreaView"));
	}

	WarningAreaController*& <Controller>k__BackingField() {
		return *(WarningAreaController**)((uintptr_t)this + 0x18);
	}

};};
