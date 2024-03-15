#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class SetupSettingsLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetupSettingsLS"));
	}

	 Action1int32_t>*& OnQualityChanged() {
		return *(Action1int32_t>**)((uintptr_t)this + 0xA0);
	}

	template <typename R = uintptr_t> R Start() {
		return ((R (*)(SetupSettingsLS*))(Il2CppBase() + 0x162DC80))(this);
	}
	template <typename R = void> R Disable() {
		return ((R (*)(SetupSettingsLS*))(Il2CppBase() + 0x162DCF8))(this);
	}
	template <typename R = void> R SetupSettings() {
		return ((R (*)(SetupSettingsLS*))(Il2CppBase() + 0x162DD04))(this);
	}
	template <typename R = void> R CheckAppForCrash() {
		return ((R (*)(SetupSettingsLS*))(Il2CppBase() + 0x162DDFC))(this);
	}
	template <typename R = void> R ShowResetNotification() {
		return ((R (*)(SetupSettingsLS*))(Il2CppBase() + 0x162EDE0))(this);
	}
	template <typename R = void> R NormalGameStart() {
		return ((R (*)(SetupSettingsLS*))(Il2CppBase() + 0x162EF38))(this);
	}
	template <typename R = void> R ShowResetNotificationb__6_0() {
		return ((R (*)(SetupSettingsLS*))(Il2CppBase() + 0x162F008))(this);
	}

};

