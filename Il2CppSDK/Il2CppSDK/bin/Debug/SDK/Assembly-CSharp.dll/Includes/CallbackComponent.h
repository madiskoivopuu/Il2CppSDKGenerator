#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CallbackComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CallbackComponent"));
	}

	template <typename T = void*> T& Method() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(CallbackComponent*))(Il2CppBase() + 0x15B276C))(this);
	}

};

}
