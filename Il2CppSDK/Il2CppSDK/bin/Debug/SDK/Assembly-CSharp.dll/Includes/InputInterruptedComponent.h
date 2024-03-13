#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputInterruptedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputInterruptedComponent"));
	}

	template <typename T = float> T& AfterDelay() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& AfterApply() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& OnlyByOtherAction() {
		return *(T*)((uintptr_t)this + 0x15);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(InputInterruptedComponent*, Il2CppObject*))(Il2CppBase() + 0x14643FC))(this, target);
	}

};

