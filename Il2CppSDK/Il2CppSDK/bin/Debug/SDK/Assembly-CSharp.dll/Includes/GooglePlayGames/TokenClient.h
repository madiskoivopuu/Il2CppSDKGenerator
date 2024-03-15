#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGames {

class TokenClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "TokenClient"));
	}


	template <typename R = Il2CppString*> R GetEmail() {
		return ((R (*)(TokenClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R GetAuthCode() {
		return ((R (*)(TokenClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R GetIdToken() {
		return ((R (*)(TokenClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, Action1<Il2CppString*>* callback) {
		return ((R (*)(TokenClient*, bool, Action1<Il2CppString*>*))(Il2CppBase() + 0x0))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename R = void> R Signout() {
		return ((R (*)(TokenClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R SetRequestAuthCode(bool flag, bool forceRefresh) {
		return ((R (*)(TokenClient*, bool, bool))(Il2CppBase() + 0x0))(this, flag, forceRefresh);
	}
	template <typename R = void> R SetRequestEmail(bool flag) {
		return ((R (*)(TokenClient*, bool))(Il2CppBase() + 0x0))(this, flag);
	}
	template <typename R = void> R SetRequestIdToken(bool flag) {
		return ((R (*)(TokenClient*, bool))(Il2CppBase() + 0x0))(this, flag);
	}
	template <typename R = void> R SetWebClientId(Il2CppString* webClientId) {
		return ((R (*)(TokenClient*, Il2CppString*))(Il2CppBase() + 0x0))(this, webClientId);
	}
	template <typename R = void> R SetAccountName(Il2CppString* accountName) {
		return ((R (*)(TokenClient*, Il2CppString*))(Il2CppBase() + 0x0))(this, accountName);
	}
	template <typename R = void> R AddOauthScopes(Il2CppArray<Il2CppString*>* scopes) {
		return ((R (*)(TokenClient*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, scopes);
	}
	template <typename R = void> R SetHidePopups(bool flag) {
		return ((R (*)(TokenClient*, bool))(Il2CppBase() + 0x0))(this, flag);
	}
	template <typename R = void> R FetchTokens(bool silent, Action1<int32_t>* callback) {
		return ((R (*)(TokenClient*, bool, Action1<int32_t>*))(Il2CppBase() + 0x0))(this, silent, callback);
	}
	template <typename R = void> R RequestPermissions(Il2CppArray<Il2CppString*>* scopes, Action1<GooglePlayGamesBasicApi::SignInStatus>* callback) {
		return ((R (*)(TokenClient*, Il2CppArray<Il2CppString*>*, Action1<GooglePlayGamesBasicApi::SignInStatus>*))(Il2CppBase() + 0x0))(this, scopes, callback);
	}
	template <typename R = bool> R HasPermissions(Il2CppArray<Il2CppString*>* scopes) {
		return ((R (*)(TokenClient*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, scopes);
	}

};

}
