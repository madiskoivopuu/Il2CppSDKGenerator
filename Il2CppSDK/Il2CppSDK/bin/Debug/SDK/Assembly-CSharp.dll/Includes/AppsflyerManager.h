#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AppsflyerManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AppsflyerManager"));
	}

	template <typename R = AppsflyerManager*> static R& _instance() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& isInit() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = Il2CppString*> static R& CoversionData() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = bool> static R& IsConversionReceived() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = Il2CppString*> static R& OpenUrlData() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = bool> static R& IsAttributionReceived() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = Il2CppString*> static R& DEVKEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& APPID() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& INVITEID() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& GAMEINVITEID() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& OPEN_STORE_WINDOW_EVENT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& OPEN_SEASON_WINDOW_EVENT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ReferralId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = Il2CppString*> static R& DeepLinkEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = NativeTextShare*> R& _textShare() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ICommonLogger*> R& _logger() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = AppsflyerManager*> static R get_Instance() {
		return ((R (*)(void *))(Il2CppBase() + 0x18959B0))(0);
	}
	template <typename R = bool> static R get_IsStartDataReceived() {
		return ((R (*)(void *))(Il2CppBase() + 0x1895EAC))(0);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(AppsflyerManager*))(Il2CppBase() + 0x1895F44))(this);
	}
	template <typename R = void> R Initialize() {
		return ((R (*)(AppsflyerManager*))(Il2CppBase() + 0x1895C60))(this);
	}
	template <typename R = void> R SetCustomerPlayerID(Il2CppString* uniquePlayerId) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1895FF0))(this, uniquePlayerId);
	}
	template <typename R = void> R ShareUserInvite(int64_t userId) {
		return ((R (*)(AppsflyerManager*, int64_t))(Il2CppBase() + 0x18960A0))(this, userId);
	}
	template <typename R = void> R ShareGameInvite() {
		return ((R (*)(AppsflyerManager*))(Il2CppBase() + 0x1896200))(this);
	}
	template <typename R = void> R UpdateServerUninstallToken(Il2CppString* token) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x189631C))(this, token);
	}
	template <typename R = void> R onClanInviteLinkGenerated(Il2CppString* link) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1896380))(this, link);
	}
	template <typename R = void> R onClanInviteLinkFailed(Il2CppString* error) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1896574))(this, error);
	}
	template <typename R = void> R onGameInviteLinkGenerated(Il2CppString* link) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x18965F8))(this, link);
	}
	template <typename R = void> R onGameInviteLinkFailed(Il2CppString* error) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x18967EC))(this, error);
	}
	template <typename R = void> R onAppOpenAttribution(Il2CppString* validateResult) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1896870))(this, validateResult);
	}
	template <typename R = void> R onAppOpenAttributionFailure(Il2CppString* error) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1896AF4))(this, error);
	}
	template <typename R = void> R onConversionDataSuccess(Il2CppString* conversionData) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1896BC8))(this, conversionData);
	}
	template <typename R = void> R onConversionDataFail(Il2CppString* error) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1896D70))(this, error);
	}
	template <typename R = void> R onDeepLinking(Il2CppString* response) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1896E44))(this, response);
	}
	template <typename R = void> R didFinishValidateReceipt(Il2CppString* validateResult) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x1897048))(this, validateResult);
	}
	template <typename R = void> R didFinishValidateReceiptWithError(Il2CppString* error) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x18970E8))(this, error);
	}
	template <typename R = void> R onInAppBillingSuccess() {
		return ((R (*)(AppsflyerManager*))(Il2CppBase() + 0x1897170))(this);
	}
	template <typename R = void> R onInAppBillingFailure(Il2CppString* error) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x18971D4))(this, error);
	}
	template <typename R = void> R onInviteLinkGenerated(Il2CppString* link) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x189725C))(this, link);
	}
	template <typename R = void> R onOpenStoreLinkGenerated(Il2CppString* link) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x18972E4))(this, link);
	}
	template <typename R = void> R printCallback(Il2CppString* str) {
		return ((R (*)(AppsflyerManager*, Il2CppString*))(Il2CppBase() + 0x18970D0))(this, str);
	}

};

