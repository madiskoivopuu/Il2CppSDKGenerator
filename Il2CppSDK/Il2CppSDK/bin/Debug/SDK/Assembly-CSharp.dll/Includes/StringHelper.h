#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringHelper"));
	}


	template <typename R = Il2CppString*> static R ToInvariantString(float value) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x169F14C))(0, value);
	}
	template <typename R = float> static R ToFloatOrDefault(Il2CppString* str, float defaultValue) {
		return ((R (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x169F1C0))(0, str, defaultValue);
	}
	template <typename R = float> static R ToInvariantFloatOrDefault(Il2CppString* str, float defaultValue) {
		return ((R (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x169F220))(0, str, defaultValue);
	}
	 static Nullable1<float>* ToNullInvariantFloatOrDefault(Il2CppString* str, Nullable1<float>* defaultValue) {
		return ((Nullable1<float>* (*)(void *, Il2CppString*, Nullable1<float>*))(Il2CppBase() + 0x169F2CC))(0, str, defaultValue);
	}
	template <typename R = int32_t> static R ToIntOrDefault(Il2CppString* str, int32_t defaultValue) {
		return ((R (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x169F3AC))(0, str, defaultValue);
	}

};

