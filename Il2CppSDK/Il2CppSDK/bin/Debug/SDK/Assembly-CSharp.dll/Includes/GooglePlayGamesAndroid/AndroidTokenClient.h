#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidTokenClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidTokenClient"));
	}

	template <typename R = Il2CppString*> static R& HelperFragmentClass() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& requestEmail() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& requestAuthCode() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = bool> R& requestIdToken() {
		return *(R*)((uintptr_t)this + 0x12);
	}
	 Il2CppList<Il2CppString*>*& oauthScopes() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& webClientId() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& forceRefresh() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& hidePopups() {
		return *(R*)((uintptr_t)this + 0x29);
	}
	template <typename R = Il2CppString*> R& accountName() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& account() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& email() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& authCode() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& idToken() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R SetRequestAuthCode(bool flag, bool forceRefresh) {
		return ((R (*)(AndroidTokenClient*, bool, bool))(Il2CppBase() + 0x1887920))(this, flag, forceRefresh);
	}
	template <typename R = void> R SetRequestEmail(bool flag) {
		return ((R (*)(AndroidTokenClient*, bool))(Il2CppBase() + 0x1887934))(this, flag);
	}
	template <typename R = void> R SetRequestIdToken(bool flag) {
		return ((R (*)(AndroidTokenClient*, bool))(Il2CppBase() + 0x1887940))(this, flag);
	}
	template <typename R = void> R SetWebClientId(Il2CppString* webClientId) {
		return ((R (*)(AndroidTokenClient*, Il2CppString*))(Il2CppBase() + 0x188794C))(this, webClientId);
	}
	template <typename R = void> R SetHidePopups(bool flag) {
		return ((R (*)(AndroidTokenClient*, bool))(Il2CppBase() + 0x1887954))(this, flag);
	}
	template <typename R = void> R SetAccountName(Il2CppString* accountName) {
		return ((R (*)(AndroidTokenClient*, Il2CppString*))(Il2CppBase() + 0x1887960))(this, accountName);
	}
	template <typename R = void> R AddOauthScopes(Il2CppArray<Il2CppString*>* scopes) {
		return ((R (*)(AndroidTokenClient*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1887968))(this, scopes);
	}
	template <typename R = void> R Signout() {
		return ((R (*)(AndroidTokenClient*))(Il2CppBase() + 0x1887A34))(this);
	}
	template <typename R = Il2CppString*> R GetEmail() {
		return ((R (*)(AndroidTokenClient*))(Il2CppBase() + 0x1887B94))(this);
	}
	template <typename R = Il2CppString*> R GetAuthCode() {
		return ((R (*)(AndroidTokenClient*))(Il2CppBase() + 0x1887B9C))(this);
	}
	template <typename R = Il2CppString*> R GetIdToken() {
		return ((R (*)(AndroidTokenClient*))(Il2CppBase() + 0x1887BA4))(this);
	}
	template <typename R = void> R FetchTokens(bool silent, Action1int32_t>* callback) {
		return ((R (*)(AndroidTokenClient*, bool, Action1int32_t>*))(Il2CppBase() + 0x1887BAC))(this, silent, callback);
	}
	template <typename R = void> R RequestPermissions(Il2CppArray<Il2CppString*>* scopes, Action1GooglePlayGamesBasicApi::SignInStatus*>* callback) {
		return ((R (*)(AndroidTokenClient*, Il2CppArray<Il2CppString*>*, Action1GooglePlayGamesBasicApi::SignInStatus*>*))(Il2CppBase() + 0x1887CBC))(this, scopes, callback);
	}
	template <typename R = bool> R HasPermissions(Il2CppArray<Il2CppString*>* scopes) {
		return ((R (*)(AndroidTokenClient*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1888208))(this, scopes);
	}
	template <typename R = void> R DoFetchToken(bool silent, Action1int32_t>* callback) {
		return ((R (*)(AndroidTokenClient*, bool, Action1int32_t>*))(Il2CppBase() + 0x188854C))(this, silent, callback);
	}
	template <typename R = uintptr_t> R GetAccount() {
		return ((R (*)(AndroidTokenClient*))(Il2CppBase() + 0x1888FC8))(this);
	}
	template <typename R = void> R GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, Action1Il2CppString*>* callback) {
		return ((R (*)(AndroidTokenClient*, bool, Action1Il2CppString*>*))(Il2CppBase() + 0x1888FD0))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename R = void> R DoGetAnotherServerAuthCode(bool reAuthenticateIfNeeded, Action1Il2CppString*>* callback) {
		return ((R (*)(AndroidTokenClient*, bool, Action1Il2CppString*>*))(Il2CppBase() + 0x18890E0))(this, reAuthenticateIfNeeded, callback);
	}

};

}
