#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidSavedGameClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidSavedGameClient"));
	}

	template <typename T = uintptr_t> static T& ValidFilenameRegex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mSnapshotsClient() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = AndroidClient*> T& mAndroidClient() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OpenWithAutomaticConflictResolution(Il2CppString* filename, DataSource* source, ConflictResolutionStrategy* resolutionStrategy, Action2SavedGameRequestStatus*, ISavedGameMetadata*>* completedCallback) {
		return ((T (*)(AndroidSavedGameClient*, Il2CppString*, DataSource*, ConflictResolutionStrategy*, Action2SavedGameRequestStatus*, ISavedGameMetadata*>*))(Il2CppBase() + 0x12B847C))(this, filename, source, resolutionStrategy, completedCallback);
	}
	template <typename T = void> T OpenWithManualConflictResolution(Il2CppString* filename, DataSource* source, bool prefetchDataOnConflict, ConflictCallback* conflictCallback, Action2SavedGameRequestStatus*, ISavedGameMetadata*>* completedCallback) {
		return ((T (*)(AndroidSavedGameClient*, Il2CppString*, DataSource*, bool, ConflictCallback*, Action2SavedGameRequestStatus*, ISavedGameMetadata*>*))(Il2CppBase() + 0x12B8C64))(this, filename, source, prefetchDataOnConflict, conflictCallback, completedCallback);
	}
	template <typename T = void> T InternalOpen(Il2CppString* filename, DataSource* source, ConflictResolutionStrategy* resolutionStrategy, bool prefetchDataOnConflict, ConflictCallback* conflictCallback, Action2SavedGameRequestStatus*, ISavedGameMetadata*>* completedCallback) {
		return ((T (*)(AndroidSavedGameClient*, Il2CppString*, DataSource*, ConflictResolutionStrategy*, bool, ConflictCallback*, Action2SavedGameRequestStatus*, ISavedGameMetadata*>*))(Il2CppBase() + 0x12B8838))(this, filename, source, resolutionStrategy, prefetchDataOnConflict, conflictCallback, completedCallback);
	}
	template <typename T = void> T ReadBinaryData(ISavedGameMetadata* metadata, Action2SavedGameRequestStatus*, Il2CppArray<uintptr_t>*>* completedCallback) {
		return ((T (*)(AndroidSavedGameClient*, ISavedGameMetadata*, Action2SavedGameRequestStatus*, Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x12B8F44))(this, metadata, completedCallback);
	}
	template <typename T = void> T ShowSelectSavedGameUI(Il2CppString* uiTitle, uint32_t maxDisplayedSavedGames, bool showCreateSaveUI, bool showDeleteSaveUI, Action2SelectUIStatus*, ISavedGameMetadata*>* callback) {
		return ((T (*)(AndroidSavedGameClient*, Il2CppString*, uint32_t, bool, bool, Action2SelectUIStatus*, ISavedGameMetadata*>*))(Il2CppBase() + 0x12B9218))(this, uiTitle, maxDisplayedSavedGames, showCreateSaveUI, showDeleteSaveUI, callback);
	}
	template <typename T = void> T CommitUpdate(ISavedGameMetadata* metadata, SavedGameMetadataUpdate* updateForMetadata, Il2CppArray<uintptr_t>* updatedBinaryData, Action2SavedGameRequestStatus*, ISavedGameMetadata*>* callback) {
		return ((T (*)(AndroidSavedGameClient*, ISavedGameMetadata*, SavedGameMetadataUpdate*, Il2CppArray<uintptr_t>*, Action2SavedGameRequestStatus*, ISavedGameMetadata*>*))(Il2CppBase() + 0x12B939C))(this, metadata, updateForMetadata, updatedBinaryData, callback);
	}
	template <typename T = void> T FetchAllSavedGames(DataSource* source, Action2SavedGameRequestStatus*, Il2CppList<ISavedGameMetadata*>*>* callback) {
		return ((T (*)(AndroidSavedGameClient*, DataSource*, Action2SavedGameRequestStatus*, Il2CppList<ISavedGameMetadata*>*>*))(Il2CppBase() + 0x12BA660))(this, source, callback);
	}
	template <typename T = void> T Delete(ISavedGameMetadata* metadata) {
		return ((T (*)(AndroidSavedGameClient*, ISavedGameMetadata*))(Il2CppBase() + 0x12BAA14))(this, metadata);
	}
	template <typename T = void> T AddOnFailureListenerWithSignOut(uintptr_t task, Action1uintptr_t>* callback) {
		return ((T (*)(AndroidSavedGameClient*, uintptr_t, Action1uintptr_t>*))(Il2CppBase() + 0x12B8E50))(this, task, callback);
	}
	template <typename T = ConflictCallback*> T ToOnGameThread(ConflictCallback* conflictCallback) {
		return ((T (*)(AndroidSavedGameClient*, ConflictCallback*))(Il2CppBase() + 0x12B86F4))(this, conflictCallback);
	}
	template <typename T = bool> static T IsValidFilename(Il2CppString* filename) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x12B87AC))(0, filename);
	}
	template <typename T = uintptr_t> static T AsMetadataChange(SavedGameMetadataUpdate* update) {
		return ((T (*)(void *, SavedGameMetadataUpdate*))(Il2CppBase() + 0x12B9ACC))(0, update);
	}
	template <typename T = Action2uintptr_t, uintptr_t>*> static T ToOnGameThread_1(Action2uintptr_t, uintptr_t>* toConvert) {
		return ((T (*)(void *, Action2uintptr_t, uintptr_t>*))(Il2CppBase() + 0x0))(0, toConvert);
	}

};

}
