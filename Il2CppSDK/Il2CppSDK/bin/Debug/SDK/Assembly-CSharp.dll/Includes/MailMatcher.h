#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MailMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MailMatcher"));
	}

	 static IMatcher1<MailEntity*>*& _matcherCreationTime() {
		return *(IMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<MailEntity*>*& _matcherDescription() {
		return *(IMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<MailEntity*>*& _matcherDurabilityCoef() {
		return *(IMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<MailEntity*>*& _matcherEndTime() {
		return *(IMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<MailEntity*>*& _matcherFromCyclic() {
		return *(IMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<MailEntity*>*& _matcherGuildJoinResult() {
		return *(IMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<MailEntity*>*& _matcherMessageId() {
		return *(IMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<MailEntity*>*& _matcherPlayerId() {
		return *(IMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<MailEntity*>*& _matcherSender() {
		return *(IMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<MailEntity*>*& _matcherStack() {
		return *(IMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<MailEntity*>*& _matcherSupportMessage() {
		return *(IMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<MailEntity*>*& _matcherTags() {
		return *(IMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<MailEntity*>*& _matcherTournament() {
		return *(IMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<MailEntity*>*& _matcherTournamentPoints() {
		return *(IMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<MailEntity*>*& _matcherTournamentPosition() {
		return *(IMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<MailEntity*>*& _matcherWindowData() {
		return *(IMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	 static IMatcher1<MailEntity*>* get_CreationTime() {
		return ((IMatcher1<MailEntity*>* (*)(void *))(Il2CppBase() + 0x125D5E4))(0);
	}
	 static IMatcher1<MailEntity*>* get_Description() {
		return ((IMatcher1<MailEntity*>* (*)(void *))(Il2CppBase() + 0x125D764))(0);
	}
	 static IMatcher1<MailEntity*>* get_DurabilityCoef() {
		return ((IMatcher1<MailEntity*>* (*)(void *))(Il2CppBase() + 0x125D900))(0);
	}
	 static IMatcher1<MailEntity*>* get_EndTime() {
		return ((IMatcher1<MailEntity*>* (*)(void *))(Il2CppBase() + 0x125DA9C))(0);
	}
	 static IMatcher1<MailEntity*>* get_FromCyclic() {
		return ((IMatcher1<MailEntity*>* (*)(void *))(Il2CppBase() + 0x125DC38))(0);
	}
	 static IMatcher1<MailEntity*>* get_GuildJoinResult() {
		return ((IMatcher1<MailEntity*>* (*)(void *))(Il2CppBase() + 0x125C880))(0);
	}
	 static IMatcher1<MailEntity*>* get_MessageId() {
		return ((IMatcher1<MailEntity*>* (*)(void *))(Il2CppBase() + 0x125DDD4))(0);
	}
	 static IMatcher1<MailEntity*>* get_PlayerId() {
		return ((IMatcher1<MailEntity*>* (*)(void *))(Il2CppBase() + 0x125DF70))(0);
	}
	 static IMatcher1<MailEntity*>* get_Sender() {
		return ((IMatcher1<MailEntity*>* (*)(void *))(Il2CppBase() + 0x125E10C))(0);
	}
	 static IMatcher1<MailEntity*>* get_Stack() {
		return ((IMatcher1<MailEntity*>* (*)(void *))(Il2CppBase() + 0x125E2A8))(0);
	}
	 static IMatcher1<MailEntity*>* get_SupportMessage() {
		return ((IMatcher1<MailEntity*>* (*)(void *))(Il2CppBase() + 0x125E444))(0);
	}
	 static IMatcher1<MailEntity*>* get_Tags() {
		return ((IMatcher1<MailEntity*>* (*)(void *))(Il2CppBase() + 0x125E5E0))(0);
	}
	 static IMatcher1<MailEntity*>* get_Tournament() {
		return ((IMatcher1<MailEntity*>* (*)(void *))(Il2CppBase() + 0x125E77C))(0);
	}
	 static IMatcher1<MailEntity*>* get_TournamentPoints() {
		return ((IMatcher1<MailEntity*>* (*)(void *))(Il2CppBase() + 0x125C66C))(0);
	}
	 static IMatcher1<MailEntity*>* get_TournamentPosition() {
		return ((IMatcher1<MailEntity*>* (*)(void *))(Il2CppBase() + 0x125C4D0))(0);
	}
	 static IMatcher1<MailEntity*>* get_WindowData() {
		return ((IMatcher1<MailEntity*>* (*)(void *))(Il2CppBase() + 0x125CA1C))(0);
	}
	 static IAllOfMatcher1<MailEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<MailEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x125E918))(0, indices);
	}
	 static IAllOfMatcher1<MailEntity*>* AllOf_1(Il2CppArray<IMatcher1<MailEntity*>*>* matchers) {
		return ((IAllOfMatcher1<MailEntity*>* (*)(void *, Il2CppArray<IMatcher1<MailEntity*>*>*))(Il2CppBase() + 0x125C808))(0, matchers);
	}
	 static IAnyOfMatcher1<MailEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<MailEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x125E990))(0, indices);
	}
	 static IAnyOfMatcher1<MailEntity*>* AnyOf_1(Il2CppArray<IMatcher1<MailEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<MailEntity*>* (*)(void *, Il2CppArray<IMatcher1<MailEntity*>*>*))(Il2CppBase() + 0x125EA08))(0, matchers);
	}

};

