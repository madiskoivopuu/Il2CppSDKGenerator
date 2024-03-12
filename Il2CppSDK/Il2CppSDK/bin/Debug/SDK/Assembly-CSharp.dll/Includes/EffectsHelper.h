#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EffectsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectsHelper"));
	}

	template <typename T = void*> static T& _forbiddenTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ForbiddenTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T get_ForbiddenTags() {
		return ((T (*)(void *))(Il2CppBase() + 0x136A0A0))(0);
	}
	template <typename T = void> static T set_ForbiddenTags(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x136A104))(0, value);
	}
	template <typename T = void> static T AddForbiddenTag(Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x136A170))(0, tag);
	}
	template <typename T = void> static T RemoveForbiddenTag(Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x136A2A8))(0, tag);
	}

};

}
