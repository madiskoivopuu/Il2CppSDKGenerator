#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AppsflyerManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AppsflyerManager"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& isInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& CoversionData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& IsConversionReceived() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& OpenUrlData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = bool> static T& IsAttributionReceived() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& DEVKEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APPID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& INVITEID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GAMEINVITEID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_STORE_WINDOW_EVENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_SEASON_WINDOW_EVENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ReferralId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppString*> static T& DeepLinkEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> T& _textShare() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _logger() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x18959B0))(0);
	}
	template <typename T = bool> static T get_IsStartDataReceived() {
		return ((T (*)(void *))(Il2CppBase() + 0x1895EAC))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AppsflyerManager*))(Il2CppBase() + 0x1895F44))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(AppsflyerManager*))(Il2CppBase() + 0x1895C60))(this);
	}
	template <typename T = void> T SetCustomerPlayerID(Il2CppString* uniquePlayerId) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1895FF0))(this, uniquePlayerId);
	}
	template <typename T = void> T ShareUserInvite(int64_t userId) {
		return ((T (*)(AppsflyerManager*, int64_t))(Il2CppBase() + 0x18960A0))(this, userId);
	}
	template <typename T = void> T ShareGameInvite() {
		return ((T (*)(AppsflyerManager*))(Il2CppBase() + 0x1896200))(this);
	}
	template <typename T = void> T UpdateServerUninstallToken(Il2CppString* token) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x189631C))(this, token);
	}
	template <typename T = void> T onClanInviteLinkGenerated(Il2CppString* link) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1896380))(this, link);
	}
	template <typename T = void> T onClanInviteLinkFailed(Il2CppString* error) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1896574))(this, error);
	}
	template <typename T = void> T onGameInviteLinkGenerated(Il2CppString* link) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x18965F8))(this, link);
	}
	template <typename T = void> T onGameInviteLinkFailed(Il2CppString* error) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x18967EC))(this, error);
	}
	template <typename T = void> T onAppOpenAttribution(Il2CppString* validateResult) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1896870))(this, validateResult);
	}
	template <typename T = void> T onAppOpenAttributionFailure(Il2CppString* error) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1896AF4))(this, error);
	}
	template <typename T = void> T onConversionDataSuccess(Il2CppString* conversionData) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1896BC8))(this, conversionData);
	}
	template <typename T = void> T onConversionDataFail(Il2CppString* error) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1896D70))(this, error);
	}
	template <typename T = void> T onDeepLinking(Il2CppString* response) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1896E44))(this, response);
	}
	template <typename T = void> T didFinishValidateReceipt(Il2CppString* validateResult) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1897048))(this, validateResult);
	}
	template <typename T = void> T didFinishValidateReceiptWithError(Il2CppString* error) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x18970E8))(this, error);
	}
	template <typename T = void> T onInAppBillingSuccess() {
		return ((T (*)(AppsflyerManager*))(Il2CppBase() + 0x1897170))(this);
	}
	template <typename T = void> T onInAppBillingFailure(Il2CppString* error) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x18971D4))(this, error);
	}
	template <typename T = void> T onInviteLinkGenerated(Il2CppString* link) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x189725C))(this, link);
	}
	template <typename T = void> T onOpenStoreLinkGenerated(Il2CppString* link) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x18972E4))(this, link);
	}
	template <typename T = void> T printCallback(Il2CppString* str) {
		return ((T (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x18970D0))(this, str);
	}

};

}
