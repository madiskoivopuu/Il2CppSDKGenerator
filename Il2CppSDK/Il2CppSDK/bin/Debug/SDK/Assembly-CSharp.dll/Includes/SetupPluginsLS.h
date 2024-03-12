#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep" 

class SetupPluginsLS: BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetupPluginsLS"));
	}

	template <typename T = uintptr_t> T& _platformManager() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = uintptr_t> T Start() {
		return ((T (*)(SetupPluginsLS*))(Il2CppBase() + 0x162D85C))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(SetupPluginsLS*))(Il2CppBase() + 0x162D8D4))(this);
	}
	template <typename T = void> T SetupPlugins() {
		return ((T (*)(SetupPluginsLS*))(Il2CppBase() + 0x162D968))(this);
	}

};

}
