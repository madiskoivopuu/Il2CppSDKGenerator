#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class TournamentContext : public BaseReplicatedContext1<TournamentEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentContext"));
	}

	template <typename T = Il2CppString*> static T& TournamentId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(TournamentContext*))(Il2CppBase() + 0x14FE390))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(TournamentContext*))(Il2CppBase() + 0x14FE398))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(TournamentContext*))(Il2CppBase() + 0x14FE3A0))(this);
	}
	template <typename T = TournamentEntity*> T GetEntityWithId(int64_t id) {
		return ((T (*)(TournamentContext*, int64_t))(Il2CppBase() + 0x14FE854))(this, id);
	}
	template <typename T = TournamentEntity*> T get_Item(int64_t id) {
		return ((T (*)(TournamentContext*, int64_t))(Il2CppBase() + 0x14FE930))(this, id);
	}
	template <typename T = TournamentEntity*> T CreateEntityWithId(int64_t id) {
		return ((T (*)(TournamentContext*, int64_t))(Il2CppBase() + 0x14FE96C))(this, id);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(TournamentContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x14FEAE4))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(TournamentContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x14FEBEC))(this, reader, entity);
	}
	template <typename T = TournamentEntity*> T get_avatarEntity() {
		return ((T (*)(TournamentContext*))(Il2CppBase() + 0x14FECD8))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(TournamentContext*))(Il2CppBase() + 0x14FEF4C))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(TournamentContext*, bool))(Il2CppBase() + 0x14FEF68))(this, value);
	}

};

