#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidEventsClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidEventsClient"));
	}

	template <typename R = uintptr_t> R& mEventsClient() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R FetchAllEvents(GooglePlayGamesBasicApi::DataSource* source, Action2GooglePlayGamesBasicApi::ResponseStatus*, Il2CppList<GooglePlayGamesBasicApiEvents::IEvent*>*>* callback) {
		return ((R (*)(AndroidEventsClient*, GooglePlayGamesBasicApi::DataSource*, Action2GooglePlayGamesBasicApi::ResponseStatus*, Il2CppList<GooglePlayGamesBasicApiEvents::IEvent*>*>*))(Il2CppBase() + 0x12B2034))(this, source, callback);
	}
	template <typename R = void> R FetchEvent(GooglePlayGamesBasicApi::DataSource* source, Il2CppString* eventId, Action2GooglePlayGamesBasicApi::ResponseStatus*, GooglePlayGamesBasicApiEvents::IEvent*>* callback) {
		return ((R (*)(AndroidEventsClient*, GooglePlayGamesBasicApi::DataSource*, Il2CppString*, Action2GooglePlayGamesBasicApi::ResponseStatus*, GooglePlayGamesBasicApiEvents::IEvent*>*))(Il2CppBase() + 0x12B238C))(this, source, eventId, callback);
	}
	template <typename R = void> R IncrementEvent(Il2CppString* eventId, uint32_t stepsToIncrement) {
		return ((R (*)(AndroidEventsClient*, Il2CppString*, uint32_t))(Il2CppBase() + 0x12B2770))(this, eventId, stepsToIncrement);
	}
	 static Action2uintptr_t, uintptr_t>* ToOnGameThread(Action2uintptr_t, uintptr_t>* toConvert) {
		return ((Action2uintptr_t, uintptr_t>* (*)(void *, Action2uintptr_t, uintptr_t>*))(Il2CppBase() + 0x0))(0, toConvert);
	}
	template <typename R = GooglePlayGamesBasicApiEvents::Event*> static R CreateEvent(uintptr_t eventJava) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x12B28BC))(0, eventJava);
	}

};

}
