#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildInviteMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInviteMatcher"));
	}

	template <typename T = void*> static T& _matcherFromPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherToPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void*> static T get_FromPlayer() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B2BDC4))(0);
	}
	template <typename T = void*> static T get_Guild() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B2BF44))(0);
	}
	template <typename T = void*> static T get_Invite() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B2BC28))(0);
	}
	template <typename T = void*> static T get_Message() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B301A0))(0);
	}
	template <typename T = void*> static T get_Tick() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B3033C))(0);
	}
	template <typename T = void*> static T get_ToPlayer() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B2C158))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B304D8))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B2C0E0))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B30550))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B305C8))(0, matchers);
	}

};

}
