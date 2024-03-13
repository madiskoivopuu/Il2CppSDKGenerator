#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayedButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayedButton"));
	}

	template <typename T = float> T& _delay() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& _timer() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& _progressImage() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _countLabel() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& _interactableOnFinish() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Func1bool>*> T& _onStart() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Action1float>*> T& _onProgress() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& _onFinish() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = IUIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x138);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DelayedButton*))(Il2CppBase() + 0xEB82F8))(this);
	}
	template <typename T = void> T Bind(IUIWindow* window, float delay, uintptr_t progressImage, uintptr_t countLabel, Func1bool>* onStart, Action1float>* onProgress, uintptr_t onFinish, bool interactableOnFinish) {
		return ((T (*)(DelayedButton*, IUIWindow*, float, uintptr_t, uintptr_t, Func1bool>*, Action1float>*, uintptr_t, bool))(Il2CppBase() + 0xEB8398))(this, window, delay, progressImage, countLabel, onStart, onProgress, onFinish, interactableOnFinish);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(DelayedButton*))(Il2CppBase() + 0xEB85D8))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(DelayedButton*, float))(Il2CppBase() + 0xEB8730))(this, deltaTime);
	}
	template <typename T = void> T Awakeb__9_0() {
		return ((T (*)(DelayedButton*))(Il2CppBase() + 0xEB8968))(this);
	}

};

