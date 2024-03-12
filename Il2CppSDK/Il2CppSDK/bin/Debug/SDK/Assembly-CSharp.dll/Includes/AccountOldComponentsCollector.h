#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountOldComponentsCollector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountOldComponentsCollector"));
	}

	template <typename T = Il2CppString*> static T& Component() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _threadLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& _oldComponentsLookup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& _oldComponentsMethodLookup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T GetComponentWithName(Il2CppString* componentKey) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0xFE064C))(0, componentKey);
	}
	template <typename T = uintptr_t> static T GetConvertMethodWithIndex(int32_t componentIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0xFE1530))(0, componentIndex);
	}
	template <typename T = void> static T CollectDeprecatedComponents() {
		return ((T (*)(void *))(Il2CppBase() + 0xFE0718))(0);
	}
	template <typename T = void> static T LogError(Il2CppString* error) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0xFE15F8))(0, error);
	}

};

}
