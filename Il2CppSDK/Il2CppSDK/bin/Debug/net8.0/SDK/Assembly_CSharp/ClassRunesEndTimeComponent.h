#pragma once

#include "../mscorlib/System/Object.h"


class ClassRunesEndTimeComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRunesEndTimeComponent"));
	}

	Il2CppDictionary<ClassRunesEndTimeComponent::RuneSlotKey, int64_t>*& Values() {
		return *(Il2CppDictionary<ClassRunesEndTimeComponent::RuneSlotKey, int64_t>**)((uintptr_t)this + 0x10);
	}

};};
