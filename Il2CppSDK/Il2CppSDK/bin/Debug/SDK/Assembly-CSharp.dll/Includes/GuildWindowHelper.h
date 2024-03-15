#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildWindowHelper"));
	}


	template <typename R = UIWindow*> static R ShowGuild(UIWindowsManager* manager, bool showFindGuild) {
		return ((R (*)(void *, UIWindowsManager*, bool))(Il2CppBase() + 0x144681C))(0, manager, showFindGuild);
	}
	template <typename R = void> static R UpdateClanPanel(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1446914))(0, manager);
	}
	template <typename R = void> static R OnGuildChangeUserRole(UIWindowsManager* manager, ProtoTools::ErrorCodes* code) {
		return ((R (*)(void *, UIWindowsManager*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x1446A04))(0, manager, code);
	}
	template <typename R = void> static R OnGuildKickUser(UIWindowsManager* manager, ProtoTools::ErrorCodes* code) {
		return ((R (*)(void *, UIWindowsManager*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x1446B08))(0, manager, code);
	}
	template <typename R = void> static R OnGuildAcceptInvite(UIWindowsManager* manager, ProtoTools::ErrorCodes* code) {
		return ((R (*)(void *, UIWindowsManager*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x1446C0C))(0, manager, code);
	}
	template <typename R = void> static R OnReceiveUpdateGuildError(UIWindowsManager* manager, ProtoTools::ErrorCodes* errorCode) {
		return ((R (*)(void *, UIWindowsManager*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x1446D10))(0, manager, errorCode);
	}
	template <typename R = void> static R OnRecommendedGuildsResponse(UIWindowsManager* manager, Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes* errorCode) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x1446E14))(0, manager, ids, errorCode);
	}
	template <typename R = void> static R OnMainTopGuildsResponse(UIWindowsManager* manager, Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes* errorCode) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x1446F24))(0, manager, ids, errorCode);
	}
	template <typename R = void> static R OnGlobalTopGuildsResponse(UIWindowsManager* manager, Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes* errorCode) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x1447034))(0, manager, ids, errorCode);
	}
	template <typename R = void> static R OnStartGuildQuestResult(UIWindowsManager* manager, Il2CppString* errMessage) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x1447144))(0, manager, errMessage);
	}
	template <typename R = void> static R OnReceiveGuildEvent(UIWindowsManager* manager, ChatEntity* entity) {
		return ((R (*)(void *, UIWindowsManager*, ChatEntity*))(Il2CppBase() + 0x144727C))(0, manager, entity);
	}

};

