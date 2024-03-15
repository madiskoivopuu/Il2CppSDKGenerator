#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftSdk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftSdk"));
	}

	template <typename R = Il2CppString*> static R& PLUGIN_VERSION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ENABLE_LOGGING() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ENABLE_INAPP_NOTIFICATION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SCREEN_ORIENTATION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& NOTIFICATION_SOUND_ID() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& NOTIFICATION_CHANNEL_ID() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& NOTIFICATION_ICON() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& NOTIFICATION_LARGE_ICON() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Helpshift::HelpshiftSdk*> static R& instance() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Helpshift::HelpshiftXAndroid*> static R& nativeSdk() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = Helpshift::HelpshiftSdk*> static R GetInstance() {
		return ((R (*)(void *))(Il2CppBase() + 0x128E2DC))(0);
	}
	template <typename R = void> R Install(Il2CppString* appId, Il2CppString* domainName, Il2CppDictionary<Il2CppString*, Il2CppObject*>* config) {
		return ((R (*)(HelpshiftSdk*, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x128E4B4))(this, appId, domainName, config);
	}
	template <typename R = void> R Login(Il2CppDictionary<Il2CppString*, Il2CppString*>* userData) {
		return ((R (*)(HelpshiftSdk*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x128F67C))(this, userData);
	}
	template <typename R = void> R HandleProactiveLink(Il2CppString* proactiveLink) {
		return ((R (*)(HelpshiftSdk*, Il2CppString*))(Il2CppBase() + 0x128F244))(this, proactiveLink);
	}
	template <typename R = void> R SetHelpshiftProactiveConfigCollector(Helpshift::IHelpshiftProactiveAPIConfigCollector* eventsListener) {
		return ((R (*)(HelpshiftSdk*, Helpshift::IHelpshiftProactiveAPIConfigCollector*))(Il2CppBase() + 0x128E6B4))(this, eventsListener);
	}
	template <typename R = void> R ClearAnonymousUserOnLogin() {
		return ((R (*)(HelpshiftSdk*))(Il2CppBase() + 0x1290C40))(this);
	}
	template <typename R = void> R ClearAnonymousUserOnLogin_1(bool shouldClear) {
		return ((R (*)(HelpshiftSdk*, bool))(Il2CppBase() + 0x128F33C))(this, shouldClear);
	}
	template <typename R = void> R AddUserTrail(Il2CppString* trail) {
		return ((R (*)(HelpshiftSdk*, Il2CppString*))(Il2CppBase() + 0x128F114))(this, trail);
	}
	template <typename R = void> R Logout() {
		return ((R (*)(HelpshiftSdk*))(Il2CppBase() + 0x128F778))(this);
	}
	template <typename R = void> R RegisterPushToken(Il2CppString* token) {
		return ((R (*)(HelpshiftSdk*, Il2CppString*))(Il2CppBase() + 0x12910B0))(this, token);
	}
	template <typename R = void> R ShowConversation(Il2CppDictionary<Il2CppString*, Il2CppObject*>* configMap) {
		return ((R (*)(HelpshiftSdk*, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x128E978))(this, configMap);
	}
	template <typename R = void> R ShowFAQs(Il2CppDictionary<Il2CppString*, Il2CppObject*>* configMap) {
		return ((R (*)(HelpshiftSdk*, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x128EA7C))(this, configMap);
	}
	template <typename R = void> R ShowSingleFAQ(Il2CppString* faqId, Il2CppDictionary<Il2CppString*, Il2CppObject*>* configMap) {
		return ((R (*)(HelpshiftSdk*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x128F00C))(this, faqId, configMap);
	}
	template <typename R = void> R ShowFAQSection(Il2CppString* sectionId, Il2CppDictionary<Il2CppString*, Il2CppObject*>* configMap) {
		return ((R (*)(HelpshiftSdk*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x128ED3C))(this, sectionId, configMap);
	}
	template <typename R = void> R RequestUnreadMessageCount(bool shouldFetchFromServer) {
		return ((R (*)(HelpshiftSdk*, bool))(Il2CppBase() + 0x128F43C))(this, shouldFetchFromServer);
	}
	template <typename R = void> R HandlePushNotification(Il2CppDictionary<Il2CppString*, Il2CppObject*>* pushNotificationData) {
		return ((R (*)(HelpshiftSdk*, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x1291A8C))(this, pushNotificationData);
	}
	template <typename R = void> R SetSDKLanguage(Il2CppString* locale) {
		return ((R (*)(HelpshiftSdk*, Il2CppString*))(Il2CppBase() + 0x1291EF4))(this, locale);
	}
	template <typename R = void> R LeaveBreadcrumb(Il2CppString* breadcrumb) {
		return ((R (*)(HelpshiftSdk*, Il2CppString*))(Il2CppBase() + 0x12920A4))(this, breadcrumb);
	}
	template <typename R = void> R ClearBreadcrumbs() {
		return ((R (*)(HelpshiftSdk*))(Il2CppBase() + 0x1292254))(this);
	}
	template <typename R = void> R SetHelpshiftEventsListener(Helpshift::IHelpshiftEventsListener* eventsListener) {
		return ((R (*)(HelpshiftSdk*, Helpshift::IHelpshiftEventsListener*))(Il2CppBase() + 0x128E640))(this, eventsListener);
	}

};

}
