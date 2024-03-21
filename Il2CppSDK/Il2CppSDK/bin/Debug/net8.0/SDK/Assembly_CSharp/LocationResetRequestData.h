#pragma once

#include "../mscorlib/System/Object.h"


class LocationResetRequestData : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationResetRequestData"));
	}

	Il2CppString*& pointName() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	int32_t& locationId() {
		return *(int32_t*)((uintptr_t)this + 0x18);
	}

};};
