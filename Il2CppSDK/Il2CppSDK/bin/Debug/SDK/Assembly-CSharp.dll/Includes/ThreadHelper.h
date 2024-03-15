#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ThreadHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ThreadHelper"));
	}

	 static Queue1uintptr_t>*& _toExecuteInMainThread() {
		return *(Queue1uintptr_t>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> static R ExecuteInMainThread(uintptr_t toInvoke) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x14EF878))(0, toInvoke);
	}
	template <typename R = void> R Update() {
		return ((R (*)(ThreadHelper*))(Il2CppBase() + 0x14EF9B8))(this);
	}

};

