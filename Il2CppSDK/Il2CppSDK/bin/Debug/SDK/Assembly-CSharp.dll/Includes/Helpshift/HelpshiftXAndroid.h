#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftXAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftXAndroid"));
	}

	template <typename R = uintptr_t> R& jc() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& currentActivity() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& application() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& hsUnityApiClass() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Install(Il2CppString* appId, Il2CppString* domain, Il2CppDictionary<Il2CppString*, Il2CppObject*>* configMap) {
		return ((R (*)(HelpshiftXAndroid*, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x1290498))(this, appId, domain, configMap);
	}
	template <typename R = void> R RegisterPushToken(Il2CppString* deviceToken) {
		return ((R (*)(HelpshiftXAndroid*, Il2CppString*))(Il2CppBase() + 0x1291124))(this, deviceToken);
	}
	template <typename R = void> R Login(Il2CppDictionary<Il2CppString*, Il2CppString*>* userData) {
		return ((R (*)(HelpshiftXAndroid*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x129082C))(this, userData);
	}
	template <typename R = void> R ClearAnonymousUserOnLogin(bool shouldClear) {
		return ((R (*)(HelpshiftXAndroid*, bool))(Il2CppBase() + 0x1290CB0))(this, shouldClear);
	}
	template <typename R = void> R AddUserTrail(Il2CppString* trail) {
		return ((R (*)(HelpshiftXAndroid*, Il2CppString*))(Il2CppBase() + 0x1290E30))(this, trail);
	}
	template <typename R = void> R Logout() {
		return ((R (*)(HelpshiftXAndroid*))(Il2CppBase() + 0x1290F6C))(this);
	}
	template <typename R = void> R HandleProactiveLink(Il2CppString* proactiveLink) {
		return ((R (*)(HelpshiftXAndroid*, Il2CppString*))(Il2CppBase() + 0x12909D0))(this, proactiveLink);
	}
	template <typename R = void> R SetHelpshiftProactiveConfigCollector(Helpshift::IHelpshiftProactiveAPIConfigCollector* eventsListener) {
		return ((R (*)(HelpshiftXAndroid*, Helpshift::IHelpshiftProactiveAPIConfigCollector*))(Il2CppBase() + 0x1290AF4))(this, eventsListener);
	}
	template <typename R = Il2CppString*> R SerializeMap(Il2CppDictionary<Il2CppString*, Il2CppObject*>* configMap) {
		return ((R (*)(HelpshiftXAndroid*, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x1292554))(this, configMap);
	}
	template <typename R = void> R ShowConversation(Il2CppDictionary<Il2CppString*, Il2CppObject*>* configMap) {
		return ((R (*)(HelpshiftXAndroid*, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x1291260))(this, configMap);
	}
	template <typename R = void> R ShowFAQs(Il2CppDictionary<Il2CppString*, Il2CppObject*>* configMap) {
		return ((R (*)(HelpshiftXAndroid*, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x12913E4))(this, configMap);
	}
	template <typename R = void> R ShowSingleFAQ(Il2CppString* faqId, Il2CppDictionary<Il2CppString*, Il2CppObject*>* configMap) {
		return ((R (*)(HelpshiftXAndroid*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x1291584))(this, faqId, configMap);
	}
	template <typename R = void> R ShowFAQSection(Il2CppString* sectionId, Il2CppDictionary<Il2CppString*, Il2CppObject*>* configMap) {
		return ((R (*)(HelpshiftXAndroid*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x1291748))(this, sectionId, configMap);
	}
	template <typename R = void> R RequestUnreadMessageCount(bool shouldFetchFromServer) {
		return ((R (*)(HelpshiftXAndroid*, bool))(Il2CppBase() + 0x129190C))(this, shouldFetchFromServer);
	}
	template <typename R = void> R HandlePushNotification(Il2CppDictionary<Il2CppString*, Il2CppObject*>* pushNotificationData) {
		return ((R (*)(HelpshiftXAndroid*, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x1291DA8))(this, pushNotificationData);
	}
	template <typename R = void> R SetHelpshiftEventsListener(Helpshift::IHelpshiftEventsListener* eventsListener) {
		return ((R (*)(HelpshiftXAndroid*, Helpshift::IHelpshiftEventsListener*))(Il2CppBase() + 0x1292404))(this, eventsListener);
	}
	template <typename R = void> R SetSDKLanguage(Il2CppString* locale) {
		return ((R (*)(HelpshiftXAndroid*, Il2CppString*))(Il2CppBase() + 0x1291F68))(this, locale);
	}
	template <typename R = void> R LeaveBreadcrumb(Il2CppString* breadcrumb) {
		return ((R (*)(HelpshiftXAndroid*, Il2CppString*))(Il2CppBase() + 0x1292118))(this, breadcrumb);
	}
	template <typename R = void> R ClearBreadcrumbs() {
		return ((R (*)(HelpshiftXAndroid*))(Il2CppBase() + 0x12922C0))(this);
	}

};

}
