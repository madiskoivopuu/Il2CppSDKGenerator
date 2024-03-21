#pragma once

#include "../mscorlib/System/ValueType.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Int32.h"


class DialogueShowData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueShowData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& Quest() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	System::Nullable1<int32_t>*& Grade() {
		return *(System::Nullable1<int32_t>**)((uintptr_t)this + 0x18);
	}

};};
