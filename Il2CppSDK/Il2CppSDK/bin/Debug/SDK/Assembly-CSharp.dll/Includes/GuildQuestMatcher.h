#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestMatcher"));
	}

	template <typename T = void*> static T& _matcherDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherEndTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherGuildQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherMaxProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherMembersProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherStartTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void*> static T get_Duration() {
		return ((T (*)(void *))(Il2CppBase() + 0x193689C))(0);
	}
	template <typename T = void*> static T get_EndTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1936A1C))(0);
	}
	template <typename T = void*> static T get_Guild() {
		return ((T (*)(void *))(Il2CppBase() + 0x1932E48))(0);
	}
	template <typename T = void*> static T get_GuildQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x1932CAC))(0);
	}
	template <typename T = void*> static T get_MaxProgress() {
		return ((T (*)(void *))(Il2CppBase() + 0x1936BB8))(0);
	}
	template <typename T = void*> static T get_MembersProgress() {
		return ((T (*)(void *))(Il2CppBase() + 0x1936D54))(0);
	}
	template <typename T = void*> static T get_Progress() {
		return ((T (*)(void *))(Il2CppBase() + 0x1936EF0))(0);
	}
	template <typename T = void*> static T get_Quest() {
		return ((T (*)(void *))(Il2CppBase() + 0x193708C))(0);
	}
	template <typename T = void*> static T get_Result() {
		return ((T (*)(void *))(Il2CppBase() + 0x1937228))(0);
	}
	template <typename T = void*> static T get_StartTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x19373C4))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1937560))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x19375D8))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1937650))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x19376C8))(0, matchers);
	}

};

}
