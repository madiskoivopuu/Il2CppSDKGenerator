#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnPrivacyButtonClickd60
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnPrivacyButtonClick>d__60"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& t__builder() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = SettingsWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 TaskAwaiter1<ValueTuple2<bool, uintptr_t>*>*& u__1() {
		return *(TaskAwaiter1<ValueTuple2<bool, uintptr_t>*>**)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R MoveNext() {
		return ((R (*)(OnPrivacyButtonClickd60*))(Il2CppBase() + 0x10CB31C))(this);
	}
	template <typename R = void> R SetStateMachine(uintptr_t stateMachine) {
		return ((R (*)(OnPrivacyButtonClickd60*, uintptr_t))(Il2CppBase() + 0x10CB5DC))(this, stateMachine);
	}

};

