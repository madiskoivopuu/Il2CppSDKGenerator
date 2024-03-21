#pragma once

#include "../mscorlib/System/ValueType.h"


class MaxHealthAndDmgCoefData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MaxHealthAndDmgCoefData"));
	}

	Il2CppList<MaxHealthAndDmgCoefData::Item>*& Values() {
		return *(Il2CppList<MaxHealthAndDmgCoefData::Item>**)((uintptr_t)this + 0x0);
	}

};};
