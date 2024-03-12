#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class Singleton1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "Singleton`1"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = bool> static T get_Instantiated() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void> static T EnsureInstantiated() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Singleton1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Singleton1*))(Il2CppBase() + 0x0))(this);
	}

};

}
