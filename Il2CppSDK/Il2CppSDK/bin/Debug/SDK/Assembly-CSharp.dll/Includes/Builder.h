#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Builder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Builder"));
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

	template <typename T = Builder*> T WithUpdatedDescription(Il2CppString* description) {
		return ((T (*)(Builder*, Il2CppString*))(Il2CppBase() + 0x10C8150))(this, description);
	}
	template <typename T = Builder*> T WithUpdatedPngCoverImage(Il2CppArray<uintptr_t>* newPngCoverImage) {
		return ((T (*)(Builder*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10C81D8))(this, newPngCoverImage);
	}
	template <typename T = Builder*> T WithUpdatedPlayedTime(uintptr_t newPlayedTime) {
		return ((T (*)(Builder*, uintptr_t))(Il2CppBase() + 0x10C8218))(this, newPlayedTime);
	}
	template <typename T = SavedGameMetadataUpdate*> T Build() {
		return ((T (*)(Builder*))(Il2CppBase() + 0x10C8300))(this);
	}

};

