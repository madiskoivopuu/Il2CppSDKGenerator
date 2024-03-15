#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class SetupPluginsLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetupPluginsLS"));
	}

	template <typename R = PlatformManager*> R& _platformManager() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = uintptr_t> R Start() {
		return ((R (*)(SetupPluginsLS*))(Il2CppBase() + 0x162D85C))(this);
	}
	template <typename R = void> R Disable() {
		return ((R (*)(SetupPluginsLS*))(Il2CppBase() + 0x162D8D4))(this);
	}
	template <typename R = void> R SetupPlugins() {
		return ((R (*)(SetupPluginsLS*))(Il2CppBase() + 0x162D968))(this);
	}

};

