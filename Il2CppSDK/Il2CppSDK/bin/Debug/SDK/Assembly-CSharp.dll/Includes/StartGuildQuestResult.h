#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartGuildQuestResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartGuildQuestResult"));
	}

	template <typename T = uint8_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = StartGuildQuestResult*> static T& Error() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = StartGuildQuestResult*> static T& GuildRoleWrong() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = StartGuildQuestResult*> static T& GuildQuestUnavailableInThisDay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = StartGuildQuestResult*> static T& GuildQuestStartTemporarilyDisabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = StartGuildQuestResult*> static T& GuildQuestAlreadyExists() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = StartGuildQuestResult*> static T& GuildQuestСompletedToday() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = StartGuildQuestResult*> static T& GuildQuestExceededMaxDayCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = StartGuildQuestResult*> static T& Ok() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

