#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlatformManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlatformManager"));
	}

	template <typename T = uintptr_t> T& OnPlatformReadyToInitializePlugins() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T add_OnPlatformReadyToInitializePlugins(uintptr_t value) {
		return ((T (*)(PlatformManager*, uintptr_t))(Il2CppBase() + 0x16F8D60))(this, value);
	}
	template <typename T = void> T remove_OnPlatformReadyToInitializePlugins(uintptr_t value) {
		return ((T (*)(PlatformManager*, uintptr_t))(Il2CppBase() + 0x16F8E00))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PlatformManager*))(Il2CppBase() + 0x16F8EA0))(this);
	}
	template <typename T = void> T ShowIDFA() {
		return ((T (*)(PlatformManager*))(Il2CppBase() + 0x16F8EB4))(this);
	}

};

