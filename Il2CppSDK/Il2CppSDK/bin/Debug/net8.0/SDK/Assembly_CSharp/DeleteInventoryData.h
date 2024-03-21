#pragma once

#include "../mscorlib/System/ValueType.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Int32.h"


class DeleteInventoryData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeleteInventoryData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	System::Nullable1<int32_t>*& MaxCount() {
		return *(System::Nullable1<int32_t>**)((uintptr_t)this + 0x4);
	}

};};
