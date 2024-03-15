#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceInitializationAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceInitializationAndroid"));
	}

	template <typename R = uintptr_t> R& OnSdkInitializationCompletedEvent() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R add_OnSdkInitializationCompletedEvent(uintptr_t value) {
		return ((R (*)(IronSourceInitializationAndroid*, uintptr_t))(Il2CppBase() + 0x10D6744))(this, value);
	}
	template <typename R = void> R remove_OnSdkInitializationCompletedEvent(uintptr_t value) {
		return ((R (*)(IronSourceInitializationAndroid*, uintptr_t))(Il2CppBase() + 0x10D67E4))(this, value);
	}
	template <typename R = void> R onSdkInitializationCompleted() {
		return ((R (*)(IronSourceInitializationAndroid*))(Il2CppBase() + 0x10D6D84))(this);
	}

};

