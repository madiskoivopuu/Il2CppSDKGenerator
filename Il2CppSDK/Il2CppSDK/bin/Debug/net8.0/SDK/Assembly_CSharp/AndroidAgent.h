#pragma once

#include "../mscorlib/System/Object.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Int32.h"

class IronSourcePlacement*;
namespace UnityEngine { class AndroidJavaObject; }

class AndroidAgent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AndroidAgent"));
	}

	static UnityEngine::AndroidJavaObject*& _androidBridge() {
		return *(UnityEngine::AndroidJavaObject**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& AndroidBridge() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x8);
	}

	static Il2CppString*& REWARD_AMOUNT() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& REWARD_NAME() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& PLACEMENT_NAME() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& WATERFALL_CONFIG_FLOOR() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& WATERFALL_CONFIG_CEILING() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& WATERFALL_CONFIG_API() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

};};
