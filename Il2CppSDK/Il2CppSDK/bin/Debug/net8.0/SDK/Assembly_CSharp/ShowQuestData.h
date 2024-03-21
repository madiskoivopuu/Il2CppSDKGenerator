#pragma once

#include "../mscorlib/System/ValueType.h"


class ShowQuestData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowQuestData"));
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

};};
