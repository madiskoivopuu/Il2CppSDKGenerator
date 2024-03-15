#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiSavedGame {

class ISavedGameClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiSavedGame", "ISavedGameClient"));
	}


	template <typename R = void> R OpenWithAutomaticConflictResolution(Il2CppString* filename, GooglePlayGamesBasicApi::DataSource* source, GooglePlayGamesBasicApiSavedGame::ConflictResolutionStrategy* resolutionStrategy, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>* callback) {
		return ((R (*)(ISavedGameClient*, Il2CppString*, GooglePlayGamesBasicApi::DataSource*, GooglePlayGamesBasicApiSavedGame::ConflictResolutionStrategy*, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>*))(Il2CppBase() + 0x0))(this, filename, source, resolutionStrategy, callback);
	}
	template <typename R = void> R OpenWithManualConflictResolution(Il2CppString* filename, GooglePlayGamesBasicApi::DataSource* source, bool prefetchDataOnConflict, GooglePlayGamesBasicApiSavedGame::ConflictCallback* conflictCallback, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>* completedCallback) {
		return ((R (*)(ISavedGameClient*, Il2CppString*, GooglePlayGamesBasicApi::DataSource*, bool, GooglePlayGamesBasicApiSavedGame::ConflictCallback*, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>*))(Il2CppBase() + 0x0))(this, filename, source, prefetchDataOnConflict, conflictCallback, completedCallback);
	}
	template <typename R = void> R ReadBinaryData(GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata* metadata, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, Il2CppArray<uint8_t>*>* completedCallback) {
		return ((R (*)(ISavedGameClient*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, Il2CppArray<uint8_t>*>*))(Il2CppBase() + 0x0))(this, metadata, completedCallback);
	}
	template <typename R = void> R ShowSelectSavedGameUI(Il2CppString* uiTitle, uint32_t maxDisplayedSavedGames, bool showCreateSaveUI, bool showDeleteSaveUI, Action2GooglePlayGamesBasicApiSavedGame::SelectUIStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>* callback) {
		return ((R (*)(ISavedGameClient*, Il2CppString*, uint32_t, bool, bool, Action2GooglePlayGamesBasicApiSavedGame::SelectUIStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>*))(Il2CppBase() + 0x0))(this, uiTitle, maxDisplayedSavedGames, showCreateSaveUI, showDeleteSaveUI, callback);
	}
	template <typename R = void> R CommitUpdate(GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata* metadata, GooglePlayGamesBasicApiSavedGame::SavedGameMetadataUpdate* updateForMetadata, Il2CppArray<uint8_t>* updatedBinaryData, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>* callback) {
		return ((R (*)(ISavedGameClient*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*, GooglePlayGamesBasicApiSavedGame::SavedGameMetadataUpdate*, Il2CppArray<uint8_t>*, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>*))(Il2CppBase() + 0x0))(this, metadata, updateForMetadata, updatedBinaryData, callback);
	}
	template <typename R = void> R FetchAllSavedGames(GooglePlayGamesBasicApi::DataSource* source, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, Il2CppList<GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>*>* callback) {
		return ((R (*)(ISavedGameClient*, GooglePlayGamesBasicApi::DataSource*, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, Il2CppList<GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>*>*))(Il2CppBase() + 0x0))(this, source, callback);
	}
	template <typename R = void> R Delete(GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata* metadata) {
		return ((R (*)(ISavedGameClient*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*))(Il2CppBase() + 0x0))(this, metadata);
	}

};

}
