#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyPlayerState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyPlayerState"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = LobbyPlayerState*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = LobbyPlayerState*> static T& Accept() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = LobbyPlayerState*> static T& Deny() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = LobbyPlayerState*> static T& Reject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

