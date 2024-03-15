#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass260
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass26_0"));
	}

	 Action1<GooglePlayGamesBasicApiNearby::INearbyConnectionClient*>*& callback() {
		return *(Action1<GooglePlayGamesBasicApiNearby::INearbyConnectionClient*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R InitializeNearbyb__0(GooglePlayGamesBasicApiNearby::INearbyConnectionClient* client) {
		return ((R (*)(cDisplayClass260*, GooglePlayGamesBasicApiNearby::INearbyConnectionClient*))(Il2CppBase() + 0x10B055C))(this, client);
	}

};

