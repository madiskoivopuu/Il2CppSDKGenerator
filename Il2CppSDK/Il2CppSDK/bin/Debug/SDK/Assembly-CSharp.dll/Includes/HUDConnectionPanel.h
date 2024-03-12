#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDConnectionPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDConnectionPanel"));
	}

	template <typename T = uintptr_t> T& _anim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _connectionProblemCoroutine() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T get_IsOpen() {
		return ((T (*)(HUDConnectionPanel*))(Il2CppBase() + 0x144F548))(this);
	}
	template <typename T = void> T ShowConnectionAlert() {
		return ((T (*)(HUDConnectionPanel*))(Il2CppBase() + 0x144F56C))(this);
	}
	template <typename T = uintptr_t> T ShowConnectionProblemAlert() {
		return ((T (*)(HUDConnectionPanel*))(Il2CppBase() + 0x144F628))(this);
	}

};

}
