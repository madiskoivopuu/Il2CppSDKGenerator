#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityInitialization
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityInitialization"));
	}


	template <typename T = void> T add_OnSdkInitializationCompletedEvent(uintptr_t value) {
		return ((T (*)(IUnityInitialization*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnSdkInitializationCompletedEvent(uintptr_t value) {
		return ((T (*)(IUnityInitialization*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

