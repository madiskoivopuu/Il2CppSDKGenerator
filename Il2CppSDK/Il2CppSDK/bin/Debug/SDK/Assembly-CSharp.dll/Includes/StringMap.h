#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringMap"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& _strToKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> static T& _keyToStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T Init(Il2CppDictionary<Il2CppString*, int32_t>* map) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x169FDF0))(0, map);
	}
	template <typename T = Il2CppString*> static T GetMappedString(int32_t key) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x169F5BC))(0, key);
	}
	template <typename T = bool> static T TryGetMapKey(Il2CppString* str, uintptr_t* key) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x169F948))(0, str, key);
	}

};

