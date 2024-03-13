#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HelpshiftExample {

class HelpshiftExampleScript
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HelpshiftExample", "HelpshiftExampleScript"));
	}

	template <typename T = HelpshiftSdk*> T& _helpshiftX() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128E15C))(this);
	}
	template <typename T = void> T ShowConversation() {
		return ((T (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128E728))(this);
	}
	template <typename T = void> T ShowFAQs() {
		return ((T (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128E9EC))(this);
	}
	template <typename T = void> T ShowFAQSection() {
		return ((T (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128EAF0))(this);
	}
	template <typename T = void> T ShowSingleFAQ() {
		return ((T (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128EDC0))(this);
	}
	template <typename T = void> T AddUserTrail() {
		return ((T (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128F090))(this);
	}
	template <typename T = void> T HandleProactiveLink() {
		return ((T (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128F188))(this);
	}
	template <typename T = void> T checkAnonUser() {
		return ((T (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128F2B8))(this);
	}
	template <typename T = void> T RequestUnreadCount() {
		return ((T (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128F3B0))(this);
	}
	template <typename T = void> T Login() {
		return ((T (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128F4B0))(this);
	}
	template <typename T = void> T Logout() {
		return ((T (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128F6F0))(this);
	}
	template <typename T = void> T CustomizedApi() {
		return ((T (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128F7E4))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetUserDetails() {
		return ((T (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128F540))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppObject*>*> T GetConversationConfig() {
		return ((T (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128E7B8))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppObject*>*> static T GetCifs() {
		return ((T (*)(void *))(Il2CppBase() + 0x128F858))(0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppObject*>*> T GetInstallConfig() {
		return ((T (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128E3DC))(this);
	}

};

}
