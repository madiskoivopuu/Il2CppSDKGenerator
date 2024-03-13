#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class SetupSettingsLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetupSettingsLS"));
	}

	template <typename T = Action1int32_t>*> T& OnQualityChanged() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = uintptr_t> T Start() {
		return ((T (*)(SetupSettingsLS*))(Il2CppBase() + 0x162DC80))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(SetupSettingsLS*))(Il2CppBase() + 0x162DCF8))(this);
	}
	template <typename T = void> T SetupSettings() {
		return ((T (*)(SetupSettingsLS*))(Il2CppBase() + 0x162DD04))(this);
	}
	template <typename T = void> T CheckAppForCrash() {
		return ((T (*)(SetupSettingsLS*))(Il2CppBase() + 0x162DDFC))(this);
	}
	template <typename T = void> T ShowResetNotification() {
		return ((T (*)(SetupSettingsLS*))(Il2CppBase() + 0x162EDE0))(this);
	}
	template <typename T = void> T NormalGameStart() {
		return ((T (*)(SetupSettingsLS*))(Il2CppBase() + 0x162EF38))(this);
	}
	template <typename T = void> T ShowResetNotificationb__6_0() {
		return ((T (*)(SetupSettingsLS*))(Il2CppBase() + 0x162F008))(this);
	}

};

