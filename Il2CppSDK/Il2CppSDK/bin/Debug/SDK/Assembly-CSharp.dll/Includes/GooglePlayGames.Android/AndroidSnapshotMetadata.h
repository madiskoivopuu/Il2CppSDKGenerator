#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidSnapshotMetadata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidSnapshotMetadata"));
	}

	template <typename T = uintptr_t> T& mJavaSnapshot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mJavaMetadata() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mJavaContents() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_JavaSnapshot() {
		return ((T (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x18870A0))(this);
	}
	template <typename T = uintptr_t> T get_JavaMetadata() {
		return ((T (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x18870A8))(this);
	}
	template <typename T = uintptr_t> T get_JavaContents() {
		return ((T (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x18870B0))(this);
	}
	template <typename T = bool> T get_IsOpen() {
		return ((T (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x18870B8))(this);
	}
	template <typename T = Il2CppString*> T get_Filename() {
		return ((T (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x18871D8))(this);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x18872E8))(this);
	}
	template <typename T = Il2CppString*> T get_CoverImageURL() {
		return ((T (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x18873F8))(this);
	}
	template <typename T = uintptr_t> T get_TotalTimePlayed() {
		return ((T (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x1887508))(this);
	}
	template <typename T = uintptr_t> T get_LastModifiedTimestamp() {
		return ((T (*)(AndroidSnapshotMetadata*))(Il2CppBase() + 0x1887658))(this);
	}

};

}
