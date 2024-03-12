#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AsyncAnimations {

class AnimatorAwaitable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AsyncAnimations", "AnimatorAwaitable"));
	}

	template <typename T = Il2CppString*> T& animationName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& animatorInstance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& skipButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& awaiterCallback() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& onCompleteAction() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& isSkiped() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& IsRunning() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = void*> T& OnAnimationTrigger() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = bool> T get_IsRunning() {
		return ((T (*)(AnimatorAwaitable*))(Il2CppBase() + 0x188BD1C))(this);
	}
	template <typename T = void> T set_IsRunning(bool value) {
		return ((T (*)(AnimatorAwaitable*, bool))(Il2CppBase() + 0x188BD24))(this, value);
	}
	template <typename T = void> T add_OnAnimationTrigger(void* value) {
		return ((T (*)(AnimatorAwaitable*, void*))(Il2CppBase() + 0x188BD30))(this, value);
	}
	template <typename T = void> T remove_OnAnimationTrigger(void* value) {
		return ((T (*)(AnimatorAwaitable*, void*))(Il2CppBase() + 0x188BDD0))(this, value);
	}
	template <typename T = uintptr_t> T get_AnimatorInstance() {
		return ((T (*)(AnimatorAwaitable*))(Il2CppBase() + 0x188BE70))(this);
	}
	template <typename T = void*> T GetAwaiter() {
		return ((T (*)(AnimatorAwaitable*))(Il2CppBase() + 0x188BF24))(this);
	}
	template <typename T = void> T OnAnimationTimeEndsHandler(Il2CppString* animationName) {
		return ((T (*)(AnimatorAwaitable*, Il2CppString*))(Il2CppBase() + 0x188C0D0))(this, animationName);
	}
	template <typename T = void> T OnButtonClick() {
		return ((T (*)(AnimatorAwaitable*))(Il2CppBase() + 0x188C3C0))(this);
	}
	template <typename T = void*> T RunBool(Il2CppString* boolName, bool value, uintptr_t onShow, void* onComplete) {
		return ((T (*)(AnimatorAwaitable*, Il2CppString*, bool, uintptr_t, void*))(Il2CppBase() + 0x188C3F0))(this, boolName, value, onShow, onComplete);
	}
	template <typename T = void*> T RunBool_1(Il2CppString* boolName, bool value, uintptr_t skipButton, uintptr_t onShow, void* onComplete) {
		return ((T (*)(AnimatorAwaitable*, Il2CppString*, bool, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x188C480))(this, boolName, value, skipButton, onShow, onComplete);
	}
	template <typename T = void*> T RunTrigger(Il2CppString* triggerName, uintptr_t onShow, void* onComplete) {
		return ((T (*)(AnimatorAwaitable*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x188C56C))(this, triggerName, onShow, onComplete);
	}
	template <typename T = void*> T RunTrigger_1(Il2CppString* boolName, uintptr_t skipButton, uintptr_t onShow, void* onComplete) {
		return ((T (*)(AnimatorAwaitable*, Il2CppString*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x188C5EC))(this, boolName, skipButton, onShow, onComplete);
	}
	template <typename T = void> T Stop(bool skiped) {
		return ((T (*)(AnimatorAwaitable*, bool))(Il2CppBase() + 0x188C328))(this, skiped);
	}
	template <typename T = void> T ResetAnimationTrigger() {
		return ((T (*)(AnimatorAwaitable*))(Il2CppBase() + 0x188C6C8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimatorAwaitable*))(Il2CppBase() + 0x188C6D4))(this);
	}

};

}
