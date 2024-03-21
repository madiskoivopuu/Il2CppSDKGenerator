#pragma once

#include "../mscorlib/System/Object.h"


class RGSaveComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSaveComponent"));
	}

	Il2CppDictionary<Il2CppString*, RGSaveComponent::RGSave>*& Values() {
		return *(Il2CppDictionary<Il2CppString*, RGSaveComponent::RGSave>**)((uintptr_t)this + 0x10);
	}

};};
