#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGames {

class PlayGamesClientFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesClientFactory"));
	}


	template <typename R = GooglePlayGamesBasicApi::IPlayGamesClient*> static R GetPlatformPlayGamesClient(GooglePlayGamesBasicApi::PlayGamesClientConfiguration* config) {
		return ((R (*)(void *, GooglePlayGamesBasicApi::PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9D04))(0, config);
	}

};

}
