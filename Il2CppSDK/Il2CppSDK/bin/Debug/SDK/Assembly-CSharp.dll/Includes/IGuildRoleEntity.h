#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildRoleEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildRoleEntity"));
	}


	template <typename R = GuildRoleComponent*> R get_guildRole() {
		return ((R (*)(IGuildRoleEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGuildRole() {
		return ((R (*)(IGuildRoleEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGuildRole(GuildRole newType) {
		return ((R (*)(IGuildRoleEntity*, GuildRole))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R ReplaceGuildRole(GuildRole newType) {
		return ((R (*)(IGuildRoleEntity*, GuildRole))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R RemoveGuildRole() {
		return ((R (*)(IGuildRoleEntity*))(Il2CppBase() + 0x0))(this);
	}

};

