#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContactsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactsHelper"));
	}


	template <typename R = ContactsEntity*> static R AddContact(ContactsContext* context, Il2CppString* jid, Il2CppString* playerName, bool isSubscribed, int64_t time, Il2CppArray<Il2CppString*>* groups) {
		return ((R (*)(void *, ContactsContext*, Il2CppString*, Il2CppString*, bool, int64_t, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x15EEC7C))(0, context, jid, playerName, isSubscribed, time, groups);
	}
	template <typename R = ContactsEntity*> static R UpdateEntity(ContactsContext* context, Il2CppString* jid, Il2CppString* playerName, bool isSubscribed, int64_t time, Il2CppArray<Il2CppString*>* groups) {
		return ((R (*)(void *, ContactsContext*, Il2CppString*, Il2CppString*, bool, int64_t, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x15EEE1C))(0, context, jid, playerName, isSubscribed, time, groups);
	}
	template <typename R = void> static R UpdateEntity_1(ContactsContext* context, Il2CppString* jid, bool isOnline) {
		return ((R (*)(void *, ContactsContext*, Il2CppString*, bool))(Il2CppBase() + 0x15EEF44))(0, context, jid, isOnline);
	}
	template <typename R = void> static R UpdateEntity_2(ContactsContext* context, Il2CppString* jid, int64_t lastOpenedChat) {
		return ((R (*)(void *, ContactsContext*, Il2CppString*, int64_t))(Il2CppBase() + 0x15EEF90))(0, context, jid, lastOpenedChat);
	}

};

