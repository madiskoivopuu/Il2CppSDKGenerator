#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocalizedTextHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalizedTextHelper"));
	}


	template <typename T = void> static T SetLocalizedFunc(uintptr_t text, void* func) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x179B9AC))(0, text, func);
	}
	template <typename T = void> static T SetLocalizedTime(uintptr_t text, void* time, Il2CppString* key) {
		return ((T (*)(void *, uintptr_t, void*, Il2CppString*))(Il2CppBase() + 0x179BB34))(0, text, time, key);
	}
	template <typename T = void> static T SetLocalizedKey(uintptr_t text, Il2CppString* key, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x179BD90))(0, text, key, args);
	}
	template <typename T = void> static T SetLocalizedFormatKey(uintptr_t text, Il2CppString* format, Il2CppString* key, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x179BF6C))(0, text, format, key, args);
	}
	template <typename T = void> static T SetLocalizedText(uintptr_t text, Il2CppString* key, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x179C164))(0, text, key, args);
	}

};

}
