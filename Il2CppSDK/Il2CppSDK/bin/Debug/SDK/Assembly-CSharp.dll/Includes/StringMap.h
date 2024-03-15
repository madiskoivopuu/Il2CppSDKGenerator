#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringMap"));
	}

	 static Il2CppDictionary<Il2CppString*, int32_t>*& _strToKey() {
		return *(Il2CppDictionary<Il2CppString*, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Il2CppDictionary<int32_t, Il2CppString*>*& _keyToStr() {
		return *(Il2CppDictionary<int32_t, Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = void> static R Init(Il2CppDictionary<Il2CppString*, int32_t>* map) {
		return ((R (*)(void *, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x169FDF0))(0, map);
	}
	template <typename R = Il2CppString*> static R GetMappedString(int32_t key) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x169F5BC))(0, key);
	}
	template <typename R = bool> static R TryGetMapKey(Il2CppString* str, uintptr_t* key) {
		return ((R (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x169F948))(0, str, key);
	}

};

