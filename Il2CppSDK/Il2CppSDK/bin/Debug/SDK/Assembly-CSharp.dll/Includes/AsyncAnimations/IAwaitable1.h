#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AsyncAnimations {

class IAwaitable1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AsyncAnimations", "IAwaitable`1"));
	}


	template <typename T = TaskAwaiter1IAwaitable1uintptr_t>*>*> T GetAwaiter() {
		return ((T (*)(IAwaitable1*))(Il2CppBase() + 0x0))(this);
	}

};

}
