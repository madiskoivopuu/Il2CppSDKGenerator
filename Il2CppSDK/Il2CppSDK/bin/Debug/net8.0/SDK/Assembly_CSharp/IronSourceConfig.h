#pragma once

#include "../mscorlib/System/Object.h"

namespace UnityEngine { class AndroidJavaObject; }

class IronSourceConfig : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceConfig"));
	}

	static Il2CppString*& unsupportedPlatformStr() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static IronSourceConfig*& _instance() {
		return *(IronSourceConfig**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static UnityEngine::AndroidJavaObject*& _androidBridge() {
		return *(UnityEngine::AndroidJavaObject**)((uintptr_t)ClassDef()->static_fields + 0x8);
	}

	static Il2CppString*& AndroidBridge() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x10);
	}

};};
