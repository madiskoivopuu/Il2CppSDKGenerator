#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResultCallbackProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResultCallbackProxy"));
	}

	 Action1uintptr_t>*& mCallback() {
		return *(Action1uintptr_t>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R onResult(uintptr_t tokenResult) {
		return ((R (*)(ResultCallbackProxy*, uintptr_t))(Il2CppBase() + 0x1147DD0))(this, tokenResult);
	}

};

