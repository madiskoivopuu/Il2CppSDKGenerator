#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiSavedGame {

class ISavedGameMetadata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiSavedGame", "ISavedGameMetadata"));
	}


	template <typename R = bool> R get_IsOpen() {
		return ((R (*)(ISavedGameMetadata*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R get_Filename() {
		return ((R (*)(ISavedGameMetadata*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R get_Description() {
		return ((R (*)(ISavedGameMetadata*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R get_CoverImageURL() {
		return ((R (*)(ISavedGameMetadata*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_TotalTimePlayed() {
		return ((R (*)(ISavedGameMetadata*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_LastModifiedTimestamp() {
		return ((R (*)(ISavedGameMetadata*))(Il2CppBase() + 0x0))(this);
	}

};

}
