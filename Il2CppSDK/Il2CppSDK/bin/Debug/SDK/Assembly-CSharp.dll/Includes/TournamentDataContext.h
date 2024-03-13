#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class TournamentDataContext : public DataContext1<TournamentEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentDataContext"));
	}

	template <typename T = Il2CppString*> static T& RegularTournamentName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GuildGlobalTournamentName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GuildServerTournamentName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IGroup1TournamentEntity*>*> T& GlobalTournaments() {
		return *(T*)((uintptr_t)this + 0x110);
	}


};

