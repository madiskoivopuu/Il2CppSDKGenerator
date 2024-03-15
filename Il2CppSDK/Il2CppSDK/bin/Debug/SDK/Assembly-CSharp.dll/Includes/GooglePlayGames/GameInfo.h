#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGames {

class GameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "GameInfo"));
	}

	template <typename R = Il2CppString*> static R& UnescapedApplicationId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& UnescapedIosClientId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& UnescapedWebClientId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& UnescapedNearbyServiceId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ApplicationId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& IosClientId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& WebClientId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& NearbyConnectionServiceId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = bool> static R ApplicationIdInitialized() {
		return ((R (*)(void *))(Il2CppBase() + 0x174E3D8))(0);
	}
	template <typename R = bool> static R IosClientIdInitialized() {
		return ((R (*)(void *))(Il2CppBase() + 0x174E4C0))(0);
	}
	template <typename R = bool> static R WebClientIdInitialized() {
		return ((R (*)(void *))(Il2CppBase() + 0x174E558))(0);
	}
	template <typename R = bool> static R NearbyConnectionsInitialized() {
		return ((R (*)(void *))(Il2CppBase() + 0x174E5F0))(0);
	}
	template <typename R = Il2CppString*> static R ToEscapedToken(Il2CppString* token) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x174E470))(0, token);
	}

};

}
