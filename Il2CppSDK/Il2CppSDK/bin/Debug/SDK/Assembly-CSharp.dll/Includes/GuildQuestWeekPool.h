#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestWeekPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestWeekPool"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _dayPools() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& StartWeekTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Seed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int64_t> T get_StartWeekTime() {
		return ((T (*)(GuildQuestWeekPool*))(Il2CppBase() + 0x1938C7C))(this);
	}
	template <typename T = void> T set_StartWeekTime(int64_t value) {
		return ((T (*)(GuildQuestWeekPool*, int64_t))(Il2CppBase() + 0x1938C84))(this, value);
	}
	template <typename T = int32_t> T get_Seed() {
		return ((T (*)(GuildQuestWeekPool*))(Il2CppBase() + 0x1938C8C))(this);
	}
	template <typename T = void> T set_Seed(int32_t value) {
		return ((T (*)(GuildQuestWeekPool*, int32_t))(Il2CppBase() + 0x1938C94))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDayPool(uintptr_t difficulty, int64_t now) {
		return ((T (*)(GuildQuestWeekPool*, uintptr_t, int64_t))(Il2CppBase() + 0x1938C9C))(this, difficulty, now);
	}
	template <typename T = bool> T Contains(Il2CppString* questName, int64_t now) {
		return ((T (*)(GuildQuestWeekPool*, Il2CppString*, int64_t))(Il2CppBase() + 0x19360C0))(this, questName, now);
	}
	template <typename T = void> T _ctorg__GenerateQuests|13_0(uintptr_t difficulty, uintptr_t , uintptr_t ) {
		return ((T (*)(GuildQuestWeekPool*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1938F50))(this, difficulty, , );
	}

};

}
