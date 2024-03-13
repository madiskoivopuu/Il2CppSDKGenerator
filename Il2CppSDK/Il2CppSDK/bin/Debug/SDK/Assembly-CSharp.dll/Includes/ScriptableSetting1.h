#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScriptableSetting1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScriptableSetting`1"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = Il2CppString*> static T GetFilePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}

};

