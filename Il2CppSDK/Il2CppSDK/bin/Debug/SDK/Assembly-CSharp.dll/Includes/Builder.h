#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Builder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Builder"));
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
	 Nullable1uintptr_t>*& mNewPlayedTime() {
		return *(Nullable1uintptr_t>**)((uintptr_t)this + 0x20);
	}

	template <typename R = Builder*> R WithUpdatedDescription(Il2CppString* description) {
		return ((R (*)(Builder*, Il2CppString*))(Il2CppBase() + 0x10C8150))(this, description);
	}
	template <typename R = Builder*> R WithUpdatedPngCoverImage(Il2CppArray<uint8_t>* newPngCoverImage) {
		return ((R (*)(Builder*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x10C81D8))(this, newPngCoverImage);
	}
	template <typename R = Builder*> R WithUpdatedPlayedTime(uintptr_t newPlayedTime) {
		return ((R (*)(Builder*, uintptr_t))(Il2CppBase() + 0x10C8218))(this, newPlayedTime);
	}
	template <typename R = GooglePlayGamesBasicApiSavedGame::SavedGameMetadataUpdate*> R Build() {
		return ((R (*)(Builder*))(Il2CppBase() + 0x10C8300))(this);
	}

};

