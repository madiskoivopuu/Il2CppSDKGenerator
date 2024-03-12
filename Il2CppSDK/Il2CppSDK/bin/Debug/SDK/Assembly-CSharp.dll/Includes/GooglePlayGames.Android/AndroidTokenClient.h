#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidTokenClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidTokenClient"));
	}

	template <typename T = Il2CppString*> static T& HelperFragmentClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& requestEmail() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& requestAuthCode() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& requestIdToken() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& oauthScopes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& webClientId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& forceRefresh() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& hidePopups() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = Il2CppString*> T& accountName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& account() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& email() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& authCode() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& idToken() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T SetRequestAuthCode(bool flag, bool forceRefresh) {
		return ((T (*)(AndroidTokenClient*, bool, bool))(Il2CppBase() + 0x1887920))(this, flag, forceRefresh);
	}
	template <typename T = void> T SetRequestEmail(bool flag) {
		return ((T (*)(AndroidTokenClient*, bool))(Il2CppBase() + 0x1887934))(this, flag);
	}
	template <typename T = void> T SetRequestIdToken(bool flag) {
		return ((T (*)(AndroidTokenClient*, bool))(Il2CppBase() + 0x1887940))(this, flag);
	}
	template <typename T = void> T SetWebClientId(Il2CppString* webClientId) {
		return ((T (*)(AndroidTokenClient*, Il2CppString*))(Il2CppBase() + 0x188794C))(this, webClientId);
	}
	template <typename T = void> T SetHidePopups(bool flag) {
		return ((T (*)(AndroidTokenClient*, bool))(Il2CppBase() + 0x1887954))(this, flag);
	}
	template <typename T = void> T SetAccountName(Il2CppString* accountName) {
		return ((T (*)(AndroidTokenClient*, Il2CppString*))(Il2CppBase() + 0x1887960))(this, accountName);
	}
	template <typename T = void> T AddOauthScopes(Il2CppArray<uintptr_t>* scopes) {
		return ((T (*)(AndroidTokenClient*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1887968))(this, scopes);
	}
	template <typename T = void> T Signout() {
		return ((T (*)(AndroidTokenClient*))(Il2CppBase() + 0x1887A34))(this);
	}
	template <typename T = Il2CppString*> T GetEmail() {
		return ((T (*)(AndroidTokenClient*))(Il2CppBase() + 0x1887B94))(this);
	}
	template <typename T = Il2CppString*> T GetAuthCode() {
		return ((T (*)(AndroidTokenClient*))(Il2CppBase() + 0x1887B9C))(this);
	}
	template <typename T = Il2CppString*> T GetIdToken() {
		return ((T (*)(AndroidTokenClient*))(Il2CppBase() + 0x1887BA4))(this);
	}
	template <typename T = void> T FetchTokens(bool silent, void* callback) {
		return ((T (*)(AndroidTokenClient*, bool, void*))(Il2CppBase() + 0x1887BAC))(this, silent, callback);
	}
	template <typename T = void> T RequestPermissions(Il2CppArray<uintptr_t>* scopes, void* callback) {
		return ((T (*)(AndroidTokenClient*, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x1887CBC))(this, scopes, callback);
	}
	template <typename T = bool> T HasPermissions(Il2CppArray<uintptr_t>* scopes) {
		return ((T (*)(AndroidTokenClient*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1888208))(this, scopes);
	}
	template <typename T = void> T DoFetchToken(bool silent, void* callback) {
		return ((T (*)(AndroidTokenClient*, bool, void*))(Il2CppBase() + 0x188854C))(this, silent, callback);
	}
	template <typename T = uintptr_t> T GetAccount() {
		return ((T (*)(AndroidTokenClient*))(Il2CppBase() + 0x1888FC8))(this);
	}
	template <typename T = void> T GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, void* callback) {
		return ((T (*)(AndroidTokenClient*, bool, void*))(Il2CppBase() + 0x1888FD0))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename T = void> T DoGetAnotherServerAuthCode(bool reAuthenticateIfNeeded, void* callback) {
		return ((T (*)(AndroidTokenClient*, bool, void*))(Il2CppBase() + 0x18890E0))(this, reAuthenticateIfNeeded, callback);
	}

};

}
