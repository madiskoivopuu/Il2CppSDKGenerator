#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HelpshiftExample {

class HSEventsListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HelpshiftExample", "HSEventsListener"));
	}


	template <typename T = void> T AuthenticationFailedForUser(uintptr_t reason) {
		return ((T (*)(HSEventsListener*, uintptr_t))(Il2CppBase() + 0x1448284))(this, reason);
	}
	template <typename T = void> T HandleHelpshiftEvent(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, uintptr_t>* eventData) {
		return ((T (*)(HSEventsListener*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x144836C))(this, eventName, eventData);
	}

};

}
