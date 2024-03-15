#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildMatcher"));
	}

	 static IMatcher1GuildEntity*>*& _matcherAvatar() {
		return *(IMatcher1GuildEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1GuildEntity*>*& _matcherCurrentWeekRankPoints() {
		return *(IMatcher1GuildEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1GuildEntity*>*& _matcherDescription() {
		return *(IMatcher1GuildEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1GuildEntity*>*& _matcherGuild() {
		return *(IMatcher1GuildEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1GuildEntity*>*& _matcherGuildLanguage() {
		return *(IMatcher1GuildEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1GuildEntity*>*& _matcherGuildTag() {
		return *(IMatcher1GuildEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1GuildEntity*>*& _matcherGuildType() {
		return *(IMatcher1GuildEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1GuildEntity*>*& _matcherKilledBosses() {
		return *(IMatcher1GuildEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1GuildEntity*>*& _matcherLeader() {
		return *(IMatcher1GuildEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1GuildEntity*>*& _matcherMembersCount() {
		return *(IMatcher1GuildEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1GuildEntity*>*& _matcherMessageOfTheDay() {
		return *(IMatcher1GuildEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1GuildEntity*>*& _matcherName() {
		return *(IMatcher1GuildEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1GuildEntity*>*& _matcherPreviousWeekRankPoints() {
		return *(IMatcher1GuildEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1GuildEntity*>*& _matcherRegion() {
		return *(IMatcher1GuildEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	 static IMatcher1GuildEntity*>* get_Avatar() {
		return ((IMatcher1GuildEntity*>* (*)(void *))(Il2CppBase() + 0x1B34FBC))(0);
	}
	 static IMatcher1GuildEntity*>* get_CurrentWeekRankPoints() {
		return ((IMatcher1GuildEntity*>* (*)(void *))(Il2CppBase() + 0x1B3513C))(0);
	}
	 static IMatcher1GuildEntity*>* get_Description() {
		return ((IMatcher1GuildEntity*>* (*)(void *))(Il2CppBase() + 0x1B352D8))(0);
	}
	 static IMatcher1GuildEntity*>* get_Guild() {
		return ((IMatcher1GuildEntity*>* (*)(void *))(Il2CppBase() + 0x1B35474))(0);
	}
	 static IMatcher1GuildEntity*>* get_GuildLanguage() {
		return ((IMatcher1GuildEntity*>* (*)(void *))(Il2CppBase() + 0x1B35610))(0);
	}
	 static IMatcher1GuildEntity*>* get_GuildTag() {
		return ((IMatcher1GuildEntity*>* (*)(void *))(Il2CppBase() + 0x1B357AC))(0);
	}
	 static IMatcher1GuildEntity*>* get_GuildType() {
		return ((IMatcher1GuildEntity*>* (*)(void *))(Il2CppBase() + 0x1B35948))(0);
	}
	 static IMatcher1GuildEntity*>* get_KilledBosses() {
		return ((IMatcher1GuildEntity*>* (*)(void *))(Il2CppBase() + 0x1B35AE4))(0);
	}
	 static IMatcher1GuildEntity*>* get_Leader() {
		return ((IMatcher1GuildEntity*>* (*)(void *))(Il2CppBase() + 0x1B35C80))(0);
	}
	 static IMatcher1GuildEntity*>* get_MembersCount() {
		return ((IMatcher1GuildEntity*>* (*)(void *))(Il2CppBase() + 0x1B35E1C))(0);
	}
	 static IMatcher1GuildEntity*>* get_MessageOfTheDay() {
		return ((IMatcher1GuildEntity*>* (*)(void *))(Il2CppBase() + 0x1B35FB8))(0);
	}
	 static IMatcher1GuildEntity*>* get_Name() {
		return ((IMatcher1GuildEntity*>* (*)(void *))(Il2CppBase() + 0x1B36154))(0);
	}
	 static IMatcher1GuildEntity*>* get_PreviousWeekRankPoints() {
		return ((IMatcher1GuildEntity*>* (*)(void *))(Il2CppBase() + 0x1B362F0))(0);
	}
	 static IMatcher1GuildEntity*>* get_Region() {
		return ((IMatcher1GuildEntity*>* (*)(void *))(Il2CppBase() + 0x1B3648C))(0);
	}
	 static IAllOfMatcher1GuildEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1GuildEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1B36628))(0, indices);
	}
	 static IAllOfMatcher1GuildEntity*>* AllOf_1(Il2CppArray<IMatcher1GuildEntity*>*>* matchers) {
		return ((IAllOfMatcher1GuildEntity*>* (*)(void *, Il2CppArray<IMatcher1GuildEntity*>*>*))(Il2CppBase() + 0x1B366A0))(0, matchers);
	}
	 static IAnyOfMatcher1GuildEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1GuildEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1B36718))(0, indices);
	}
	 static IAnyOfMatcher1GuildEntity*>* AnyOf_1(Il2CppArray<IMatcher1GuildEntity*>*>* matchers) {
		return ((IAnyOfMatcher1GuildEntity*>* (*)(void *, Il2CppArray<IMatcher1GuildEntity*>*>*))(Il2CppBase() + 0x1B36790))(0, matchers);
	}

};

