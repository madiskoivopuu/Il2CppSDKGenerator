#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HelpshiftExample {

class HSEventsListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HelpshiftExample", "HSEventsListener"));
	}


	template <typename R = void> R AuthenticationFailedForUser(Helpshift::HelpshiftAuthenticationFailureReason* reason) {
		return ((R (*)(HSEventsListener*, Helpshift::HelpshiftAuthenticationFailureReason*))(Il2CppBase() + 0x1448284))(this, reason);
	}
	template <typename R = void> R HandleHelpshiftEvent(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, Il2CppObject*>* eventData) {
		return ((R (*)(HSEventsListener*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x144836C))(this, eventName, eventData);
	}

};

}