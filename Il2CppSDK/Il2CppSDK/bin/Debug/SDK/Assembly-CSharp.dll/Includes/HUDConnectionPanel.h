#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDConnectionPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDConnectionPanel"));
	}

	template <typename R = uintptr_t> R& _anim() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _connectionProblemCoroutine() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = bool> R get_IsOpen() {
		return ((R (*)(HUDConnectionPanel*))(Il2CppBase() + 0x144F548))(this);
	}
	template <typename R = void> R ShowConnectionAlert() {
		return ((R (*)(HUDConnectionPanel*))(Il2CppBase() + 0x144F56C))(this);
	}
	template <typename R = uintptr_t> R ShowConnectionProblemAlert() {
		return ((R (*)(HUDConnectionPanel*))(Il2CppBase() + 0x144F628))(this);
	}

};

