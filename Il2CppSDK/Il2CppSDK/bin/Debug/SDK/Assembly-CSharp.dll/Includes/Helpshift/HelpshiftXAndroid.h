#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftXAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftXAndroid"));
	}

	template <typename T = uintptr_t> T& jc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& currentActivity() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& application() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& hsUnityApiClass() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Install(Il2CppString* appId, Il2CppString* domain, Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftXAndroid*, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1290498))(this, appId, domain, configMap);
	}
	template <typename T = void> T RegisterPushToken(Il2CppString* deviceToken) {
		return ((T (*)(HelpshiftXAndroid*, Il2CppString*))(Il2CppBase() + 0x1291124))(this, deviceToken);
	}
	template <typename T = void> T Login(Il2CppDictionary<Il2CppString*, Il2CppString*>* userData) {
		return ((T (*)(HelpshiftXAndroid*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x129082C))(this, userData);
	}
	template <typename T = void> T ClearAnonymousUserOnLogin(bool shouldClear) {
		return ((T (*)(HelpshiftXAndroid*, bool))(Il2CppBase() + 0x1290CB0))(this, shouldClear);
	}
	template <typename T = void> T AddUserTrail(Il2CppString* trail) {
		return ((T (*)(HelpshiftXAndroid*, Il2CppString*))(Il2CppBase() + 0x1290E30))(this, trail);
	}
	template <typename T = void> T Logout() {
		return ((T (*)(HelpshiftXAndroid*))(Il2CppBase() + 0x1290F6C))(this);
	}
	template <typename T = void> T HandleProactiveLink(Il2CppString* proactiveLink) {
		return ((T (*)(HelpshiftXAndroid*, Il2CppString*))(Il2CppBase() + 0x12909D0))(this, proactiveLink);
	}
	template <typename T = void> T SetHelpshiftProactiveConfigCollector(uintptr_t eventsListener) {
		return ((T (*)(HelpshiftXAndroid*, uintptr_t))(Il2CppBase() + 0x1290AF4))(this, eventsListener);
	}
	template <typename T = Il2CppString*> T SerializeMap(Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftXAndroid*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1292554))(this, configMap);
	}
	template <typename T = void> T ShowConversation(Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftXAndroid*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1291260))(this, configMap);
	}
	template <typename T = void> T ShowFAQs(Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftXAndroid*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x12913E4))(this, configMap);
	}
	template <typename T = void> T ShowSingleFAQ(Il2CppString* faqId, Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftXAndroid*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1291584))(this, faqId, configMap);
	}
	template <typename T = void> T ShowFAQSection(Il2CppString* sectionId, Il2CppDictionary<Il2CppString*, uintptr_t>* configMap) {
		return ((T (*)(HelpshiftXAndroid*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1291748))(this, sectionId, configMap);
	}
	template <typename T = void> T RequestUnreadMessageCount(bool shouldFetchFromServer) {
		return ((T (*)(HelpshiftXAndroid*, bool))(Il2CppBase() + 0x129190C))(this, shouldFetchFromServer);
	}
	template <typename T = void> T HandlePushNotification(Il2CppDictionary<Il2CppString*, uintptr_t>* pushNotificationData) {
		return ((T (*)(HelpshiftXAndroid*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1291DA8))(this, pushNotificationData);
	}
	template <typename T = void> T SetHelpshiftEventsListener(uintptr_t eventsListener) {
		return ((T (*)(HelpshiftXAndroid*, uintptr_t))(Il2CppBase() + 0x1292404))(this, eventsListener);
	}
	template <typename T = void> T SetSDKLanguage(Il2CppString* locale) {
		return ((T (*)(HelpshiftXAndroid*, Il2CppString*))(Il2CppBase() + 0x1291F68))(this, locale);
	}
	template <typename T = void> T LeaveBreadcrumb(Il2CppString* breadcrumb) {
		return ((T (*)(HelpshiftXAndroid*, Il2CppString*))(Il2CppBase() + 0x1292118))(this, breadcrumb);
	}
	template <typename T = void> T ClearBreadcrumbs() {
		return ((T (*)(HelpshiftXAndroid*))(Il2CppBase() + 0x12922C0))(this);
	}

};

}
