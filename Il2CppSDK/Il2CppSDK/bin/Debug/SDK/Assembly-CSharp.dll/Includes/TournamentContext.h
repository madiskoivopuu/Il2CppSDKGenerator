#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class TournamentContext : public BaseReplicatedContext1<TournamentEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentContext"));
	}

	template <typename R = Il2CppString*> static R& TournamentId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(TournamentContext*))(Il2CppBase() + 0x14FE390))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(TournamentContext*))(Il2CppBase() + 0x14FE398))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(TournamentContext*))(Il2CppBase() + 0x14FE3A0))(this);
	}
	template <typename R = TournamentEntity*> R GetEntityWithId(int64_t id) {
		return ((R (*)(TournamentContext*, int64_t))(Il2CppBase() + 0x14FE854))(this, id);
	}
	template <typename R = TournamentEntity*> R get_Item(int64_t id) {
		return ((R (*)(TournamentContext*, int64_t))(Il2CppBase() + 0x14FE930))(this, id);
	}
	template <typename R = TournamentEntity*> R CreateEntityWithId(int64_t id) {
		return ((R (*)(TournamentContext*, int64_t))(Il2CppBase() + 0x14FE96C))(this, id);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(TournamentContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x14FEAE4))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(TournamentContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x14FEBEC))(this, reader, entity);
	}
	template <typename R = TournamentEntity*> R get_avatarEntity() {
		return ((R (*)(TournamentContext*))(Il2CppBase() + 0x14FECD8))(this);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(TournamentContext*))(Il2CppBase() + 0x14FEF4C))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(TournamentContext*, bool))(Il2CppBase() + 0x14FEF68))(this, value);
	}

};

