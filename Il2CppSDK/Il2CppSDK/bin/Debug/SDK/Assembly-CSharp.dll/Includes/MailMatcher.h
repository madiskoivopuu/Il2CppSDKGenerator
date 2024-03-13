#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MailMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MailMatcher"));
	}

	template <typename T = IMatcher1MailEntity*>*> static T& _matcherCreationTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1MailEntity*>*> static T& _matcherDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1MailEntity*>*> static T& _matcherDurabilityCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1MailEntity*>*> static T& _matcherEndTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1MailEntity*>*> static T& _matcherFromCyclic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1MailEntity*>*> static T& _matcherGuildJoinResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1MailEntity*>*> static T& _matcherMessageId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1MailEntity*>*> static T& _matcherPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1MailEntity*>*> static T& _matcherSender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1MailEntity*>*> static T& _matcherStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1MailEntity*>*> static T& _matcherSupportMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1MailEntity*>*> static T& _matcherTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = IMatcher1MailEntity*>*> static T& _matcherTournament() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = IMatcher1MailEntity*>*> static T& _matcherTournamentPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = IMatcher1MailEntity*>*> static T& _matcherTournamentPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = IMatcher1MailEntity*>*> static T& _matcherWindowData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = IMatcher1MailEntity*>*> static T get_CreationTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x125D5E4))(0);
	}
	template <typename T = IMatcher1MailEntity*>*> static T get_Description() {
		return ((T (*)(void *))(Il2CppBase() + 0x125D764))(0);
	}
	template <typename T = IMatcher1MailEntity*>*> static T get_DurabilityCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x125D900))(0);
	}
	template <typename T = IMatcher1MailEntity*>*> static T get_EndTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x125DA9C))(0);
	}
	template <typename T = IMatcher1MailEntity*>*> static T get_FromCyclic() {
		return ((T (*)(void *))(Il2CppBase() + 0x125DC38))(0);
	}
	template <typename T = IMatcher1MailEntity*>*> static T get_GuildJoinResult() {
		return ((T (*)(void *))(Il2CppBase() + 0x125C880))(0);
	}
	template <typename T = IMatcher1MailEntity*>*> static T get_MessageId() {
		return ((T (*)(void *))(Il2CppBase() + 0x125DDD4))(0);
	}
	template <typename T = IMatcher1MailEntity*>*> static T get_PlayerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x125DF70))(0);
	}
	template <typename T = IMatcher1MailEntity*>*> static T get_Sender() {
		return ((T (*)(void *))(Il2CppBase() + 0x125E10C))(0);
	}
	template <typename T = IMatcher1MailEntity*>*> static T get_Stack() {
		return ((T (*)(void *))(Il2CppBase() + 0x125E2A8))(0);
	}
	template <typename T = IMatcher1MailEntity*>*> static T get_SupportMessage() {
		return ((T (*)(void *))(Il2CppBase() + 0x125E444))(0);
	}
	template <typename T = IMatcher1MailEntity*>*> static T get_Tags() {
		return ((T (*)(void *))(Il2CppBase() + 0x125E5E0))(0);
	}
	template <typename T = IMatcher1MailEntity*>*> static T get_Tournament() {
		return ((T (*)(void *))(Il2CppBase() + 0x125E77C))(0);
	}
	template <typename T = IMatcher1MailEntity*>*> static T get_TournamentPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x125C66C))(0);
	}
	template <typename T = IMatcher1MailEntity*>*> static T get_TournamentPosition() {
		return ((T (*)(void *))(Il2CppBase() + 0x125C4D0))(0);
	}
	template <typename T = IMatcher1MailEntity*>*> static T get_WindowData() {
		return ((T (*)(void *))(Il2CppBase() + 0x125CA1C))(0);
	}
	template <typename T = IAllOfMatcher1MailEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x125E918))(0, indices);
	}
	template <typename T = IAllOfMatcher1MailEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x125C808))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1MailEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x125E990))(0, indices);
	}
	template <typename T = IAnyOfMatcher1MailEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x125EA08))(0, matchers);
	}

};

