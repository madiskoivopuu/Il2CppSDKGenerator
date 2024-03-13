#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiSavedGame {

class ISavedGameClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiSavedGame", "ISavedGameClient"));
	}


	template <typename T = void> T OpenWithAutomaticConflictResolution(Il2CppString* filename, DataSource* source, ConflictResolutionStrategy* resolutionStrategy, Action2SavedGameRequestStatus*, ISavedGameMetadata*>* callback) {
		return ((T (*)(ISavedGameClient*, Il2CppString*, DataSource*, ConflictResolutionStrategy*, Action2SavedGameRequestStatus*, ISavedGameMetadata*>*))(Il2CppBase() + 0x0))(this, filename, source, resolutionStrategy, callback);
	}
	template <typename T = void> T OpenWithManualConflictResolution(Il2CppString* filename, DataSource* source, bool prefetchDataOnConflict, ConflictCallback* conflictCallback, Action2SavedGameRequestStatus*, ISavedGameMetadata*>* completedCallback) {
		return ((T (*)(ISavedGameClient*, Il2CppString*, DataSource*, bool, ConflictCallback*, Action2SavedGameRequestStatus*, ISavedGameMetadata*>*))(Il2CppBase() + 0x0))(this, filename, source, prefetchDataOnConflict, conflictCallback, completedCallback);
	}
	template <typename T = void> T ReadBinaryData(ISavedGameMetadata* metadata, Action2SavedGameRequestStatus*, Il2CppArray<uintptr_t>*>* completedCallback) {
		return ((T (*)(ISavedGameClient*, ISavedGameMetadata*, Action2SavedGameRequestStatus*, Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x0))(this, metadata, completedCallback);
	}
	template <typename T = void> T ShowSelectSavedGameUI(Il2CppString* uiTitle, uint32_t maxDisplayedSavedGames, bool showCreateSaveUI, bool showDeleteSaveUI, Action2SelectUIStatus*, ISavedGameMetadata*>* callback) {
		return ((T (*)(ISavedGameClient*, Il2CppString*, uint32_t, bool, bool, Action2SelectUIStatus*, ISavedGameMetadata*>*))(Il2CppBase() + 0x0))(this, uiTitle, maxDisplayedSavedGames, showCreateSaveUI, showDeleteSaveUI, callback);
	}
	template <typename T = void> T CommitUpdate(ISavedGameMetadata* metadata, SavedGameMetadataUpdate* updateForMetadata, Il2CppArray<uintptr_t>* updatedBinaryData, Action2SavedGameRequestStatus*, ISavedGameMetadata*>* callback) {
		return ((T (*)(ISavedGameClient*, ISavedGameMetadata*, SavedGameMetadataUpdate*, Il2CppArray<uintptr_t>*, Action2SavedGameRequestStatus*, ISavedGameMetadata*>*))(Il2CppBase() + 0x0))(this, metadata, updateForMetadata, updatedBinaryData, callback);
	}
	template <typename T = void> T FetchAllSavedGames(DataSource* source, Action2SavedGameRequestStatus*, Il2CppList<ISavedGameMetadata*>*>* callback) {
		return ((T (*)(ISavedGameClient*, DataSource*, Action2SavedGameRequestStatus*, Il2CppList<ISavedGameMetadata*>*>*))(Il2CppBase() + 0x0))(this, source, callback);
	}
	template <typename T = void> T Delete(ISavedGameMetadata* metadata) {
		return ((T (*)(ISavedGameClient*, ISavedGameMetadata*))(Il2CppBase() + 0x0))(this, metadata);
	}

};

}
