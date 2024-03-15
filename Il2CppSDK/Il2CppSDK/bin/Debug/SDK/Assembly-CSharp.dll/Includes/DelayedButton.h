#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayedButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayedButton"));
	}

	template <typename R = float> R& _delay() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = float> R& _timer() {
		return *(R*)((uintptr_t)this + 0x104);
	}
	template <typename R = uintptr_t> R& _progressImage() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& _countLabel() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = bool> R& _interactableOnFinish() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	 Func1<bool>*& _onStart() {
		return *(Func1<bool>**)((uintptr_t)this + 0x120);
	}
	 Action1<float>*& _onProgress() {
		return *(Action1<float>**)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& _onFinish() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x138);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(DelayedButton*))(Il2CppBase() + 0xEB82F8))(this);
	}
	template <typename R = void> R Bind(IUIWindow* window, float delay, uintptr_t progressImage, uintptr_t countLabel, Func1<bool>* onStart, Action1<float>* onProgress, uintptr_t onFinish, bool interactableOnFinish) {
		return ((R (*)(DelayedButton*, IUIWindow*, float, uintptr_t, uintptr_t, Func1<bool>*, Action1<float>*, uintptr_t, bool))(Il2CppBase() + 0xEB8398))(this, window, delay, progressImage, countLabel, onStart, onProgress, onFinish, interactableOnFinish);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(DelayedButton*))(Il2CppBase() + 0xEB85D8))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(DelayedButton*, float))(Il2CppBase() + 0xEB8730))(this, deltaTime);
	}
	template <typename R = void> R Awakeb__9_0() {
		return ((R (*)(DelayedButton*))(Il2CppBase() + 0xEB8968))(this);
	}

};

