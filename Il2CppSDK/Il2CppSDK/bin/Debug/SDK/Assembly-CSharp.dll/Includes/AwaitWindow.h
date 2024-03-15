#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class AwaitWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AwaitWindow"));
	}

	template <typename R = uintptr_t> R& _centerImage() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _timerText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = float> R& _timeOut() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> R& _lastTime() {
		return *(R*)((uintptr_t)this + 0x94);
	}

	template <typename R = bool> R get__isTimerActive() {
		return ((R (*)(AwaitWindow*))(Il2CppBase() + 0xFB99DC))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(AwaitWindow*))(Il2CppBase() + 0xFB99EC))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(AwaitWindow*))(Il2CppBase() + 0xFB9A88))(this);
	}
	template <typename R = void> R UpdateTimer(bool force) {
		return ((R (*)(AwaitWindow*, bool))(Il2CppBase() + 0xFB9B50))(this, force);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(AwaitWindow*))(Il2CppBase() + 0xFB9C44))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(AwaitWindow*, float))(Il2CppBase() + 0xFB9CCC))(this, deltaTime);
	}
	template <typename R = void> R SelfClose() {
		return ((R (*)(AwaitWindow*))(Il2CppBase() + 0xFB9E28))(this);
	}
	template <typename R = void> R TimeOutClose() {
		return ((R (*)(AwaitWindow*))(Il2CppBase() + 0xFB9D94))(this);
	}

};

