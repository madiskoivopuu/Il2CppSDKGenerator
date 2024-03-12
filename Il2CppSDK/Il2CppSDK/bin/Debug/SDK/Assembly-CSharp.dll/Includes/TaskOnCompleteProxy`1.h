#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TaskOnCompleteProxy1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TaskOnCompleteProxy`1"));
	}

	template <typename T = void*> T& mCallback() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T onComplete(uintptr_t result) {
		return ((T (*)(TaskOnCompleteProxy1*, uintptr_t))(Il2CppBase() + 0x0))(this, result);
	}

};

}
