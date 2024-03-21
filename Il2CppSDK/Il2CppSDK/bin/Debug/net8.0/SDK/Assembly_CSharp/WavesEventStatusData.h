#pragma once

#include "../mscorlib/System/ValueType.h"


class WavesEventStatusData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WavesEventStatusData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& WavesCount() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

	int32_t& WaveIndex() {
		return *(int32_t*)((uintptr_t)this + 0x8);
	}

	int32_t& ItemsTotalCount() {
		return *(int32_t*)((uintptr_t)this + 0xC);
	}

	int32_t& ItemsCount() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	int64_t& StartTime() {
		return *(int64_t*)((uintptr_t)this + 0x18);
	}

};};
