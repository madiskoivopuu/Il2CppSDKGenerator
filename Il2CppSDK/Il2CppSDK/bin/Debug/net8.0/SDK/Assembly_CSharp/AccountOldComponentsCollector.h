#pragma once

#include "../mscorlib/System/Object.h"
#include "AccountOldComponentsCollector/OldComponentLookup.h"

namespace System_Reflection { class MethodInfo; }

class AccountOldComponentsCollector : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountOldComponentsCollector"));
	}

	static Il2CppString*& Component() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppObject*& _threadLock() {
		return *(Il2CppObject**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppDictionary<Il2CppString*, AccountOldComponentsCollector::OldComponentLookup>*& _oldComponentsLookup() {
		return *(Il2CppDictionary<Il2CppString*, AccountOldComponentsCollector::OldComponentLookup>**)((uintptr_t)ClassDef()->static_fields + 0x8);
	}

	static Il2CppDictionary<int32_t, MethodInfo*>*& _oldComponentsMethodLookup() {
		return *(Il2CppDictionary<int32_t, MethodInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x10);
	}

};};
