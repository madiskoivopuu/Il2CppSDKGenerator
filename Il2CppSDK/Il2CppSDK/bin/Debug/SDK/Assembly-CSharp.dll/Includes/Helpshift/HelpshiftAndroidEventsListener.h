#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftAndroidEventsListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftAndroidEventsListener"));
	}

	template <typename T = uintptr_t> T& externalHelpshiftEventsListener() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T onEventOccurred(Il2CppString* eventName, Il2CppString* eventDataJson) {
		return ((T (*)(HelpshiftAndroidEventsListener*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x128D65C))(this, eventName, eventDataJson);
	}
	template <typename T = void> T onUserAuthenticationFailure(int32_t reason) {
		return ((T (*)(HelpshiftAndroidEventsListener*, int32_t))(Il2CppBase() + 0x128D7BC))(this, reason);
	}

};

}
