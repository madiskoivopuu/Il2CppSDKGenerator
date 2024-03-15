#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlatformManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlatformManager"));
	}

	template <typename R = uintptr_t> R& OnPlatformReadyToInitializePlugins() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R add_OnPlatformReadyToInitializePlugins(uintptr_t value) {
		return ((R (*)(PlatformManager*, uintptr_t))(Il2CppBase() + 0x16F8D60))(this, value);
	}
	template <typename R = void> R remove_OnPlatformReadyToInitializePlugins(uintptr_t value) {
		return ((R (*)(PlatformManager*, uintptr_t))(Il2CppBase() + 0x16F8E00))(this, value);
	}
	template <typename R = void> R Init() {
		return ((R (*)(PlatformManager*))(Il2CppBase() + 0x16F8EA0))(this);
	}
	template <typename R = void> R ShowIDFA() {
		return ((R (*)(PlatformManager*))(Il2CppBase() + 0x16F8EB4))(this);
	}

};

