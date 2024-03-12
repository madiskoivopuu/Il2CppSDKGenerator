#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityWebRequestAwaiter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityWebRequestAwaiter"));
	}

	template <typename T = uintptr_t> T& asyncOp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& continuation() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(UnityWebRequestAwaiter*))(Il2CppBase() + 0x153A880))(this);
	}
	template <typename T = void> T GetResult() {
		return ((T (*)(UnityWebRequestAwaiter*))(Il2CppBase() + 0x153A89C))(this);
	}
	template <typename T = void> T OnCompleted(uintptr_t continuation) {
		return ((T (*)(UnityWebRequestAwaiter*, uintptr_t))(Il2CppBase() + 0x153A8A0))(this, continuation);
	}
	template <typename T = void> T OnRequestCompleted(uintptr_t obj) {
		return ((T (*)(UnityWebRequestAwaiter*, uintptr_t))(Il2CppBase() + 0x153A8A8))(this, obj);
	}

};

}
