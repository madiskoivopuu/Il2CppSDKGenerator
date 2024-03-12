#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContactsMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactsMatcher"));
	}

	template <typename T = void*> static T& _matcherActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherContactOnline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherContactView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherFavourite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherGroups() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherJid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherLastOpenedChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherMute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherPlayerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherSubscription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void*> static T get_Active() {
		return ((T (*)(void *))(Il2CppBase() + 0x15EEFDC))(0);
	}
	template <typename T = void*> static T get_ContactOnline() {
		return ((T (*)(void *))(Il2CppBase() + 0x15EF15C))(0);
	}
	template <typename T = void*> static T get_ContactView() {
		return ((T (*)(void *))(Il2CppBase() + 0x15EF2F8))(0);
	}
	template <typename T = void*> static T get_Favourite() {
		return ((T (*)(void *))(Il2CppBase() + 0x15EF494))(0);
	}
	template <typename T = void*> static T get_Groups() {
		return ((T (*)(void *))(Il2CppBase() + 0x15EF630))(0);
	}
	template <typename T = void*> static T get_Jid() {
		return ((T (*)(void *))(Il2CppBase() + 0x15ECE80))(0);
	}
	template <typename T = void*> static T get_LastOpenedChat() {
		return ((T (*)(void *))(Il2CppBase() + 0x15EF7CC))(0);
	}
	template <typename T = void*> static T get_Mute() {
		return ((T (*)(void *))(Il2CppBase() + 0x15EF968))(0);
	}
	template <typename T = void*> static T get_PlayerName() {
		return ((T (*)(void *))(Il2CppBase() + 0x15EFB04))(0);
	}
	template <typename T = void*> static T get_Subscription() {
		return ((T (*)(void *))(Il2CppBase() + 0x15EFCA0))(0);
	}
	template <typename T = void*> static T get_Tick() {
		return ((T (*)(void *))(Il2CppBase() + 0x15EFE3C))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15EFFD8))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15F0050))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15F00C8))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15F0140))(0, matchers);
	}

};

}
