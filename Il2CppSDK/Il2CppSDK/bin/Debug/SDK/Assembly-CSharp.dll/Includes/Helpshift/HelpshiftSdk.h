#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftSdk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftSdk"));
	}

	template <typename T = Il2CppString*> static T& PLUGIN_VERSION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ENABLE_LOGGING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ENABLE_INAPP_NOTIFICATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SCREEN_ORIENTATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& NOTIFICATION_SOUND_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& NOTIFICATION_CHANNEL_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& NOTIFICATION_ICON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& NOTIFICATION_LARGE_ICON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& nativeSdk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x128E2DC))(0);
	}
	template <typename T = void> T Install(Il2CppString* appId, Il2CppString* domainName, Il2CppDictionary<Il2CppString*, uintptr_t>* config) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x128E4B4))(this, appId, domainName, config);
	}
	template <typename T = void> T Login(Il2CppDictionary<Il2CppString*, Il2CppString*>* userData) {
		return ((T (*)(HelpshiftSdk*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x128F67C))(this, userData);
	}
	template <typename T = void> T HandleProactiveLink(Il2CppString* proactiveLink) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*))(Il2CppBase() + 0x128F244))(this, proactiveLink);
	}
	template <typename T = void> T SetHelpshiftProactiveConfigCollector(uintptr_t eventsListener) {
		return ((T (*)(HelpshiftSdk*, uintptr_t))(Il2CppBase() + 0x128E6B4))(this, eventsListener);
	}
	template <typename T = void> T ClearAnonymousUserOnLogin() {
		return ((T (*)(HelpshiftSdk*))(Il2CppBase() + 0x1290C40))(this);
	}
	template <typename T = void> T ClearAnonymousUserOnLogin_1(bool shouldClear) {
		return ((T (*)(HelpshiftSdk*, bool))(Il2CppBase() + 0x128F33C))(this, shouldClear);
	}
	template <typename T = void> T AddUserTrail(Il2CppString* trail) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*))(Il2CppBase() + 0x128F114))(this, trail);
	}
	template <typename T = void> T Logout() {
		return ((T (*)(HelpshiftSdk*))(Il2CppBase() + 0x128F778))(this);
	}
	template <typename T = void> T RegisterPushToken(Il2CppString* token) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*))(Il2CppBase() + 0x12910B0))(this, token);
	}
	template <typename T = void> T ShowConversation(Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftSdk*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x128E978))(this, configMap);
	}
	template <typename T = void> T ShowFAQs(Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftSdk*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x128EA7C))(this, configMap);
	}
	template <typename T = void> T ShowSingleFAQ(Il2CppString* faqId, Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x128F00C))(this, faqId, configMap);
	}
	template <typename T = void> T ShowFAQSection(Il2CppString* sectionId, Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x128ED3C))(this, sectionId, configMap);
	}
	template <typename T = void> T RequestUnreadMessageCount(bool shouldFetchFromServer) {
		return ((T (*)(HelpshiftSdk*, bool))(Il2CppBase() + 0x128F43C))(this, shouldFetchFromServer);
	}
	template <typename T = void> T HandlePushNotification(Il2CppDictionary<Il2CppString*, uintptr_t>* pushNotificationData) {
		return ((T (*)(HelpshiftSdk*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1291A8C))(this, pushNotificationData);
	}
	template <typename T = void> T SetSDKLanguage(Il2CppString* locale) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*))(Il2CppBase() + 0x1291EF4))(this, locale);
	}
	template <typename T = void> T LeaveBreadcrumb(Il2CppString* breadcrumb) {
		return ((T (*)(HelpshiftSdk*, Il2CppString*))(Il2CppBase() + 0x12920A4))(this, breadcrumb);
	}
	template <typename T = void> T ClearBreadcrumbs() {
		return ((T (*)(HelpshiftSdk*))(Il2CppBase() + 0x1292254))(this);
	}
	template <typename T = void> T SetHelpshiftEventsListener(uintptr_t eventsListener) {
		return ((T (*)(HelpshiftSdk*, uintptr_t))(Il2CppBase() + 0x128E640))(this, eventsListener);
	}

};

}
