#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AsyncAnimations {

template <typename T>
class IAwaitable1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AsyncAnimations", "IAwaitable`1"));
	}


	 TaskAwaiter1<IAwaitable1<T>*>* GetAwaiter() {
		return ((TaskAwaiter1<IAwaitable1<T>*>* (*)(IAwaitable1*))(Il2CppBase() + 0x0))(this);
	}

};

}
