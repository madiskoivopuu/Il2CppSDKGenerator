#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiSavedGame {

class IConflictResolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiSavedGame", "IConflictResolver"));
	}


	template <typename R = void> R ChooseMetadata(GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata* chosenMetadata) {
		return ((R (*)(IConflictResolver*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*))(Il2CppBase() + 0x0))(this, chosenMetadata);
	}
	template <typename R = void> R ResolveConflict(GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata* chosenMetadata, GooglePlayGamesBasicApiSavedGame::SavedGameMetadataUpdate metadataUpdate, Il2CppArray<uint8_t>* updatedData) {
		return ((R (*)(IConflictResolver*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*, GooglePlayGamesBasicApiSavedGame::SavedGameMetadataUpdate, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x0))(this, chosenMetadata, metadataUpdate, updatedData);
	}

};

}
