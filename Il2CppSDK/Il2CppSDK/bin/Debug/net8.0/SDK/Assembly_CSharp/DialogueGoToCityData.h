#pragma once

#include "../mscorlib/System/ValueType.h"


class DialogueGoToCityData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueGoToCityData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& Index() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

};};
