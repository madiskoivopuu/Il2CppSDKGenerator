#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceInitializationAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceInitializationAndroid"));
	}

	template <typename T = uintptr_t> T& OnSdkInitializationCompletedEvent() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T add_OnSdkInitializationCompletedEvent(uintptr_t value) {
		return ((T (*)(IronSourceInitializationAndroid*, uintptr_t))(Il2CppBase() + 0x10D6744))(this, value);
	}
	template <typename T = void> T remove_OnSdkInitializationCompletedEvent(uintptr_t value) {
		return ((T (*)(IronSourceInitializationAndroid*, uintptr_t))(Il2CppBase() + 0x10D67E4))(this, value);
	}
	template <typename T = void> T onSdkInitializationCompleted() {
		return ((T (*)(IronSourceInitializationAndroid*))(Il2CppBase() + 0x10D6D84))(this);
	}

};

}
