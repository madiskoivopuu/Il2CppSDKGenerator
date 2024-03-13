#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TaskOnSuccessProxy1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TaskOnSuccessProxy`1"));
	}

	template <typename T = Action1uintptr_t>*> T& mCallback() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& mDisposeResult() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T onSuccess(uintptr_t result) {
		return ((T (*)(TaskOnSuccessProxy1*, uintptr_t))(Il2CppBase() + 0x0))(this, result);
	}

};

