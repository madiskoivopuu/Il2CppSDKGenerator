#pragma once

#include "../mscorlib/System/ValueType.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Int64.h"
#include "../mscorlib/System/Single.h"


class UpdateMagicData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateMagicData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& Count() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

	int32_t& UseCount() {
		return *(int32_t*)((uintptr_t)this + 0x8);
	}

	System::Nullable1<int64_t>*& StartTime() {
		return *(System::Nullable1<int64_t>**)((uintptr_t)this + 0x10);
	}

	System::Nullable1<float>*& Duration() {
		return *(System::Nullable1<float>**)((uintptr_t)this + 0x20);
	}

};};
