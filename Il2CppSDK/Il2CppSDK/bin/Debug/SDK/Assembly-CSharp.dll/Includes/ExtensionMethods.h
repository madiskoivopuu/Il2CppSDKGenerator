#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExtensionMethods
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtensionMethods"));
	}


	template <typename R = UnityWebRequestAwaiter*> static R GetAwaiter(uintptr_t asyncOp) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x168A9C4))(0, asyncOp);
	}

};

