#pragma once

#include "../mscorlib/System/ValueType.h"
#include "ExtractData/RequestType.h"


class ExtractData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtractData"));
	}

	ExtractData::RequestType& Type() {
		return *(ExtractData::RequestType*)((uintptr_t)this + 0x0);
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

	int32_t& FromSlotId() {
		return *(int32_t*)((uintptr_t)this + 0x8);
	}

	int32_t& ToSlotId() {
		return *(int32_t*)((uintptr_t)this + 0xC);
	}

	int32_t& StealResourceCount() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

};};
