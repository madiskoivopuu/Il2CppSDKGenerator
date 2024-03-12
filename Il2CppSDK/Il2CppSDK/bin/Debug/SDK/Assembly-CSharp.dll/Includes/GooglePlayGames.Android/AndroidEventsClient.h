#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidEventsClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidEventsClient"));
	}

	template <typename T = uintptr_t> T& mEventsClient() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T FetchAllEvents(uintptr_t source, void* callback) {
		return ((T (*)(AndroidEventsClient*, uintptr_t, void*))(Il2CppBase() + 0x12B2034))(this, source, callback);
	}
	template <typename T = void> T FetchEvent(uintptr_t source, Il2CppString* eventId, void* callback) {
		return ((T (*)(AndroidEventsClient*, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x12B238C))(this, source, eventId, callback);
	}
	template <typename T = void> T IncrementEvent(Il2CppString* eventId, uint32_t stepsToIncrement) {
		return ((T (*)(AndroidEventsClient*, Il2CppString*, uint32_t))(Il2CppBase() + 0x12B2770))(this, eventId, stepsToIncrement);
	}
	template <typename T = void*> static T ToOnGameThread(void* toConvert) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, toConvert);
	}
	template <typename T = uintptr_t> static T CreateEvent(uintptr_t eventJava) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12B28BC))(0, eventJava);
	}

};

}
