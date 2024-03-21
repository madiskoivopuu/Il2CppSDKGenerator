#pragma once

#include "../mscorlib/System/ValueType.h"


class DetectedQualityData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DetectedQualityData"));
	}

	uint8_t& DetectedQuality() {
		return *(uint8_t*)((uintptr_t)this + 0x0);
	}

};};
