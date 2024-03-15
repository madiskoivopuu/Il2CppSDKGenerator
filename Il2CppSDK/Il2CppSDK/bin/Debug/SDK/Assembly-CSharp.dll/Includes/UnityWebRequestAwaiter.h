#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityWebRequestAwaiter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityWebRequestAwaiter"));
	}

	template <typename R = uintptr_t> R& asyncOp() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& continuation() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = bool> R get_IsCompleted() {
		return ((R (*)(UnityWebRequestAwaiter*))(Il2CppBase() + 0x153A880))(this);
	}
	template <typename R = void> R GetResult() {
		return ((R (*)(UnityWebRequestAwaiter*))(Il2CppBase() + 0x153A89C))(this);
	}
	template <typename R = void> R OnCompleted(uintptr_t continuation) {
		return ((R (*)(UnityWebRequestAwaiter*, uintptr_t))(Il2CppBase() + 0x153A8A0))(this, continuation);
	}
	template <typename R = void> R OnRequestCompleted(uintptr_t obj) {
		return ((R (*)(UnityWebRequestAwaiter*, uintptr_t))(Il2CppBase() + 0x153A8A8))(this, obj);
	}

};

