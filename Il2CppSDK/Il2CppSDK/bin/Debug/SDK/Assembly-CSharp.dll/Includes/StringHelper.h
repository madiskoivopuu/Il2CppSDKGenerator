#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringHelper"));
	}


	template <typename T = Il2CppString*> static T ToInvariantString(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x169F14C))(0, value);
	}
	template <typename T = float> static T ToFloatOrDefault(Il2CppString* str, float defaultValue) {
		return ((T (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x169F1C0))(0, str, defaultValue);
	}
	template <typename T = float> static T ToInvariantFloatOrDefault(Il2CppString* str, float defaultValue) {
		return ((T (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x169F220))(0, str, defaultValue);
	}
	template <typename T = void*> static T ToNullInvariantFloatOrDefault(Il2CppString* str, void* defaultValue) {
		return ((T (*)(void *, Il2CppString*, void*))(Il2CppBase() + 0x169F2CC))(0, str, defaultValue);
	}
	template <typename T = int32_t> static T ToIntOrDefault(Il2CppString* str, int32_t defaultValue) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x169F3AC))(0, str, defaultValue);
	}

};

}
