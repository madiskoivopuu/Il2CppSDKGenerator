#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiSavedGame {

class SavedGameMetadataUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiSavedGame", "SavedGameMetadataUpdate"));
	}

	template <typename R = bool> R& mDescriptionUpdated() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& mNewDescription() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = bool> R& mCoverImageUpdated() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<uint8_t>*> R& mNewPngCoverImage() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Nullable1<uintptr_t>*& mNewPlayedTime() {
		return *(Nullable1<uintptr_t>**)((uintptr_t)this + 0x20);
	}

	template <typename R = bool> R get_IsDescriptionUpdated() {
		return ((R (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x1356E78))(this);
	}
	template <typename R = Il2CppString*> R get_UpdatedDescription() {
		return ((R (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x1356E80))(this);
	}
	template <typename R = bool> R get_IsCoverImageUpdated() {
		return ((R (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x1356E88))(this);
	}
	template <typename R = Il2CppArray<uint8_t>*> R get_UpdatedPngCoverImage() {
		return ((R (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x1356E90))(this);
	}
	template <typename R = bool> R get_IsPlayedTimeUpdated() {
		return ((R (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x1356E98))(this);
	}
	 Nullable1<uintptr_t>* get_UpdatedPlayedTime() {
		return ((Nullable1<uintptr_t>* (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x1356ED8))(this);
	}

};

}
