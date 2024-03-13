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

	template <typename T = void> T FetchAllEvents(DataSource* source, Action2ResponseStatus*, Il2CppList<IEvent*>*>* callback) {
		return ((T (*)(AndroidEventsClient*, DataSource*, Action2ResponseStatus*, Il2CppList<IEvent*>*>*))(Il2CppBase() + 0x12B2034))(this, source, callback);
	}
	template <typename T = void> T FetchEvent(DataSource* source, Il2CppString* eventId, Action2ResponseStatus*, IEvent*>* callback) {
		return ((T (*)(AndroidEventsClient*, DataSource*, Il2CppString*, Action2ResponseStatus*, IEvent*>*))(Il2CppBase() + 0x12B238C))(this, source, eventId, callback);
	}
	template <typename T = void> T IncrementEvent(Il2CppString* eventId, uint32_t stepsToIncrement) {
		return ((T (*)(AndroidEventsClient*, Il2CppString*, uint32_t))(Il2CppBase() + 0x12B2770))(this, eventId, stepsToIncrement);
	}
	template <typename T = Action2uintptr_t, uintptr_t>*> static T ToOnGameThread(Action2uintptr_t, uintptr_t>* toConvert) {
		return ((T (*)(void *, Action2uintptr_t, uintptr_t>*))(Il2CppBase() + 0x0))(0, toConvert);
	}
	template <typename T = Event*> static T CreateEvent(uintptr_t eventJava) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12B28BC))(0, eventJava);
	}

};

}
