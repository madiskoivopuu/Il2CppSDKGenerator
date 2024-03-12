#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildMatcher"));
	}

	template <typename T = void*> static T& _matcherAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherCurrentWeekRankPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherGuildLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherGuildTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherGuildType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherKilledBosses() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherLeader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherMembersCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherMessageOfTheDay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& _matcherName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& _matcherPreviousWeekRankPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& _matcherRegion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = void*> static T get_Avatar() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B34FBC))(0);
	}
	template <typename T = void*> static T get_CurrentWeekRankPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B3513C))(0);
	}
	template <typename T = void*> static T get_Description() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B352D8))(0);
	}
	template <typename T = void*> static T get_Guild() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B35474))(0);
	}
	template <typename T = void*> static T get_GuildLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B35610))(0);
	}
	template <typename T = void*> static T get_GuildTag() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B357AC))(0);
	}
	template <typename T = void*> static T get_GuildType() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B35948))(0);
	}
	template <typename T = void*> static T get_KilledBosses() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B35AE4))(0);
	}
	template <typename T = void*> static T get_Leader() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B35C80))(0);
	}
	template <typename T = void*> static T get_MembersCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B35E1C))(0);
	}
	template <typename T = void*> static T get_MessageOfTheDay() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B35FB8))(0);
	}
	template <typename T = void*> static T get_Name() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B36154))(0);
	}
	template <typename T = void*> static T get_PreviousWeekRankPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B362F0))(0);
	}
	template <typename T = void*> static T get_Region() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B3648C))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B36628))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B366A0))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B36718))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B36790))(0, matchers);
	}

};

}
