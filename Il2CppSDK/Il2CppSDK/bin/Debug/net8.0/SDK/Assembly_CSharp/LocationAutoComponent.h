#pragma once

#include "../mscorlib/System/Object.h"


class LocationAutoComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationAutoComponent"));
	}

	Il2CppDictionary<Il2CppString*, LocationAutoComponent::Attempt>*& Attempts() {
		return *(Il2CppDictionary<Il2CppString*, LocationAutoComponent::Attempt>**)((uintptr_t)this + 0x10);
	}

};};
