#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiSavedGame {

class IConflictResolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiSavedGame", "IConflictResolver"));
	}


	template <typename T = void> T ChooseMetadata(ISavedGameMetadata* chosenMetadata) {
		return ((T (*)(IConflictResolver*, ISavedGameMetadata*))(Il2CppBase() + 0x0))(this, chosenMetadata);
	}
	template <typename T = void> T ResolveConflict(ISavedGameMetadata* chosenMetadata, SavedGameMetadataUpdate* metadataUpdate, Il2CppArray<uintptr_t>* updatedData) {
		return ((T (*)(IConflictResolver*, ISavedGameMetadata*, SavedGameMetadataUpdate*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, chosenMetadata, metadataUpdate, updatedData);
	}

};

}
