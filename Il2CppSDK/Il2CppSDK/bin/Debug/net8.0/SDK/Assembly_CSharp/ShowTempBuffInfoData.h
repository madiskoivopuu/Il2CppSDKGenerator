#pragma once

#include "../mscorlib/System/ValueType.h"


class ShowTempBuffInfoData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowTempBuffInfoData"));
	}

	Il2CppString*& uniqueLookup() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

};};
