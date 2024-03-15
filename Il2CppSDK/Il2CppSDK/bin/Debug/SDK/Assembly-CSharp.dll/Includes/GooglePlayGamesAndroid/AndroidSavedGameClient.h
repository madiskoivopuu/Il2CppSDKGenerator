#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidSavedGameClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidSavedGameClient"));
	}

	template <typename R = uintptr_t> static R& ValidFilenameRegex() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& mSnapshotsClient() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = GooglePlayGamesAndroid::AndroidClient*> R& mAndroidClient() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R OpenWithAutomaticConflictResolution(Il2CppString* filename, GooglePlayGamesBasicApi::DataSource* source, GooglePlayGamesBasicApiSavedGame::ConflictResolutionStrategy* resolutionStrategy, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>* completedCallback) {
		return ((R (*)(AndroidSavedGameClient*, Il2CppString*, GooglePlayGamesBasicApi::DataSource*, GooglePlayGamesBasicApiSavedGame::ConflictResolutionStrategy*, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>*))(Il2CppBase() + 0x12B847C))(this, filename, source, resolutionStrategy, completedCallback);
	}
	template <typename R = void> R OpenWithManualConflictResolution(Il2CppString* filename, GooglePlayGamesBasicApi::DataSource* source, bool prefetchDataOnConflict, GooglePlayGamesBasicApiSavedGame::ConflictCallback* conflictCallback, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>* completedCallback) {
		return ((R (*)(AndroidSavedGameClient*, Il2CppString*, GooglePlayGamesBasicApi::DataSource*, bool, GooglePlayGamesBasicApiSavedGame::ConflictCallback*, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>*))(Il2CppBase() + 0x12B8C64))(this, filename, source, prefetchDataOnConflict, conflictCallback, completedCallback);
	}
	template <typename R = void> R InternalOpen(Il2CppString* filename, GooglePlayGamesBasicApi::DataSource* source, GooglePlayGamesBasicApiSavedGame::ConflictResolutionStrategy* resolutionStrategy, bool prefetchDataOnConflict, GooglePlayGamesBasicApiSavedGame::ConflictCallback* conflictCallback, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>* completedCallback) {
		return ((R (*)(AndroidSavedGameClient*, Il2CppString*, GooglePlayGamesBasicApi::DataSource*, GooglePlayGamesBasicApiSavedGame::ConflictResolutionStrategy*, bool, GooglePlayGamesBasicApiSavedGame::ConflictCallback*, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>*))(Il2CppBase() + 0x12B8838))(this, filename, source, resolutionStrategy, prefetchDataOnConflict, conflictCallback, completedCallback);
	}
	template <typename R = void> R ReadBinaryData(GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata* metadata, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, Il2CppArray<uint8_t>*>* completedCallback) {
		return ((R (*)(AndroidSavedGameClient*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, Il2CppArray<uint8_t>*>*))(Il2CppBase() + 0x12B8F44))(this, metadata, completedCallback);
	}
	template <typename R = void> R ShowSelectSavedGameUI(Il2CppString* uiTitle, uint32_t maxDisplayedSavedGames, bool showCreateSaveUI, bool showDeleteSaveUI, Action2GooglePlayGamesBasicApiSavedGame::SelectUIStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>* callback) {
		return ((R (*)(AndroidSavedGameClient*, Il2CppString*, uint32_t, bool, bool, Action2GooglePlayGamesBasicApiSavedGame::SelectUIStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>*))(Il2CppBase() + 0x12B9218))(this, uiTitle, maxDisplayedSavedGames, showCreateSaveUI, showDeleteSaveUI, callback);
	}
	template <typename R = void> R CommitUpdate(GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata* metadata, GooglePlayGamesBasicApiSavedGame::SavedGameMetadataUpdate* updateForMetadata, Il2CppArray<uint8_t>* updatedBinaryData, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>* callback) {
		return ((R (*)(AndroidSavedGameClient*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*, GooglePlayGamesBasicApiSavedGame::SavedGameMetadataUpdate*, Il2CppArray<uint8_t>*, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>*))(Il2CppBase() + 0x12B939C))(this, metadata, updateForMetadata, updatedBinaryData, callback);
	}
	template <typename R = void> R FetchAllSavedGames(GooglePlayGamesBasicApi::DataSource* source, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, Il2CppList<GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>*>* callback) {
		return ((R (*)(AndroidSavedGameClient*, GooglePlayGamesBasicApi::DataSource*, Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, Il2CppList<GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>*>*))(Il2CppBase() + 0x12BA660))(this, source, callback);
	}
	template <typename R = void> R Delete(GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata* metadata) {
		return ((R (*)(AndroidSavedGameClient*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*))(Il2CppBase() + 0x12BAA14))(this, metadata);
	}
	template <typename R = void> R AddOnFailureListenerWithSignOut(uintptr_t task, Action1uintptr_t>* callback) {
		return ((R (*)(AndroidSavedGameClient*, uintptr_t, Action1uintptr_t>*))(Il2CppBase() + 0x12B8E50))(this, task, callback);
	}
	template <typename R = GooglePlayGamesBasicApiSavedGame::ConflictCallback*> R ToOnGameThread(GooglePlayGamesBasicApiSavedGame::ConflictCallback* conflictCallback) {
		return ((R (*)(AndroidSavedGameClient*, GooglePlayGamesBasicApiSavedGame::ConflictCallback*))(Il2CppBase() + 0x12B86F4))(this, conflictCallback);
	}
	template <typename R = bool> static R IsValidFilename(Il2CppString* filename) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x12B87AC))(0, filename);
	}
	template <typename R = uintptr_t> static R AsMetadataChange(GooglePlayGamesBasicApiSavedGame::SavedGameMetadataUpdate* update) {
		return ((R (*)(void *, GooglePlayGamesBasicApiSavedGame::SavedGameMetadataUpdate*))(Il2CppBase() + 0x12B9ACC))(0, update);
	}
	 static Action2uintptr_t, uintptr_t>* ToOnGameThread_1(Action2uintptr_t, uintptr_t>* toConvert) {
		return ((Action2uintptr_t, uintptr_t>* (*)(void *, Action2uintptr_t, uintptr_t>*))(Il2CppBase() + 0x0))(0, toConvert);
	}

};

}
