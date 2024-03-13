#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RelationshipRules
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelationshipRules"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = RelationshipRules*> static T& ClanTeamGuildFriends() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RelationshipRules*> static T& ClanTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RelationshipRules*> static T& GuildTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RelationshipRules*> static T& PlayersInOneTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

