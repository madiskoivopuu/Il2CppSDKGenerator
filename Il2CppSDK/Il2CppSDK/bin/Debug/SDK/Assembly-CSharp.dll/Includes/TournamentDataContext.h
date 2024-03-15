#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 
#include "TournamentEntity.h" 

class TournamentDataContext : public DataContext1<TournamentEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentDataContext"));
	}

	template <typename R = Il2CppString*> static R& RegularTournamentName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& GuildGlobalTournamentName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& GuildServerTournamentName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 IGroup1TournamentEntity*>*& GlobalTournaments() {
		return *(IGroup1TournamentEntity*>**)((uintptr_t)this + 0x110);
	}


};

