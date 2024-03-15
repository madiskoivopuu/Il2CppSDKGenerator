#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestWeekPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestWeekPool"));
	}

	template <typename R = Il2CppArray<DayPool*>*> R& _dayPools() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& StartWeekTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& Seed() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R& _empty() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int64_t> R get_StartWeekTime() {
		return ((R (*)(GuildQuestWeekPool*))(Il2CppBase() + 0x1938C7C))(this);
	}
	template <typename R = void> R set_StartWeekTime(int64_t value) {
		return ((R (*)(GuildQuestWeekPool*, int64_t))(Il2CppBase() + 0x1938C84))(this, value);
	}
	template <typename R = int32_t> R get_Seed() {
		return ((R (*)(GuildQuestWeekPool*))(Il2CppBase() + 0x1938C8C))(this);
	}
	template <typename R = void> R set_Seed(int32_t value) {
		return ((R (*)(GuildQuestWeekPool*, int32_t))(Il2CppBase() + 0x1938C94))(this, value);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R GetDayPool(GuildQuestDifficulty* difficulty, int64_t now) {
		return ((R (*)(GuildQuestWeekPool*, GuildQuestDifficulty*, int64_t))(Il2CppBase() + 0x1938C9C))(this, difficulty, now);
	}
	template <typename R = bool> R Contains(Il2CppString* questName, int64_t now) {
		return ((R (*)(GuildQuestWeekPool*, Il2CppString*, int64_t))(Il2CppBase() + 0x19360C0))(this, questName, now);
	}
	template <typename R = void> R _ctorg__GenerateQuests|13_0(GuildQuestDifficulty* difficulty, uintptr_t , uintptr_t ) {
		return ((R (*)(GuildQuestWeekPool*, GuildQuestDifficulty*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1938F50))(this, difficulty, , );
	}

};

