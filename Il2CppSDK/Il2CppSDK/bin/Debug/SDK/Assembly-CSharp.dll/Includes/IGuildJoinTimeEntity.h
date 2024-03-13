#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildJoinTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildJoinTimeEntity"));
	}


	template <typename T = GuildJoinTimeComponent*> T get_guildJoinTime() {
		return ((T (*)(IGuildJoinTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGuildJoinTime() {
		return ((T (*)(IGuildJoinTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGuildJoinTime(int64_t newValue) {
		return ((T (*)(IGuildJoinTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceGuildJoinTime(int64_t newValue) {
		return ((T (*)(IGuildJoinTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveGuildJoinTime() {
		return ((T (*)(IGuildJoinTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

