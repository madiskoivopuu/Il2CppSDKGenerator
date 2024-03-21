#pragma once

#include "../mscorlib/System/Object.h"

class IronSourceError*;
class IronSourcePlacement*;

class IronSourceUtils : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceUtils"));
	}

	static Il2CppString*& ERROR_CODE() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& ERROR_DESCRIPTION() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& INSTANCE_ID_KEY() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& PLACEMENT_KEY() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

};};
