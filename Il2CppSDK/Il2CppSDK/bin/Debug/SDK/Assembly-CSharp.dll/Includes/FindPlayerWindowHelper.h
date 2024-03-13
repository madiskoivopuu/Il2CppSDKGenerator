#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindPlayerWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindPlayerWindowHelper"));
	}


	template <typename T = FindPlayerWindow*> static T ShowFindPlayer(UIWindowsManager* manager, uint8_t cellIndex, uintptr_t onSendClanInviteUser) {
		return ((T (*)(void *, UIWindowsManager*, uint8_t, uintptr_t))(Il2CppBase() + 0x16985CC))(0, manager, cellIndex, onSendClanInviteUser);
	}
	template <typename T = void> static T OnReceivedPlayerForInvite(UIWindowsManager* manager, ErrorCodes* code, int64_t playerId) {
		return ((T (*)(void *, UIWindowsManager*, ErrorCodes*, int64_t))(Il2CppBase() + 0x169867C))(0, manager, code, playerId);
	}

};

