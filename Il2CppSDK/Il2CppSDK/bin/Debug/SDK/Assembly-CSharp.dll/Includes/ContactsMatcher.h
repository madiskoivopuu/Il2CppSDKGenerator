#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContactsMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactsMatcher"));
	}

	 static IMatcher1<ContactsEntity*>*& _matcherActive() {
		return *(IMatcher1<ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<ContactsEntity*>*& _matcherContactOnline() {
		return *(IMatcher1<ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<ContactsEntity*>*& _matcherContactView() {
		return *(IMatcher1<ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<ContactsEntity*>*& _matcherFavourite() {
		return *(IMatcher1<ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<ContactsEntity*>*& _matcherGroups() {
		return *(IMatcher1<ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<ContactsEntity*>*& _matcherJid() {
		return *(IMatcher1<ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<ContactsEntity*>*& _matcherLastOpenedChat() {
		return *(IMatcher1<ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<ContactsEntity*>*& _matcherMute() {
		return *(IMatcher1<ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<ContactsEntity*>*& _matcherPlayerName() {
		return *(IMatcher1<ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<ContactsEntity*>*& _matcherSubscription() {
		return *(IMatcher1<ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<ContactsEntity*>*& _matcherTick() {
		return *(IMatcher1<ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	 static IMatcher1<ContactsEntity*>* get_Active() {
		return ((IMatcher1<ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EEFDC))(0);
	}
	 static IMatcher1<ContactsEntity*>* get_ContactOnline() {
		return ((IMatcher1<ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EF15C))(0);
	}
	 static IMatcher1<ContactsEntity*>* get_ContactView() {
		return ((IMatcher1<ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EF2F8))(0);
	}
	 static IMatcher1<ContactsEntity*>* get_Favourite() {
		return ((IMatcher1<ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EF494))(0);
	}
	 static IMatcher1<ContactsEntity*>* get_Groups() {
		return ((IMatcher1<ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EF630))(0);
	}
	 static IMatcher1<ContactsEntity*>* get_Jid() {
		return ((IMatcher1<ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15ECE80))(0);
	}
	 static IMatcher1<ContactsEntity*>* get_LastOpenedChat() {
		return ((IMatcher1<ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EF7CC))(0);
	}
	 static IMatcher1<ContactsEntity*>* get_Mute() {
		return ((IMatcher1<ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EF968))(0);
	}
	 static IMatcher1<ContactsEntity*>* get_PlayerName() {
		return ((IMatcher1<ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EFB04))(0);
	}
	 static IMatcher1<ContactsEntity*>* get_Subscription() {
		return ((IMatcher1<ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EFCA0))(0);
	}
	 static IMatcher1<ContactsEntity*>* get_Tick() {
		return ((IMatcher1<ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EFE3C))(0);
	}
	 static IAllOfMatcher1<ContactsEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<ContactsEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x15EFFD8))(0, indices);
	}
	 static IAllOfMatcher1<ContactsEntity*>* AllOf_1(Il2CppArray<IMatcher1<ContactsEntity*>*>* matchers) {
		return ((IAllOfMatcher1<ContactsEntity*>* (*)(void *, Il2CppArray<IMatcher1<ContactsEntity*>*>*))(Il2CppBase() + 0x15F0050))(0, matchers);
	}
	 static IAnyOfMatcher1<ContactsEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<ContactsEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x15F00C8))(0, indices);
	}
	 static IAnyOfMatcher1<ContactsEntity*>* AnyOf_1(Il2CppArray<IMatcher1<ContactsEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<ContactsEntity*>* (*)(void *, Il2CppArray<IMatcher1<ContactsEntity*>*>*))(Il2CppBase() + 0x15F0140))(0, matchers);
	}

};

