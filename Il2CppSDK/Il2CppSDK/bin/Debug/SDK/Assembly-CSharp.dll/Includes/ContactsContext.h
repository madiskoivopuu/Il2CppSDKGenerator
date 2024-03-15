#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context1.h" 

class ContactsContext : public Context1<ContactsEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactsContext"));
	}

	template <typename R = Il2CppString*> static R& Contacts() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ContactsByTicks() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CONTACTS_FAVOURITE_GROUP() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CONTACTS_MUTE_GROUP() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& REMOVE_INACTIVE_ROSTER_TIMEOUT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = ContactsEntity*> R GetEntityByJid(Il2CppString* userName) {
		return ((R (*)(ContactsContext*, Il2CppString*))(Il2CppBase() + 0x15ED01C))(this, userName);
	}

};

