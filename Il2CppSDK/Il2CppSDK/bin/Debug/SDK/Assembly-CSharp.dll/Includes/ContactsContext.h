#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context1.h" 

class ContactsContext : public Context1<ContactsEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactsContext"));
	}

	template <typename T = Il2CppString*> static T& Contacts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ContactsByTicks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CONTACTS_FAVOURITE_GROUP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CONTACTS_MUTE_GROUP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& REMOVE_INACTIVE_ROSTER_TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = ContactsEntity*> T GetEntityByJid(Il2CppString* userName) {
		return ((T (*)(ContactsContext*, Il2CppString*))(Il2CppBase() + 0x15ED01C))(this, userName);
	}

};

