#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftAndroidEventsListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftAndroidEventsListener"));
	}

	template <typename R = Helpshift::IHelpshiftEventsListener*> R& externalHelpshiftEventsListener() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R onEventOccurred(Il2CppString* eventName, Il2CppString* eventDataJson) {
		return ((R (*)(HelpshiftAndroidEventsListener*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x128D65C))(this, eventName, eventDataJson);
	}
	template <typename R = void> R onUserAuthenticationFailure(int32_t reason) {
		return ((R (*)(HelpshiftAndroidEventsListener*, int32_t))(Il2CppBase() + 0x128D7BC))(this, reason);
	}

};

}
