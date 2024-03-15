#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountOldComponentsCollector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountOldComponentsCollector"));
	}

	template <typename R = Il2CppString*> static R& Component() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppObject*> static R& _threadLock() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Il2CppDictionary<Il2CppString*, OldComponentLookup>*& _oldComponentsLookup() {
		return *(Il2CppDictionary<Il2CppString*, OldComponentLookup>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static Il2CppDictionary<int32_t, uintptr_t>*& _oldComponentsMethodLookup() {
		return *(Il2CppDictionary<int32_t, uintptr_t>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename R = OldComponentLookup> static R GetComponentWithName(Il2CppString* componentKey) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0xFE064C))(0, componentKey);
	}
	template <typename R = uintptr_t> static R GetConvertMethodWithIndex(int32_t componentIndex) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0xFE1530))(0, componentIndex);
	}
	template <typename R = void> static R CollectDeprecatedComponents() {
		return ((R (*)(void *))(Il2CppBase() + 0xFE0718))(0);
	}
	template <typename R = void> static R LogError(Il2CppString* error) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0xFE15F8))(0, error);
	}

};

