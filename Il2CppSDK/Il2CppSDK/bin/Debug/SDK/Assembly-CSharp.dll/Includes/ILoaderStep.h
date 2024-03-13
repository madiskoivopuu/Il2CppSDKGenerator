#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILoaderStep"));
	}


	template <typename T = uintptr_t> T Start() {
		return ((T (*)(ILoaderStep*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(ILoaderStep*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsStepCompleted() {
		return ((T (*)(ILoaderStep*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_StepName() {
		return ((T (*)(ILoaderStep*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_AnalyticsStepName() {
		return ((T (*)(ILoaderStep*))(Il2CppBase() + 0x0))(this);
	}

};

