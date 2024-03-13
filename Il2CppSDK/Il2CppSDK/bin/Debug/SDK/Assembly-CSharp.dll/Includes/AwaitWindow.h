#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class AwaitWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AwaitWindow"));
	}

	template <typename T = uintptr_t> T& _centerImage() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _timerText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& _timeOut() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _lastTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}

	template <typename T = bool> T get__isTimerActive() {
		return ((T (*)(AwaitWindow*))(Il2CppBase() + 0xFB99DC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AwaitWindow*))(Il2CppBase() + 0xFB99EC))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(AwaitWindow*))(Il2CppBase() + 0xFB9A88))(this);
	}
	template <typename T = void> T UpdateTimer(bool force) {
		return ((T (*)(AwaitWindow*, bool))(Il2CppBase() + 0xFB9B50))(this, force);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(AwaitWindow*))(Il2CppBase() + 0xFB9C44))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(AwaitWindow*, float))(Il2CppBase() + 0xFB9CCC))(this, deltaTime);
	}
	template <typename T = void> T SelfClose() {
		return ((T (*)(AwaitWindow*))(Il2CppBase() + 0xFB9E28))(this);
	}
	template <typename T = void> T TimeOutClose() {
		return ((T (*)(AwaitWindow*))(Il2CppBase() + 0xFB9D94))(this);
	}

};

