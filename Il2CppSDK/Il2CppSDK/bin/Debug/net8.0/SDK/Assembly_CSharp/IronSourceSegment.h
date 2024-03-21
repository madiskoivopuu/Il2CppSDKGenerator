#pragma once

#include "../mscorlib/System/Object.h"


class IronSourceSegment : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceSegment"));
	}

	int32_t& age() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	Il2CppString*& gender() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	int32_t& level() {
		return *(int32_t*)((uintptr_t)this + 0x20);
	}

	int32_t& isPaying() {
		return *(int32_t*)((uintptr_t)this + 0x24);
	}

	int64_t& userCreationDate() {
		return *(int64_t*)((uintptr_t)this + 0x28);
	}

	double& iapt() {
		return *(double*)((uintptr_t)this + 0x30);
	}

	Il2CppString*& segmentName() {
		return *(Il2CppString**)((uintptr_t)this + 0x38);
	}

	Il2CppDictionary<Il2CppString*, Il2CppString*>*& customs() {
		return *(Il2CppDictionary<Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0x40);
	}

};};
