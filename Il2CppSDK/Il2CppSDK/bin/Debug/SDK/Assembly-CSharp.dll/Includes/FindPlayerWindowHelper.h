#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindPlayerWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindPlayerWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowFindPlayer(uintptr_t manager, unsigned char cellIndex, uintptr_t onSendClanInviteUser) {
		return ((T (*)(void *, uintptr_t, unsigned char, uintptr_t))(Il2CppBase() + 0x16985CC))(0, manager, cellIndex, onSendClanInviteUser);
	}
	template <typename T = void> static T OnReceivedPlayerForInvite(uintptr_t manager, uintptr_t code, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x169867C))(0, manager, code, playerId);
	}

};

}
