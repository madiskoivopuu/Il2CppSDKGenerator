#pragma once

#include "../mscorlib/System/ValueType.h"
#include "CheatsAddData/Kinds.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Single.h"


class CheatsAddData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CheatsAddData"));
	}

	CheatsAddData::Kinds& Kind() {
		return *(CheatsAddData::Kinds*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	int32_t& IntParam() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	System::Nullable1<float>*& FloatParam() {
		return *(System::Nullable1<float>**)((uintptr_t)this + 0x14);
	}

};};
