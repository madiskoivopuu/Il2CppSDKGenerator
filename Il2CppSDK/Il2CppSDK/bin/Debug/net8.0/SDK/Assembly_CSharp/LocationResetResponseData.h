#pragma once

#include "../mscorlib/System/Object.h"


class LocationResetResponseData : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationResetResponseData"));
	}

	Il2CppString*& pointName() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	int32_t& locationId() {
		return *(int32_t*)((uintptr_t)this + 0x18);
	}

	bool& reseted() {
		return *(bool*)((uintptr_t)this + 0x1C);
	}

	Il2CppString*& error() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

};};
