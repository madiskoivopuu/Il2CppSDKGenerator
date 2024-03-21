#pragma once

#include "../mscorlib/System/ValueType.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Int64.h"


class CreatePointData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreatePointData"));
	}

	bool& Update() {
		return *(bool*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Blueprint() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	System::Nullable1<int64_t>*& EndTime() {
		return *(System::Nullable1<int64_t>**)((uintptr_t)this + 0x18);
	}

	System::Nullable1<int64_t>*& ResetTime() {
		return *(System::Nullable1<int64_t>**)((uintptr_t)this + 0x28);
	}

	System::Nullable1<int64_t>*& ClanId() {
		return *(System::Nullable1<int64_t>**)((uintptr_t)this + 0x38);
	}

};};
