#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiNearby {

class EndpointDetails
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiNearby", "EndpointDetails"));
	}

	template <typename R = Il2CppString*> R& mEndpointId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& mName() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& mServiceId() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = Il2CppString*> R get_EndpointId() {
		return ((R (*)(EndpointDetails*))(Il2CppBase() + 0x1370AC4))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(EndpointDetails*))(Il2CppBase() + 0x1370ACC))(this);
	}
	template <typename R = Il2CppString*> R get_ServiceId() {
		return ((R (*)(EndpointDetails*))(Il2CppBase() + 0x1370AD4))(this);
	}

};

}
