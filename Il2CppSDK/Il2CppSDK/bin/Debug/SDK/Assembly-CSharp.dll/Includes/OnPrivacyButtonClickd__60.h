#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnPrivacyButtonClickd60
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnPrivacyButtonClick>d__60"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(OnPrivacyButtonClickd60*))(Il2CppBase() + 0x10CB31C))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(OnPrivacyButtonClickd60*, uintptr_t))(Il2CppBase() + 0x10CB5DC))(this, stateMachine);
	}

};

}
