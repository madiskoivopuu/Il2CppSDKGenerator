#pragma once

#include "../mscorlib/System/ValueType.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Int64.h"
#include "../mscorlib/System/Single.h"


class InventoryData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Blueprint() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	int32_t& ParentId() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	int32_t& Index() {
		return *(int32_t*)((uintptr_t)this + 0x14);
	}

	Il2CppString*& Resource() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	int32_t& Count() {
		return *(int32_t*)((uintptr_t)this + 0x20);
	}

	System::Nullable1<int64_t>*& Signature() {
		return *(System::Nullable1<int64_t>**)((uintptr_t)this + 0x28);
	}

	System::Nullable1<float>*& DurabilityCoef() {
		return *(System::Nullable1<float>**)((uintptr_t)this + 0x38);
	}

	int32_t& MaxCount() {
		return *(int32_t*)((uintptr_t)this + 0x40);
	}

};};
