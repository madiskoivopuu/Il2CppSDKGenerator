#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildInviteMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInviteMatcher"));
	}

	 static IMatcher1GuildInviteEntity*>*& _matcherFromPlayer() {
		return *(IMatcher1GuildInviteEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1GuildInviteEntity*>*& _matcherGuild() {
		return *(IMatcher1GuildInviteEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1GuildInviteEntity*>*& _matcherInvite() {
		return *(IMatcher1GuildInviteEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1GuildInviteEntity*>*& _matcherMessage() {
		return *(IMatcher1GuildInviteEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1GuildInviteEntity*>*& _matcherTick() {
		return *(IMatcher1GuildInviteEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1GuildInviteEntity*>*& _matcherToPlayer() {
		return *(IMatcher1GuildInviteEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	 static IMatcher1GuildInviteEntity*>* get_FromPlayer() {
		return ((IMatcher1GuildInviteEntity*>* (*)(void *))(Il2CppBase() + 0x1B2BDC4))(0);
	}
	 static IMatcher1GuildInviteEntity*>* get_Guild() {
		return ((IMatcher1GuildInviteEntity*>* (*)(void *))(Il2CppBase() + 0x1B2BF44))(0);
	}
	 static IMatcher1GuildInviteEntity*>* get_Invite() {
		return ((IMatcher1GuildInviteEntity*>* (*)(void *))(Il2CppBase() + 0x1B2BC28))(0);
	}
	 static IMatcher1GuildInviteEntity*>* get_Message() {
		return ((IMatcher1GuildInviteEntity*>* (*)(void *))(Il2CppBase() + 0x1B301A0))(0);
	}
	 static IMatcher1GuildInviteEntity*>* get_Tick() {
		return ((IMatcher1GuildInviteEntity*>* (*)(void *))(Il2CppBase() + 0x1B3033C))(0);
	}
	 static IMatcher1GuildInviteEntity*>* get_ToPlayer() {
		return ((IMatcher1GuildInviteEntity*>* (*)(void *))(Il2CppBase() + 0x1B2C158))(0);
	}
	 static IAllOfMatcher1GuildInviteEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1GuildInviteEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1B304D8))(0, indices);
	}
	 static IAllOfMatcher1GuildInviteEntity*>* AllOf_1(Il2CppArray<IMatcher1GuildInviteEntity*>*>* matchers) {
		return ((IAllOfMatcher1GuildInviteEntity*>* (*)(void *, Il2CppArray<IMatcher1GuildInviteEntity*>*>*))(Il2CppBase() + 0x1B2C0E0))(0, matchers);
	}
	 static IAnyOfMatcher1GuildInviteEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1GuildInviteEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1B30550))(0, indices);
	}
	 static IAnyOfMatcher1GuildInviteEntity*>* AnyOf_1(Il2CppArray<IMatcher1GuildInviteEntity*>*>* matchers) {
		return ((IAnyOfMatcher1GuildInviteEntity*>* (*)(void *, Il2CppArray<IMatcher1GuildInviteEntity*>*>*))(Il2CppBase() + 0x1B305C8))(0, matchers);
	}

};

