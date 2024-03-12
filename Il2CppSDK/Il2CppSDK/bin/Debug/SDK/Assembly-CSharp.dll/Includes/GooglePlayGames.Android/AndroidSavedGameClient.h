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
	template <typename T = uintptr_t> T& mAndroidClient() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OpenWithAutomaticConflictResolution(Il2CppString* filename, uintptr_t source, uintptr_t resolutionStrategy, void* completedCallback) {
		return ((T (*)(AndroidSavedGameClient*, Il2CppString*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x12B847C))(this, filename, source, resolutionStrategy, completedCallback);
	}
	template <typename T = void> T OpenWithManualConflictResolution(Il2CppString* filename, uintptr_t source, bool prefetchDataOnConflict, uintptr_t conflictCallback, void* completedCallback) {
		return ((T (*)(AndroidSavedGameClient*, Il2CppString*, uintptr_t, bool, uintptr_t, void*))(Il2CppBase() + 0x12B8C64))(this, filename, source, prefetchDataOnConflict, conflictCallback, completedCallback);
	}
	template <typename T = void> T InternalOpen(Il2CppString* filename, uintptr_t source, uintptr_t resolutionStrategy, bool prefetchDataOnConflict, uintptr_t conflictCallback, void* completedCallback) {
		return ((T (*)(AndroidSavedGameClient*, Il2CppString*, uintptr_t, uintptr_t, bool, uintptr_t, void*))(Il2CppBase() + 0x12B8838))(this, filename, source, resolutionStrategy, prefetchDataOnConflict, conflictCallback, completedCallback);
	}
	template <typename T = void> T ReadBinaryData(uintptr_t metadata, void* completedCallback) {
		return ((T (*)(AndroidSavedGameClient*, uintptr_t, void*))(Il2CppBase() + 0x12B8F44))(this, metadata, completedCallback);
	}
	template <typename T = void> T ShowSelectSavedGameUI(Il2CppString* uiTitle, uint32_t maxDisplayedSavedGames, bool showCreateSaveUI, bool showDeleteSaveUI, void* callback) {
		return ((T (*)(AndroidSavedGameClient*, Il2CppString*, uint32_t, bool, bool, void*))(Il2CppBase() + 0x12B9218))(this, uiTitle, maxDisplayedSavedGames, showCreateSaveUI, showDeleteSaveUI, callback);
	}
	template <typename T = void> T CommitUpdate(uintptr_t metadata, uintptr_t updateForMetadata, Il2CppArray<uintptr_t>* updatedBinaryData, void* callback) {
		return ((T (*)(AndroidSavedGameClient*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x12B939C))(this, metadata, updateForMetadata, updatedBinaryData, callback);
	}
	template <typename T = void> T FetchAllSavedGames(uintptr_t source, void* callback) {
		return ((T (*)(AndroidSavedGameClient*, uintptr_t, void*))(Il2CppBase() + 0x12BA660))(this, source, callback);
	}
	template <typename T = void> T Delete(uintptr_t metadata) {
		return ((T (*)(AndroidSavedGameClient*, uintptr_t))(Il2CppBase() + 0x12BAA14))(this, metadata);
	}
	template <typename T = void> T AddOnFailureListenerWithSignOut(uintptr_t task, void* callback) {
		return ((T (*)(AndroidSavedGameClient*, uintptr_t, void*))(Il2CppBase() + 0x12B8E50))(this, task, callback);
	}
	template <typename T = uintptr_t> T ToOnGameThread(uintptr_t conflictCallback) {
		return ((T (*)(AndroidSavedGameClient*, uintptr_t))(Il2CppBase() + 0x12B86F4))(this, conflictCallback);
	}
	template <typename T = bool> static T IsValidFilename(Il2CppString* filename) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x12B87AC))(0, filename);
	}
	template <typename T = uintptr_t> static T AsMetadataChange(uintptr_t update) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12B9ACC))(0, update);
	}
	template <typename T = void*> static T ToOnGameThread_1(void* toConvert) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, toConvert);
	}

};

}
