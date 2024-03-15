#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AndroidConflictResolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AndroidConflictResolver"));
	}

	template <typename R = uintptr_t> R& mSnapshotsClient() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& mConflict() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = GooglePlayGamesAndroid::AndroidSnapshotMetadata*> R& mOriginal() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = GooglePlayGamesAndroid::AndroidSnapshotMetadata*> R& mUnmerged() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>*& mCompleteCallback() {
		return *(Action2GooglePlayGamesBasicApiSavedGame::SavedGameRequestStatus*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>**)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& mRetryFileOpen() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = GooglePlayGamesAndroid::AndroidSavedGameClient*> R& mAndroidSavedGameClient() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R ResolveConflict(GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata* chosenMetadata, GooglePlayGamesBasicApiSavedGame::SavedGameMetadataUpdate* metadataUpdate, Il2CppArray<uint8_t>* updatedData) {
		return ((R (*)(AndroidConflictResolver*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*, GooglePlayGamesBasicApiSavedGame::SavedGameMetadataUpdate*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x1145AF8))(this, chosenMetadata, metadataUpdate, updatedData);
	}
	template <typename R = void> R ChooseMetadata(GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata* chosenMetadata) {
		return ((R (*)(AndroidConflictResolver*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*))(Il2CppBase() + 0x1146518))(this, chosenMetadata);
	}
	template <typename R = void> R ResolveConflictb__8_0(uintptr_t dataOrConflict) {
		return ((R (*)(AndroidConflictResolver*, uintptr_t))(Il2CppBase() + 0x11469CC))(this, dataOrConflict);
	}
	template <typename R = void> R ResolveConflictb__8_1(uintptr_t exception) {
		return ((R (*)(AndroidConflictResolver*, uintptr_t))(Il2CppBase() + 0x11469E8))(this, exception);
	}
	template <typename R = void> R ChooseMetadatab__9_0(uintptr_t dataOrConflict) {
		return ((R (*)(AndroidConflictResolver*, uintptr_t))(Il2CppBase() + 0x1146BB8))(this, dataOrConflict);
	}
	template <typename R = void> R ChooseMetadatab__9_1(uintptr_t exception) {
		return ((R (*)(AndroidConflictResolver*, uintptr_t))(Il2CppBase() + 0x1146BD4))(this, exception);
	}

};

