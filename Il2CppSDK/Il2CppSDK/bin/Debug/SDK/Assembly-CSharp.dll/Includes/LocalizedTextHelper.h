#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocalizedTextHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalizedTextHelper"));
	}


	template <typename R = void> static R SetLocalizedFunc(uintptr_t text, Func1<Il2CppString*>* func) {
		return ((R (*)(void *, uintptr_t, Func1<Il2CppString*>*))(Il2CppBase() + 0x179B9AC))(0, text, func);
	}
	template <typename R = void> static R SetLocalizedTime(uintptr_t text, Nullable1<Time>* time, Il2CppString* key) {
		return ((R (*)(void *, uintptr_t, Nullable1<Time>*, Il2CppString*))(Il2CppBase() + 0x179BB34))(0, text, time, key);
	}
	template <typename R = void> static R SetLocalizedKey(uintptr_t text, Il2CppString* key, Il2CppArray<Il2CppString*>* args) {
		return ((R (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x179BD90))(0, text, key, args);
	}
	template <typename R = void> static R SetLocalizedFormatKey(uintptr_t text, Il2CppString* format, Il2CppString* key, Il2CppArray<Il2CppString*>* args) {
		return ((R (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x179BF6C))(0, text, format, key, args);
	}
	template <typename R = void> static R SetLocalizedText(uintptr_t text, Il2CppString* key, Il2CppArray<Il2CppObject*>* args) {
		return ((R (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<Il2CppObject*>*))(Il2CppBase() + 0x179C164))(0, text, key, args);
	}

};

