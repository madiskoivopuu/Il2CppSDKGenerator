#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiSavedGame {

class SavedGameMetadataUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiSavedGame", "SavedGameMetadataUpdate"));
	}

	template <typename T = bool> T& mDescriptionUpdated() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& mNewDescription() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& mCoverImageUpdated() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mNewPngCoverImage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Nullable1uintptr_t>*> T& mNewPlayedTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T get_IsDescriptionUpdated() {
		return ((T (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x1356E78))(this);
	}
	template <typename T = Il2CppString*> T get_UpdatedDescription() {
		return ((T (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x1356E80))(this);
	}
	template <typename T = bool> T get_IsCoverImageUpdated() {
		return ((T (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x1356E88))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_UpdatedPngCoverImage() {
		return ((T (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x1356E90))(this);
	}
	template <typename T = bool> T get_IsPlayedTimeUpdated() {
		return ((T (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x1356E98))(this);
	}
	template <typename T = Nullable1uintptr_t>*> T get_UpdatedPlayedTime() {
		return ((T (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x1356ED8))(this);
	}

};

}
