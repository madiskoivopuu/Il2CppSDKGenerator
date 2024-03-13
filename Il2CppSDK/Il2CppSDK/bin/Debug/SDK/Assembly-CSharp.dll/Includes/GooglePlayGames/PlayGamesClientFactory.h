#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGames {

class PlayGamesClientFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesClientFactory"));
	}


	template <typename T = IPlayGamesClient*> static T GetPlatformPlayGamesClient(PlayGamesClientConfiguration* config) {
		return ((T (*)(void *, PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9D04))(0, config);
	}

};

}
