#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Stabs {

template <typename T>
class TweenRunner1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Stabs", "TweenRunner`1"));
	}

	template <typename R = uintptr_t> R& m_CoroutineContainer() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& m_Tween() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = uintptr_t> static R Start(T tweenInfo) {
		return ((R (*)(void *, T))(Il2CppBase() + 0x0))(0, tweenInfo);
	}
	template <typename R = void> R Init(uintptr_t coroutineContainer) {
		return ((R (*)(TweenRunner1*, uintptr_t))(Il2CppBase() + 0x0))(this, coroutineContainer);
	}
	template <typename R = void> R StartTween(T info) {
		return ((R (*)(TweenRunner1*, T))(Il2CppBase() + 0x0))(this, info);
	}
	template <typename R = void> R StopTween() {
		return ((R (*)(TweenRunner1*))(Il2CppBase() + 0x0))(this);
	}

};

}
