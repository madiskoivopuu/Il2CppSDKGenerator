#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiEvents {

class IEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiEvents", "IEvent"));
	}


	template <typename R = Il2CppString*> R get_Id() {
		return ((R (*)(IEvent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(IEvent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R get_Description() {
		return ((R (*)(IEvent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R get_ImageUrl() {
		return ((R (*)(IEvent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uint64_t> R get_CurrentCount() {
		return ((R (*)(IEvent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = GooglePlayGamesBasicApiEvents::EventVisibility*> R get_Visibility() {
		return ((R (*)(IEvent*))(Il2CppBase() + 0x0))(this);
	}

};

}
