#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ThreadHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ThreadHelper"));
	}

	template <typename T = Queue1uintptr_t>*> static T& _toExecuteInMainThread() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T ExecuteInMainThread(uintptr_t toInvoke) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14EF878))(0, toInvoke);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ThreadHelper*))(Il2CppBase() + 0x14EF9B8))(this);
	}

};

