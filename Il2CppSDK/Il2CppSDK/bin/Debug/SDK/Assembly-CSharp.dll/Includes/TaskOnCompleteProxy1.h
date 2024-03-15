#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class TaskOnCompleteProxy1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TaskOnCompleteProxy`1"));
	}

	 Action1T>*& mCallback() {
		return *(Action1T>**)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R onComplete(T result) {
		return ((R (*)(TaskOnCompleteProxy1*, T))(Il2CppBase() + 0x0))(this, result);
	}

};

