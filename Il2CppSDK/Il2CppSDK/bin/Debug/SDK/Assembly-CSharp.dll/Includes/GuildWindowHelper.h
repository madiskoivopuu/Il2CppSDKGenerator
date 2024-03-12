#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowGuild(uintptr_t manager, bool showFindGuild) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x144681C))(0, manager, showFindGuild);
	}
	template <typename T = void> static T UpdateClanPanel(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1446914))(0, manager);
	}
	template <typename T = void> static T OnGuildChangeUserRole(uintptr_t manager, uintptr_t code) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1446A04))(0, manager, code);
	}
	template <typename T = void> static T OnGuildKickUser(uintptr_t manager, uintptr_t code) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1446B08))(0, manager, code);
	}
	template <typename T = void> static T OnGuildAcceptInvite(uintptr_t manager, uintptr_t code) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1446C0C))(0, manager, code);
	}
	template <typename T = void> static T OnReceiveUpdateGuildError(uintptr_t manager, uintptr_t errorCode) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1446D10))(0, manager, errorCode);
	}
	template <typename T = void> static T OnRecommendedGuildsResponse(uintptr_t manager, Il2CppArray<uintptr_t>* ids, uintptr_t errorCode) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1446E14))(0, manager, ids, errorCode);
	}
	template <typename T = void> static T OnMainTopGuildsResponse(uintptr_t manager, Il2CppArray<uintptr_t>* ids, uintptr_t errorCode) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1446F24))(0, manager, ids, errorCode);
	}
	template <typename T = void> static T OnGlobalTopGuildsResponse(uintptr_t manager, Il2CppArray<uintptr_t>* ids, uintptr_t errorCode) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1447034))(0, manager, ids, errorCode);
	}
	template <typename T = void> static T OnStartGuildQuestResult(uintptr_t manager, Il2CppString* errMessage) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1447144))(0, manager, errMessage);
	}
	template <typename T = void> static T OnReceiveGuildEvent(uintptr_t manager, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x144727C))(0, manager, entity);
	}

};

}
