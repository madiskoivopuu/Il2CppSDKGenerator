#pragma once

#include "../mscorlib/System/Object.h"


class AvailableCosmeticsComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AvailableCosmeticsComponent"));
	}

	Il2CppDictionary<Il2CppString*, bool>*& Items() {
		return *(Il2CppDictionary<Il2CppString*, bool>**)((uintptr_t)this + 0x10);
	}

};};
