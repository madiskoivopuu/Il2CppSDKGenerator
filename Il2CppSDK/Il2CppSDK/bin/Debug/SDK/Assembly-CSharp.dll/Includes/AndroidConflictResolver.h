#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AndroidConflictResolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AndroidConflictResolver"));
	}

	template <typename T = uintptr_t> T& mSnapshotsClient() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mConflict() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = AndroidSnapshotMetadata*> T& mOriginal() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = AndroidSnapshotMetadata*> T& mUnmerged() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Action2SavedGameRequestStatus*, ISavedGameMetadata*>*> T& mCompleteCallback() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mRetryFileOpen() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = AndroidSavedGameClient*> T& mAndroidSavedGameClient() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T ResolveConflict(ISavedGameMetadata* chosenMetadata, SavedGameMetadataUpdate* metadataUpdate, Il2CppArray<uintptr_t>* updatedData) {
		return ((T (*)(AndroidConflictResolver*, ISavedGameMetadata*, SavedGameMetadataUpdate*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1145AF8))(this, chosenMetadata, metadataUpdate, updatedData);
	}
	template <typename T = void> T ChooseMetadata(ISavedGameMetadata* chosenMetadata) {
		return ((T (*)(AndroidConflictResolver*, ISavedGameMetadata*))(Il2CppBase() + 0x1146518))(this, chosenMetadata);
	}
	template <typename T = void> T ResolveConflictb__8_0(uintptr_t dataOrConflict) {
		return ((T (*)(AndroidConflictResolver*, uintptr_t))(Il2CppBase() + 0x11469CC))(this, dataOrConflict);
	}
	template <typename T = void> T ResolveConflictb__8_1(uintptr_t exception) {
		return ((T (*)(AndroidConflictResolver*, uintptr_t))(Il2CppBase() + 0x11469E8))(this, exception);
	}
	template <typename T = void> T ChooseMetadatab__9_0(uintptr_t dataOrConflict) {
		return ((T (*)(AndroidConflictResolver*, uintptr_t))(Il2CppBase() + 0x1146BB8))(this, dataOrConflict);
	}
	template <typename T = void> T ChooseMetadatab__9_1(uintptr_t exception) {
		return ((T (*)(AndroidConflictResolver*, uintptr_t))(Il2CppBase() + 0x1146BD4))(this, exception);
	}

};

