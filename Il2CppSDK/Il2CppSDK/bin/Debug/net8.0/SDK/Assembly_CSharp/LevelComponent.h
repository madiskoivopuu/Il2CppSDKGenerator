#pragma once

#include "../mscorlib/System/Object.h"


class LevelComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelComponent"));
	}

	float& Value() {
		return *(float*)((uintptr_t)this + 0x10);
	}

};};
