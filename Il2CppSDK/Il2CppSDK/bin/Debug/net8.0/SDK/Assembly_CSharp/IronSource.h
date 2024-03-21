#pragma once

#include "../mscorlib/System/Object.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Int32.h"

class IronSourceIAgent*;
class IronSourcePlacement*;

class IronSource : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSource"));
	}

	IronSourceIAgent*& _platformAgent() {
		return *(IronSourceIAgent**)((uintptr_t)this + 0x10);
	}

	static IronSource*& _instance() {
		return *(IronSource**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& UNITY_PLUGIN_VERSION() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x8);
	}

	static bool& isUnsupportedPlatform() {
		return *(bool*)((uintptr_t)ClassDef()->static_fields + 0x10);
	}

};};
