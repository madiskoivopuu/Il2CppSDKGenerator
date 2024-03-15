#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AsyncAnimations {

class AnimatorAwaitable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AsyncAnimations", "AnimatorAwaitable"));
	}

	template <typename R = Il2CppString*> R& animationName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& animatorInstance() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& skipButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& awaiterCallback() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Action1bool>*& onCompleteAction() {
		return *(Action1bool>**)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& isSkiped() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& IsRunning() {
		return *(R*)((uintptr_t)this + 0x41);
	}
	 Action1Il2CppString*>*& OnAnimationTrigger() {
		return *(Action1Il2CppString*>**)((uintptr_t)this + 0x48);
	}

	template <typename R = bool> R get_IsRunning() {
		return ((R (*)(AnimatorAwaitable*))(Il2CppBase() + 0x188BD1C))(this);
	}
	template <typename R = void> R set_IsRunning(bool value) {
		return ((R (*)(AnimatorAwaitable*, bool))(Il2CppBase() + 0x188BD24))(this, value);
	}
	template <typename R = void> R add_OnAnimationTrigger(Action1Il2CppString*>* value) {
		return ((R (*)(AnimatorAwaitable*, Action1Il2CppString*>*))(Il2CppBase() + 0x188BD30))(this, value);
	}
	template <typename R = void> R remove_OnAnimationTrigger(Action1Il2CppString*>* value) {
		return ((R (*)(AnimatorAwaitable*, Action1Il2CppString*>*))(Il2CppBase() + 0x188BDD0))(this, value);
	}
	template <typename R = uintptr_t> R get_AnimatorInstance() {
		return ((R (*)(AnimatorAwaitable*))(Il2CppBase() + 0x188BE70))(this);
	}
	 TaskAwaiter1IAwaitable1Il2CppString*>*>* GetAwaiter() {
		return ((TaskAwaiter1IAwaitable1Il2CppString*>*>* (*)(AnimatorAwaitable*))(Il2CppBase() + 0x188BF24))(this);
	}
	template <typename R = void> R OnAnimationTimeEndsHandler(Il2CppString* animationName) {
		return ((R (*)(AnimatorAwaitable*, Il2CppString*))(Il2CppBase() + 0x188C0D0))(this, animationName);
	}
	template <typename R = void> R OnButtonClick() {
		return ((R (*)(AnimatorAwaitable*))(Il2CppBase() + 0x188C3C0))(this);
	}
	 IAwaitable1Il2CppString*>* RunBool(Il2CppString* boolName, bool value, uintptr_t onShow, Action1bool>* onComplete) {
		return ((IAwaitable1Il2CppString*>* (*)(AnimatorAwaitable*, Il2CppString*, bool, uintptr_t, Action1bool>*))(Il2CppBase() + 0x188C3F0))(this, boolName, value, onShow, onComplete);
	}
	 IAwaitable1Il2CppString*>* RunBool_1(Il2CppString* boolName, bool value, uintptr_t skipButton, uintptr_t onShow, Action1bool>* onComplete) {
		return ((IAwaitable1Il2CppString*>* (*)(AnimatorAwaitable*, Il2CppString*, bool, uintptr_t, uintptr_t, Action1bool>*))(Il2CppBase() + 0x188C480))(this, boolName, value, skipButton, onShow, onComplete);
	}
	 IAwaitable1Il2CppString*>* RunTrigger(Il2CppString* triggerName, uintptr_t onShow, Action1bool>* onComplete) {
		return ((IAwaitable1Il2CppString*>* (*)(AnimatorAwaitable*, Il2CppString*, uintptr_t, Action1bool>*))(Il2CppBase() + 0x188C56C))(this, triggerName, onShow, onComplete);
	}
	 IAwaitable1Il2CppString*>* RunTrigger_1(Il2CppString* boolName, uintptr_t skipButton, uintptr_t onShow, Action1bool>* onComplete) {
		return ((IAwaitable1Il2CppString*>* (*)(AnimatorAwaitable*, Il2CppString*, uintptr_t, uintptr_t, Action1bool>*))(Il2CppBase() + 0x188C5EC))(this, boolName, skipButton, onShow, onComplete);
	}
	template <typename R = void> R Stop(bool skiped) {
		return ((R (*)(AnimatorAwaitable*, bool))(Il2CppBase() + 0x188C328))(this, skiped);
	}
	template <typename R = void> R ResetAnimationTrigger() {
		return ((R (*)(AnimatorAwaitable*))(Il2CppBase() + 0x188C6C8))(this);
	}
	template <typename R = void> R Reset() {
		return ((R (*)(AnimatorAwaitable*))(Il2CppBase() + 0x188C6D4))(this);
	}

};

}
