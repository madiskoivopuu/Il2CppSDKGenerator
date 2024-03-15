#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiEvents {

class IEventsClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiEvents", "IEventsClient"));
	}


	template <typename R = void> R FetchAllEvents(GooglePlayGamesBasicApi::DataSource* source, Action2GooglePlayGamesBasicApi::ResponseStatus*, Il2CppList<GooglePlayGamesBasicApiEvents::IEvent*>*>* callback) {
		return ((R (*)(IEventsClient*, GooglePlayGamesBasicApi::DataSource*, Action2GooglePlayGamesBasicApi::ResponseStatus*, Il2CppList<GooglePlayGamesBasicApiEvents::IEvent*>*>*))(Il2CppBase() + 0x0))(this, source, callback);
	}
	template <typename R = void> R FetchEvent(GooglePlayGamesBasicApi::DataSource* source, Il2CppString* eventId, Action2GooglePlayGamesBasicApi::ResponseStatus*, GooglePlayGamesBasicApiEvents::IEvent*>* callback) {
		return ((R (*)(IEventsClient*, GooglePlayGamesBasicApi::DataSource*, Il2CppString*, Action2GooglePlayGamesBasicApi::ResponseStatus*, GooglePlayGamesBasicApiEvents::IEvent*>*))(Il2CppBase() + 0x0))(this, source, eventId, callback);
	}
	template <typename R = void> R IncrementEvent(Il2CppString* eventId, uint32_t stepsToIncrement) {
		return ((R (*)(IEventsClient*, Il2CppString*, uint32_t))(Il2CppBase() + 0x0))(this, eventId, stepsToIncrement);
	}

};

}
