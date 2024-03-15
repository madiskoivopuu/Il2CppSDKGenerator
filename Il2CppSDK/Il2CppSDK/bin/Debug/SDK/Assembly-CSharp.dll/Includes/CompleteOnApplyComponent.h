#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CompleteOnApplyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CompleteOnApplyComponent"));
	}

	template <typename R = bool> R& StopAction() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(CompleteOnApplyComponent*, Il2CppObject*))(Il2CppBase() + 0xE2D1A8))(this, target);
	}

};

