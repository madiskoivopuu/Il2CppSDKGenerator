#pragma once

#include "../mscorlib/System/Object.h"


class IronSourceError : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceError"));
	}

	Il2CppString*& description() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	int32_t& code() {
		return *(int32_t*)((uintptr_t)this + 0x18);
	}

};};
