#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EffectsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectsHelper"));
	}

	 static HashSet1<Il2CppString*>*& _forbiddenTags() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R& ForbiddenTags() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = Il2CppArray<Il2CppString*>*> static R get_ForbiddenTags() {
		return ((R (*)(void *))(Il2CppBase() + 0x136A0A0))(0);
	}
	template <typename R = void> static R set_ForbiddenTags(Il2CppArray<Il2CppString*>* value) {
		return ((R (*)(void *, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x136A104))(0, value);
	}
	template <typename R = void> static R AddForbiddenTag(Il2CppString* tag) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x136A170))(0, tag);
	}
	template <typename R = void> static R RemoveForbiddenTag(Il2CppString* tag) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x136A2A8))(0, tag);
	}

};

