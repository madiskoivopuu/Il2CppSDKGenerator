#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContactsMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactsMatcher"));
	}

	 static IMatcher1ContactsEntity*>*& _matcherActive() {
		return *(IMatcher1ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1ContactsEntity*>*& _matcherContactOnline() {
		return *(IMatcher1ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1ContactsEntity*>*& _matcherContactView() {
		return *(IMatcher1ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1ContactsEntity*>*& _matcherFavourite() {
		return *(IMatcher1ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1ContactsEntity*>*& _matcherGroups() {
		return *(IMatcher1ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1ContactsEntity*>*& _matcherJid() {
		return *(IMatcher1ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1ContactsEntity*>*& _matcherLastOpenedChat() {
		return *(IMatcher1ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1ContactsEntity*>*& _matcherMute() {
		return *(IMatcher1ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1ContactsEntity*>*& _matcherPlayerName() {
		return *(IMatcher1ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1ContactsEntity*>*& _matcherSubscription() {
		return *(IMatcher1ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1ContactsEntity*>*& _matcherTick() {
		return *(IMatcher1ContactsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	 static IMatcher1ContactsEntity*>* get_Active() {
		return ((IMatcher1ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EEFDC))(0);
	}
	 static IMatcher1ContactsEntity*>* get_ContactOnline() {
		return ((IMatcher1ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EF15C))(0);
	}
	 static IMatcher1ContactsEntity*>* get_ContactView() {
		return ((IMatcher1ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EF2F8))(0);
	}
	 static IMatcher1ContactsEntity*>* get_Favourite() {
		return ((IMatcher1ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EF494))(0);
	}
	 static IMatcher1ContactsEntity*>* get_Groups() {
		return ((IMatcher1ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EF630))(0);
	}
	 static IMatcher1ContactsEntity*>* get_Jid() {
		return ((IMatcher1ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15ECE80))(0);
	}
	 static IMatcher1ContactsEntity*>* get_LastOpenedChat() {
		return ((IMatcher1ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EF7CC))(0);
	}
	 static IMatcher1ContactsEntity*>* get_Mute() {
		return ((IMatcher1ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EF968))(0);
	}
	 static IMatcher1ContactsEntity*>* get_PlayerName() {
		return ((IMatcher1ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EFB04))(0);
	}
	 static IMatcher1ContactsEntity*>* get_Subscription() {
		return ((IMatcher1ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EFCA0))(0);
	}
	 static IMatcher1ContactsEntity*>* get_Tick() {
		return ((IMatcher1ContactsEntity*>* (*)(void *))(Il2CppBase() + 0x15EFE3C))(0);
	}
	 static IAllOfMatcher1ContactsEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1ContactsEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x15EFFD8))(0, indices);
	}
	 static IAllOfMatcher1ContactsEntity*>* AllOf_1(Il2CppArray<IMatcher1ContactsEntity*>*>* matchers) {
		return ((IAllOfMatcher1ContactsEntity*>* (*)(void *, Il2CppArray<IMatcher1ContactsEntity*>*>*))(Il2CppBase() + 0x15F0050))(0, matchers);
	}
	 static IAnyOfMatcher1ContactsEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1ContactsEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x15F00C8))(0, indices);
	}
	 static IAnyOfMatcher1ContactsEntity*>* AnyOf_1(Il2CppArray<IMatcher1ContactsEntity*>*>* matchers) {
		return ((IAnyOfMatcher1ContactsEntity*>* (*)(void *, Il2CppArray<IMatcher1ContactsEntity*>*>*))(Il2CppBase() + 0x15F0140))(0, matchers);
	}

};

