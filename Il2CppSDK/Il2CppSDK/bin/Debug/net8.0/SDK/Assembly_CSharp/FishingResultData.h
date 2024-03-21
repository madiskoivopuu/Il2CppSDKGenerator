#pragma once

#include "../mscorlib/System/ValueType.h"


class FishingResultData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingResultData"));
	}

	bool& Success() {
		return *(bool*)((uintptr_t)this + 0x0);
	}

};};
