#pragma once

#include "../mscorlib/System/ValueType.h"


class BossOperationResultData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossOperationResultData"));
	}

	int32_t& Progress() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	bool& Opened() {
		return *(bool*)((uintptr_t)this + 0x4);
	}

	Il2CppString*& ErrorMsg() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

};};
