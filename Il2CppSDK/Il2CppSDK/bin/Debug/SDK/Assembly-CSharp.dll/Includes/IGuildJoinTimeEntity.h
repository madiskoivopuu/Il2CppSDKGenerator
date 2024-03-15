#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildJoinTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildJoinTimeEntity"));
	}


	template <typename R = GuildJoinTimeComponent*> R get_guildJoinTime() {
		return ((R (*)(IGuildJoinTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGuildJoinTime() {
		return ((R (*)(IGuildJoinTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGuildJoinTime(int64_t newValue) {
		return ((R (*)(IGuildJoinTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceGuildJoinTime(int64_t newValue) {
		return ((R (*)(IGuildJoinTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveGuildJoinTime() {
		return ((R (*)(IGuildJoinTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

