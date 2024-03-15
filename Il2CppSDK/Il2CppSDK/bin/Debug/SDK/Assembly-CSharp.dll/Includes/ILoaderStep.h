#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILoaderStep"));
	}


	template <typename R = uintptr_t> R Start() {
		return ((R (*)(ILoaderStep*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Disable() {
		return ((R (*)(ILoaderStep*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsStepCompleted() {
		return ((R (*)(ILoaderStep*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R get_StepName() {
		return ((R (*)(ILoaderStep*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R get_AnalyticsStepName() {
		return ((R (*)(ILoaderStep*))(Il2CppBase() + 0x0))(this);
	}

};

