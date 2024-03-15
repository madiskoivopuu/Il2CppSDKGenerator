#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestMatcher"));
	}

	 static IMatcher1GuildQuestEntity*>*& _matcherDuration() {
		return *(IMatcher1GuildQuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1GuildQuestEntity*>*& _matcherEndTime() {
		return *(IMatcher1GuildQuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1GuildQuestEntity*>*& _matcherGuild() {
		return *(IMatcher1GuildQuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1GuildQuestEntity*>*& _matcherGuildQuest() {
		return *(IMatcher1GuildQuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1GuildQuestEntity*>*& _matcherMaxProgress() {
		return *(IMatcher1GuildQuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1GuildQuestEntity*>*& _matcherMembersProgress() {
		return *(IMatcher1GuildQuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1GuildQuestEntity*>*& _matcherProgress() {
		return *(IMatcher1GuildQuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1GuildQuestEntity*>*& _matcherQuest() {
		return *(IMatcher1GuildQuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1GuildQuestEntity*>*& _matcherResult() {
		return *(IMatcher1GuildQuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1GuildQuestEntity*>*& _matcherStartTime() {
		return *(IMatcher1GuildQuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	 static IMatcher1GuildQuestEntity*>* get_Duration() {
		return ((IMatcher1GuildQuestEntity*>* (*)(void *))(Il2CppBase() + 0x193689C))(0);
	}
	 static IMatcher1GuildQuestEntity*>* get_EndTime() {
		return ((IMatcher1GuildQuestEntity*>* (*)(void *))(Il2CppBase() + 0x1936A1C))(0);
	}
	 static IMatcher1GuildQuestEntity*>* get_Guild() {
		return ((IMatcher1GuildQuestEntity*>* (*)(void *))(Il2CppBase() + 0x1932E48))(0);
	}
	 static IMatcher1GuildQuestEntity*>* get_GuildQuest() {
		return ((IMatcher1GuildQuestEntity*>* (*)(void *))(Il2CppBase() + 0x1932CAC))(0);
	}
	 static IMatcher1GuildQuestEntity*>* get_MaxProgress() {
		return ((IMatcher1GuildQuestEntity*>* (*)(void *))(Il2CppBase() + 0x1936BB8))(0);
	}
	 static IMatcher1GuildQuestEntity*>* get_MembersProgress() {
		return ((IMatcher1GuildQuestEntity*>* (*)(void *))(Il2CppBase() + 0x1936D54))(0);
	}
	 static IMatcher1GuildQuestEntity*>* get_Progress() {
		return ((IMatcher1GuildQuestEntity*>* (*)(void *))(Il2CppBase() + 0x1936EF0))(0);
	}
	 static IMatcher1GuildQuestEntity*>* get_Quest() {
		return ((IMatcher1GuildQuestEntity*>* (*)(void *))(Il2CppBase() + 0x193708C))(0);
	}
	 static IMatcher1GuildQuestEntity*>* get_Result() {
		return ((IMatcher1GuildQuestEntity*>* (*)(void *))(Il2CppBase() + 0x1937228))(0);
	}
	 static IMatcher1GuildQuestEntity*>* get_StartTime() {
		return ((IMatcher1GuildQuestEntity*>* (*)(void *))(Il2CppBase() + 0x19373C4))(0);
	}
	 static IAllOfMatcher1GuildQuestEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1GuildQuestEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1937560))(0, indices);
	}
	 static IAllOfMatcher1GuildQuestEntity*>* AllOf_1(Il2CppArray<IMatcher1GuildQuestEntity*>*>* matchers) {
		return ((IAllOfMatcher1GuildQuestEntity*>* (*)(void *, Il2CppArray<IMatcher1GuildQuestEntity*>*>*))(Il2CppBase() + 0x19375D8))(0, matchers);
	}
	 static IAnyOfMatcher1GuildQuestEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1GuildQuestEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1937650))(0, indices);
	}
	 static IAnyOfMatcher1GuildQuestEntity*>* AnyOf_1(Il2CppArray<IMatcher1GuildQuestEntity*>*>* matchers) {
		return ((IAnyOfMatcher1GuildQuestEntity*>* (*)(void *, Il2CppArray<IMatcher1GuildQuestEntity*>*>*))(Il2CppBase() + 0x19376C8))(0, matchers);
	}

};

