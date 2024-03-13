#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../GooglePlayGames/PlayGamesUserProfile.h" 
namespace GooglePlayGamesBasicApi {

class PlayerProfile : public PlayGamesUserProfile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "PlayerProfile"));
	}



};

}
