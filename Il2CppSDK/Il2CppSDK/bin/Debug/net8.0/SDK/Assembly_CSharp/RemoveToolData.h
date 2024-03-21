#pragma once

#include "../mscorlib/System/ValueType.h"


class RemoveToolData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RemoveToolData"));
	}

	int32_t& ActorId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& ToolName() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& EffectName() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

};};
