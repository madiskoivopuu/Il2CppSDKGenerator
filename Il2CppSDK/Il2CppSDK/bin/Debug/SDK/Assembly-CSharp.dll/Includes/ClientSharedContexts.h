#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientSharedContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientSharedContexts"));
	}

	template <typename R = TempBuffDataContext*> R& tempBuff() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ServerInfoContext*> R& serverInfo() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ChatContext*> R& chat() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = ContactsContext*> R& contacts() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = AnalyticsContext*> R& analytics() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = NotificationContext*> R& notification() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = TempBuffDataContext*> R get_tempBuff() {
		return ((R (*)(ClientSharedContexts*))(Il2CppBase() + 0xE1D558))(this);
	}
	template <typename R = void> R set_tempBuff(TempBuffDataContext* value) {
		return ((R (*)(ClientSharedContexts*, TempBuffDataContext*))(Il2CppBase() + 0xE1D560))(this, value);
	}
	template <typename R = ServerInfoContext*> R get_serverInfo() {
		return ((R (*)(ClientSharedContexts*))(Il2CppBase() + 0xE1D568))(this);
	}
	template <typename R = void> R set_serverInfo(ServerInfoContext* value) {
		return ((R (*)(ClientSharedContexts*, ServerInfoContext*))(Il2CppBase() + 0xE1D570))(this, value);
	}
	template <typename R = ChatContext*> R get_chat() {
		return ((R (*)(ClientSharedContexts*))(Il2CppBase() + 0xE1D578))(this);
	}
	template <typename R = void> R set_chat(ChatContext* value) {
		return ((R (*)(ClientSharedContexts*, ChatContext*))(Il2CppBase() + 0xE1D580))(this, value);
	}
	template <typename R = ContactsContext*> R get_contacts() {
		return ((R (*)(ClientSharedContexts*))(Il2CppBase() + 0xE1D588))(this);
	}
	template <typename R = void> R set_contacts(ContactsContext* value) {
		return ((R (*)(ClientSharedContexts*, ContactsContext*))(Il2CppBase() + 0xE1D590))(this, value);
	}
	template <typename R = AnalyticsContext*> R get_analytics() {
		return ((R (*)(ClientSharedContexts*))(Il2CppBase() + 0xE1D598))(this);
	}
	template <typename R = void> R set_analytics(AnalyticsContext* value) {
		return ((R (*)(ClientSharedContexts*, AnalyticsContext*))(Il2CppBase() + 0xE1D5A0))(this, value);
	}
	template <typename R = NotificationContext*> R get_notification() {
		return ((R (*)(ClientSharedContexts*))(Il2CppBase() + 0xE1D5A8))(this);
	}
	template <typename R = void> R set_notification(NotificationContext* value) {
		return ((R (*)(ClientSharedContexts*, NotificationContext*))(Il2CppBase() + 0xE1D5B0))(this, value);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R get_allContexts() {
		return ((R (*)(ClientSharedContexts*))(Il2CppBase() + 0xE1D5B8))(this);
	}
	template <typename R = void> R ClearContexts() {
		return ((R (*)(ClientSharedContexts*))(Il2CppBase() + 0xE1D95C))(this);
	}

};

