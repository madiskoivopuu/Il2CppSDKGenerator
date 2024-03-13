#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiSavedGame {

class ConflictResolutionStrategy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiSavedGame", "ConflictResolutionStrategy"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = ConflictResolutionStrategy*> static T& UseLongestPlaytime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ConflictResolutionStrategy*> static T& UseOriginal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ConflictResolutionStrategy*> static T& UseUnmerged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ConflictResolutionStrategy*> static T& UseManual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ConflictResolutionStrategy*> static T& UseLastKnownGood() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ConflictResolutionStrategy*> static T& UseMostRecentlySaved() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
