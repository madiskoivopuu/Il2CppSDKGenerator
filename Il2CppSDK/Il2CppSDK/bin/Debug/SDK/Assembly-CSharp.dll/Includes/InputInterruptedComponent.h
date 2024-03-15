#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputInterruptedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputInterruptedComponent"));
	}

	template <typename R = float> R& AfterDelay() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& AfterApply() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = bool> R& OnlyByOtherAction() {
		return *(R*)((uintptr_t)this + 0x15);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(InputInterruptedComponent*, Il2CppObject*))(Il2CppBase() + 0x14643FC))(this, target);
	}

};

