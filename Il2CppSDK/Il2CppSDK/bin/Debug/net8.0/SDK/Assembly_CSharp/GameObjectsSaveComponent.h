#pragma once

#include "../mscorlib/System/Object.h"


class GameObjectsSaveComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameObjectsSaveComponent"));
	}

	Il2CppDictionary<Il2CppString*, Il2CppString*>*& Values() {
		return *(Il2CppDictionary<Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0x10);
	}

};};
