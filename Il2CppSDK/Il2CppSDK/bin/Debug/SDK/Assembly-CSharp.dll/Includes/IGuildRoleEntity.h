#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildRoleEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildRoleEntity"));
	}


	template <typename T = GuildRoleComponent*> T get_guildRole() {
		return ((T (*)(IGuildRoleEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGuildRole() {
		return ((T (*)(IGuildRoleEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGuildRole(GuildRole* newType) {
		return ((T (*)(IGuildRoleEntity*, GuildRole*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T ReplaceGuildRole(GuildRole* newType) {
		return ((T (*)(IGuildRoleEntity*, GuildRole*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T RemoveGuildRole() {
		return ((T (*)(IGuildRoleEntity*))(Il2CppBase() + 0x0))(this);
	}

};

