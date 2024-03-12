#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidJavaConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidJavaConverter"));
	}


	template <typename T = uintptr_t> static T ToDateTime(int64_t milliseconds) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x12B0A94))(0, milliseconds);
	}
	template <typename T = int32_t> static T ToLeaderboardVariantTimeSpan(uintptr_t span) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12AF020))(0, span);
	}
	template <typename T = int32_t> static T ToLeaderboardVariantCollection(uintptr_t collection) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12AF034))(0, collection);
	}
	template <typename T = int32_t> static T ToPageDirection(uintptr_t direction) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12AF55C))(0, direction);
	}
	template <typename T = uintptr_t> static T ToPlayer(uintptr_t player) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12B3AAC))(0, player);
	}
	template <typename T = uintptr_t> static T ToPlayerProfile(uintptr_t player) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12B3D58))(0, player);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T ToStringList(uintptr_t stringList) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12B419C))(0, stringList);
	}
	template <typename T = uintptr_t> static T ToJavaStringList(Il2CppList<Il2CppString*>* list) {
		return ((T (*)(void *, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x12B4464))(0, list);
	}
	template <typename T = uintptr_t> static T ToFriendsListVisibilityStatus(int32_t playerListVisibility) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x12B469C))(0, playerListVisibility);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T playersBufferToArray(uintptr_t playersBuffer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12B46AC))(0, playersBuffer);
	}

};

}
