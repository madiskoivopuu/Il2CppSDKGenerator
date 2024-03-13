#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContactsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactsHelper"));
	}


	template <typename T = ContactsEntity*> static T AddContact(ContactsContext* context, Il2CppString* jid, Il2CppString* playerName, bool isSubscribed, int64_t time, Il2CppArray<uintptr_t>* groups) {
		return ((T (*)(void *, ContactsContext*, Il2CppString*, Il2CppString*, bool, int64_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15EEC7C))(0, context, jid, playerName, isSubscribed, time, groups);
	}
	template <typename T = ContactsEntity*> static T UpdateEntity(ContactsContext* context, Il2CppString* jid, Il2CppString* playerName, bool isSubscribed, int64_t time, Il2CppArray<uintptr_t>* groups) {
		return ((T (*)(void *, ContactsContext*, Il2CppString*, Il2CppString*, bool, int64_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15EEE1C))(0, context, jid, playerName, isSubscribed, time, groups);
	}
	template <typename T = void> static T UpdateEntity_1(ContactsContext* context, Il2CppString* jid, bool isOnline) {
		return ((T (*)(void *, ContactsContext*, Il2CppString*, bool))(Il2CppBase() + 0x15EEF44))(0, context, jid, isOnline);
	}
	template <typename T = void> static T UpdateEntity_2(ContactsContext* context, Il2CppString* jid, int64_t lastOpenedChat) {
		return ((T (*)(void *, ContactsContext*, Il2CppString*, int64_t))(Il2CppBase() + 0x15EEF90))(0, context, jid, lastOpenedChat);
	}

};

