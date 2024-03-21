#pragma once

#include "../mscorlib/System/ValueType.h"


class DeleteInfoMessageData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeleteInfoMessageData"));
	}

	int64_t& MessageId() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

};};
