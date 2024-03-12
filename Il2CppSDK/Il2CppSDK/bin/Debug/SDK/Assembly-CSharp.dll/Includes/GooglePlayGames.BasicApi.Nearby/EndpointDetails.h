#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiNearby {

class EndpointDetails
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiNearby", "EndpointDetails"));
	}

	template <typename T = Il2CppString*> T& mEndpointId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& mName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& mServiceId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_EndpointId() {
		return ((T (*)(EndpointDetails*))(Il2CppBase() + 0x1370AC4))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(EndpointDetails*))(Il2CppBase() + 0x1370ACC))(this);
	}
	template <typename T = Il2CppString*> T get_ServiceId() {
		return ((T (*)(EndpointDetails*))(Il2CppBase() + 0x1370AD4))(this);
	}

};

}
