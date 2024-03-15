#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass130
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass13_0"));
	}

	template <typename R = GooglePlayGamesBasicApiSavedGame::ConflictCallback*> R& conflictCallback() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R ToOnGameThreadb__0(GooglePlayGamesBasicApiSavedGame::IConflictResolver* resolver, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata* original, Il2CppArray<uint8_t>* originalData, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata* unmerged, Il2CppArray<uint8_t>* unmergedData) {
		return ((R (*)(cDisplayClass130*, GooglePlayGamesBasicApiSavedGame::IConflictResolver*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*, Il2CppArray<uint8_t>*, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x11446CC))(this, resolver, original, originalData, unmerged, unmergedData);
	}

};

