#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiEvents {

class IEventsClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiEvents", "IEventsClient"));
	}


	template <typename T = void> T FetchAllEvents(DataSource* source, Action2ResponseStatus*, Il2CppList<IEvent*>*>* callback) {
		return ((T (*)(IEventsClient*, DataSource*, Action2ResponseStatus*, Il2CppList<IEvent*>*>*))(Il2CppBase() + 0x0))(this, source, callback);
	}
	template <typename T = void> T FetchEvent(DataSource* source, Il2CppString* eventId, Action2ResponseStatus*, IEvent*>* callback) {
		return ((T (*)(IEventsClient*, DataSource*, Il2CppString*, Action2ResponseStatus*, IEvent*>*))(Il2CppBase() + 0x0))(this, source, eventId, callback);
	}
	template <typename T = void> T IncrementEvent(Il2CppString* eventId, uint32_t stepsToIncrement) {
		return ((T (*)(IEventsClient*, Il2CppString*, uint32_t))(Il2CppBase() + 0x0))(this, eventId, stepsToIncrement);
	}

};

}
