#pragma once

#include "../mscorlib/System/ValueType.h"
#include "CyclicRequestData/RequestType.h"


class CyclicRequestData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicRequestData"));
	}

	CyclicRequestData::RequestType& Type() {
		return *(CyclicRequestData::RequestType*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& DeviceID() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& GoogleID() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	Il2CppString*& GameCenterID() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	Il2CppString*& HuaweyID() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

	Il2CppString*& FirebaseID() {
		return *(Il2CppString**)((uintptr_t)this + 0x28);
	}

};};
