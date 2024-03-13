#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildWindowHelper"));
	}


	template <typename T = UIWindow*> static T ShowGuild(UIWindowsManager* manager, bool showFindGuild) {
		return ((T (*)(void *, UIWindowsManager*, bool))(Il2CppBase() + 0x144681C))(0, manager, showFindGuild);
	}
	template <typename T = void> static T UpdateClanPanel(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1446914))(0, manager);
	}
	template <typename T = void> static T OnGuildChangeUserRole(UIWindowsManager* manager, ErrorCodes* code) {
		return ((T (*)(void *, UIWindowsManager*, ErrorCodes*))(Il2CppBase() + 0x1446A04))(0, manager, code);
	}
	template <typename T = void> static T OnGuildKickUser(UIWindowsManager* manager, ErrorCodes* code) {
		return ((T (*)(void *, UIWindowsManager*, ErrorCodes*))(Il2CppBase() + 0x1446B08))(0, manager, code);
	}
	template <typename T = void> static T OnGuildAcceptInvite(UIWindowsManager* manager, ErrorCodes* code) {
		return ((T (*)(void *, UIWindowsManager*, ErrorCodes*))(Il2CppBase() + 0x1446C0C))(0, manager, code);
	}
	template <typename T = void> static T OnReceiveUpdateGuildError(UIWindowsManager* manager, ErrorCodes* errorCode) {
		return ((T (*)(void *, UIWindowsManager*, ErrorCodes*))(Il2CppBase() + 0x1446D10))(0, manager, errorCode);
	}
	template <typename T = void> static T OnRecommendedGuildsResponse(UIWindowsManager* manager, Il2CppArray<uintptr_t>* ids, ErrorCodes* errorCode) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0x1446E14))(0, manager, ids, errorCode);
	}
	template <typename T = void> static T OnMainTopGuildsResponse(UIWindowsManager* manager, Il2CppArray<uintptr_t>* ids, ErrorCodes* errorCode) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0x1446F24))(0, manager, ids, errorCode);
	}
	template <typename T = void> static T OnGlobalTopGuildsResponse(UIWindowsManager* manager, Il2CppArray<uintptr_t>* ids, ErrorCodes* errorCode) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0x1447034))(0, manager, ids, errorCode);
	}
	template <typename T = void> static T OnStartGuildQuestResult(UIWindowsManager* manager, Il2CppString* errMessage) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x1447144))(0, manager, errMessage);
	}
	template <typename T = void> static T OnReceiveGuildEvent(UIWindowsManager* manager, ChatEntity* entity) {
		return ((T (*)(void *, UIWindowsManager*, ChatEntity*))(Il2CppBase() + 0x144727C))(0, manager, entity);
	}

};

