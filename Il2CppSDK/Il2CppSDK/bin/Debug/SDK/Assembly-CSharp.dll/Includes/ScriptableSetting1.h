#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class ScriptableSetting1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScriptableSetting`1"));
	}

	 static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	 static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename R = void> static R Load() {
		return ((R (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename R = Il2CppString*> static R GetFilePath() {
		return ((R (*)(void *))(Il2CppBase() + 0x0))(0);
	}

};

