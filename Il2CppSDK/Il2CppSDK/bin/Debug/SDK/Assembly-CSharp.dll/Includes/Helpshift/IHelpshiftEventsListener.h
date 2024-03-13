#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class IHelpshiftEventsListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "IHelpshiftEventsListener"));
	}


	template <typename T = void> T HandleHelpshiftEvent(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, Il2CppObject*>* eventData) {
		return ((T (*)(IHelpshiftEventsListener*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x0))(this, eventName, eventData);
	}
	template <typename T = void> T AuthenticationFailedForUser(HelpshiftAuthenticationFailureReason* reason) {
		return ((T (*)(IHelpshiftEventsListener*, HelpshiftAuthenticationFailureReason*))(Il2CppBase() + 0x0))(this, reason);
	}

};

}
