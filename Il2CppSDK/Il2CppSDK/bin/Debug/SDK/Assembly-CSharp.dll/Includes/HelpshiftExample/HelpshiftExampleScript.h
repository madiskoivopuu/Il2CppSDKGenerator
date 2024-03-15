#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HelpshiftExample {

class HelpshiftExampleScript
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HelpshiftExample", "HelpshiftExampleScript"));
	}

	template <typename R = Helpshift::HelpshiftSdk*> R& _helpshiftX() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128E15C))(this);
	}
	template <typename R = void> R ShowConversation() {
		return ((R (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128E728))(this);
	}
	template <typename R = void> R ShowFAQs() {
		return ((R (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128E9EC))(this);
	}
	template <typename R = void> R ShowFAQSection() {
		return ((R (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128EAF0))(this);
	}
	template <typename R = void> R ShowSingleFAQ() {
		return ((R (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128EDC0))(this);
	}
	template <typename R = void> R AddUserTrail() {
		return ((R (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128F090))(this);
	}
	template <typename R = void> R HandleProactiveLink() {
		return ((R (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128F188))(this);
	}
	template <typename R = void> R checkAnonUser() {
		return ((R (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128F2B8))(this);
	}
	template <typename R = void> R RequestUnreadCount() {
		return ((R (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128F3B0))(this);
	}
	template <typename R = void> R Login() {
		return ((R (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128F4B0))(this);
	}
	template <typename R = void> R Logout() {
		return ((R (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128F6F0))(this);
	}
	template <typename R = void> R CustomizedApi() {
		return ((R (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128F7E4))(this);
	}
	 Il2CppDictionary<Il2CppString*, Il2CppString*>* GetUserDetails() {
		return ((Il2CppDictionary<Il2CppString*, Il2CppString*>* (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128F540))(this);
	}
	 Il2CppDictionary<Il2CppString*, Il2CppObject*>* GetConversationConfig() {
		return ((Il2CppDictionary<Il2CppString*, Il2CppObject*>* (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128E7B8))(this);
	}
	 static Il2CppDictionary<Il2CppString*, Il2CppObject*>* GetCifs() {
		return ((Il2CppDictionary<Il2CppString*, Il2CppObject*>* (*)(void *))(Il2CppBase() + 0x128F858))(0);
	}
	 Il2CppDictionary<Il2CppString*, Il2CppObject*>* GetInstallConfig() {
		return ((Il2CppDictionary<Il2CppString*, Il2CppObject*>* (*)(HelpshiftExampleScript*))(Il2CppBase() + 0x128E3DC))(this);
	}

};

}
