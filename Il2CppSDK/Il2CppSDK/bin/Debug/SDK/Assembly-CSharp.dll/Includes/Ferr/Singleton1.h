#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

template <typename T>
class Singleton1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "Singleton`1"));
	}

	 static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	 static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename R = bool> static R get_Instantiated() {
		return ((R (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename R = void> static R EnsureInstantiated() {
		return ((R (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(Singleton1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(Singleton1*))(Il2CppBase() + 0x0))(this);
	}

};

}
