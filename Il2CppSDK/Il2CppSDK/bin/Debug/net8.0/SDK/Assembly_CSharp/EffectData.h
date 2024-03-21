#pragma once

#include "../mscorlib/System/ValueType.h"


class EffectData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectData"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& SourceId() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

	Il2CppArray<Il2CppString*>*& EffectNames() {
		return *(Il2CppArray<Il2CppString*>**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& EffectName() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	Il2CppString*& RandomEffectName() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	Il2CppString*& Text() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

	Il2CppString*& Notification() {
		return *(Il2CppString**)((uintptr_t)this + 0x28);
	}

	int32_t& Count() {
		return *(int32_t*)((uintptr_t)this + 0x30);
	}

};};
