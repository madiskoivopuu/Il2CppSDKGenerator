#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidSnapshotMetadata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidSnapshotMetadata"));
	}

	template <typename R = uintptr_t> R& mJavaSnapshot() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& mJavaMetadata() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& mJavaContents() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = uintptr_t> R get_JavaSnapshot() {
		return ((R (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x18870A0))(this);
	}
	template <typename R = uintptr_t> R get_JavaMetadata() {
		return ((R (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x18870A8))(this);
	}
	template <typename R = uintptr_t> R get_JavaContents() {
		return ((R (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x18870B0))(this);
	}
	template <typename R = bool> R get_IsOpen() {
		return ((R (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x18870B8))(this);
	}
	template <typename R = Il2CppString*> R get_Filename() {
		return ((R (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x18871D8))(this);
	}
	template <typename R = Il2CppString*> R get_Description() {
		return ((R (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x18872E8))(this);
	}
	template <typename R = Il2CppString*> R get_CoverImageURL() {
		return ((R (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x18873F8))(this);
	}
	template <typename R = uintptr_t> R get_TotalTimePlayed() {
		return ((R (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x1887508))(this);
	}
	template <typename R = uintptr_t> R get_LastModifiedTimestamp() {
		return ((R (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x1887658))(this);
	}

};

}
