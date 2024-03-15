#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MailMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MailMatcher"));
	}

	 static IMatcher1MailEntity*>*& _matcherCreationTime() {
		return *(IMatcher1MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1MailEntity*>*& _matcherDescription() {
		return *(IMatcher1MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1MailEntity*>*& _matcherDurabilityCoef() {
		return *(IMatcher1MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1MailEntity*>*& _matcherEndTime() {
		return *(IMatcher1MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1MailEntity*>*& _matcherFromCyclic() {
		return *(IMatcher1MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1MailEntity*>*& _matcherGuildJoinResult() {
		return *(IMatcher1MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1MailEntity*>*& _matcherMessageId() {
		return *(IMatcher1MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1MailEntity*>*& _matcherPlayerId() {
		return *(IMatcher1MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1MailEntity*>*& _matcherSender() {
		return *(IMatcher1MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1MailEntity*>*& _matcherStack() {
		return *(IMatcher1MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1MailEntity*>*& _matcherSupportMessage() {
		return *(IMatcher1MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1MailEntity*>*& _matcherTags() {
		return *(IMatcher1MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1MailEntity*>*& _matcherTournament() {
		return *(IMatcher1MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1MailEntity*>*& _matcherTournamentPoints() {
		return *(IMatcher1MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1MailEntity*>*& _matcherTournamentPosition() {
		return *(IMatcher1MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1MailEntity*>*& _matcherWindowData() {
		return *(IMatcher1MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	 static IMatcher1MailEntity*>* get_CreationTime() {
		return ((IMatcher1MailEntity*>* (*)(void *))(Il2CppBase() + 0x125D5E4))(0);
	}
	 static IMatcher1MailEntity*>* get_Description() {
		return ((IMatcher1MailEntity*>* (*)(void *))(Il2CppBase() + 0x125D764))(0);
	}
	 static IMatcher1MailEntity*>* get_DurabilityCoef() {
		return ((IMatcher1MailEntity*>* (*)(void *))(Il2CppBase() + 0x125D900))(0);
	}
	 static IMatcher1MailEntity*>* get_EndTime() {
		return ((IMatcher1MailEntity*>* (*)(void *))(Il2CppBase() + 0x125DA9C))(0);
	}
	 static IMatcher1MailEntity*>* get_FromCyclic() {
		return ((IMatcher1MailEntity*>* (*)(void *))(Il2CppBase() + 0x125DC38))(0);
	}
	 static IMatcher1MailEntity*>* get_GuildJoinResult() {
		return ((IMatcher1MailEntity*>* (*)(void *))(Il2CppBase() + 0x125C880))(0);
	}
	 static IMatcher1MailEntity*>* get_MessageId() {
		return ((IMatcher1MailEntity*>* (*)(void *))(Il2CppBase() + 0x125DDD4))(0);
	}
	 static IMatcher1MailEntity*>* get_PlayerId() {
		return ((IMatcher1MailEntity*>* (*)(void *))(Il2CppBase() + 0x125DF70))(0);
	}
	 static IMatcher1MailEntity*>* get_Sender() {
		return ((IMatcher1MailEntity*>* (*)(void *))(Il2CppBase() + 0x125E10C))(0);
	}
	 static IMatcher1MailEntity*>* get_Stack() {
		return ((IMatcher1MailEntity*>* (*)(void *))(Il2CppBase() + 0x125E2A8))(0);
	}
	 static IMatcher1MailEntity*>* get_SupportMessage() {
		return ((IMatcher1MailEntity*>* (*)(void *))(Il2CppBase() + 0x125E444))(0);
	}
	 static IMatcher1MailEntity*>* get_Tags() {
		return ((IMatcher1MailEntity*>* (*)(void *))(Il2CppBase() + 0x125E5E0))(0);
	}
	 static IMatcher1MailEntity*>* get_Tournament() {
		return ((IMatcher1MailEntity*>* (*)(void *))(Il2CppBase() + 0x125E77C))(0);
	}
	 static IMatcher1MailEntity*>* get_TournamentPoints() {
		return ((IMatcher1MailEntity*>* (*)(void *))(Il2CppBase() + 0x125C66C))(0);
	}
	 static IMatcher1MailEntity*>* get_TournamentPosition() {
		return ((IMatcher1MailEntity*>* (*)(void *))(Il2CppBase() + 0x125C4D0))(0);
	}
	 static IMatcher1MailEntity*>* get_WindowData() {
		return ((IMatcher1MailEntity*>* (*)(void *))(Il2CppBase() + 0x125CA1C))(0);
	}
	 static IAllOfMatcher1MailEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1MailEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x125E918))(0, indices);
	}
	 static IAllOfMatcher1MailEntity*>* AllOf_1(Il2CppArray<IMatcher1MailEntity*>*>* matchers) {
		return ((IAllOfMatcher1MailEntity*>* (*)(void *, Il2CppArray<IMatcher1MailEntity*>*>*))(Il2CppBase() + 0x125C808))(0, matchers);
	}
	 static IAnyOfMatcher1MailEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1MailEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x125E990))(0, indices);
	}
	 static IAnyOfMatcher1MailEntity*>* AnyOf_1(Il2CppArray<IMatcher1MailEntity*>*>* matchers) {
		return ((IAnyOfMatcher1MailEntity*>* (*)(void *, Il2CppArray<IMatcher1MailEntity*>*>*))(Il2CppBase() + 0x125EA08))(0, matchers);
	}

};

