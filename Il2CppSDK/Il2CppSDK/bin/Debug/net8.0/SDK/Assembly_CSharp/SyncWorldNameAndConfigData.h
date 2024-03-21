#pragma once

#include "../mscorlib/System/ValueType.h"
#include "ConfigFromServer.h"


class SyncWorldNameAndConfigData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SyncWorldNameAndConfigData"));
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	ConfigFromServer& Config() {
		return *(ConfigFromServer*)((uintptr_t)this + 0x8);
	}

};};
