#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiSavedGame {

class ConflictCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiSavedGame", "ConflictCallback"));
	}


	template <typename R = void> R Invoke(GooglePlayGamesBasicApiSavedGame::IConflictResolver* resolver, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata* original, Il2CppArray<uint8_t>* originalData, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata* unmerged, Il2CppArray<uint8_t>* unmergedData) {
		return ((R (*)(ConflictCallback*, GooglePlayGamesBasicApiSavedGame::IConflictResolver*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*, Il2CppArray<uint8_t>*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x15E7A98))(this, resolver, original, originalData, unmerged, unmergedData);
	}
	template <typename R = uintptr_t> R BeginInvoke(GooglePlayGamesBasicApiSavedGame::IConflictResolver* resolver, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata* original, Il2CppArray<uint8_t>* originalData, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata* unmerged, Il2CppArray<uint8_t>* unmergedData, uintptr_t callback, Il2CppObject* object) {
		return ((R (*)(ConflictCallback*, GooglePlayGamesBasicApiSavedGame::IConflictResolver*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*, Il2CppArray<uint8_t>*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*, Il2CppArray<uint8_t>*, uintptr_t, Il2CppObject*))(Il2CppBase() + 0x15E7E8C))(this, resolver, original, originalData, unmerged, unmergedData, callback, object);
	}
	template <typename R = void> R EndInvoke(uintptr_t result) {
		return ((R (*)(ConflictCallback*, uintptr_t))(Il2CppBase() + 0x15E7EC0))(this, result);
	}

};

}
