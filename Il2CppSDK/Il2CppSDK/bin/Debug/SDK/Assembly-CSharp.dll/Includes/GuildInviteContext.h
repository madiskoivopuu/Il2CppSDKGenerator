#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 
#include "GuildInviteEntity.h" 

class GuildInviteContext : public BaseReplicatedContext1<GuildInviteEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInviteContext"));
	}

	template <typename R = Il2CppString*> static R& Id() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& IncomePlayer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& OutcomePlayer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& IncomeGuild() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& OutcomeGuild() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(GuildInviteContext*))(Il2CppBase() + 0x1B2AF20))(this);
	}
	template <typename R = Commands> R get_EntityCommand() {
		return ((R (*)(GuildInviteContext*))(Il2CppBase() + 0x1B2AF28))(this);
	}
	template <typename R = Commands> R get_ComponentCommand() {
		return ((R (*)(GuildInviteContext*))(Il2CppBase() + 0x1B2AF30))(this);
	}
	template <typename R = GuildInviteEntity*> R GetEntityWithId(int64_t id) {
		return ((R (*)(GuildInviteContext*, int64_t))(Il2CppBase() + 0x1B2C2F4))(this, id);
	}
	 HashSet1<GuildInviteEntity*>* GetToPlayerEntities(int64_t toPlayerId) {
		return ((HashSet1<GuildInviteEntity*>* (*)(GuildInviteContext*, int64_t))(Il2CppBase() + 0x1B2C3D0))(this, toPlayerId);
	}
	 HashSet1<GuildInviteEntity*>* GetFromPlayerEntities(int64_t fromPlayerId) {
		return ((HashSet1<GuildInviteEntity*>* (*)(GuildInviteContext*, int64_t))(Il2CppBase() + 0x1B27F9C))(this, fromPlayerId);
	}
	 HashSet1<GuildInviteEntity*>* GetToGuildEntities(int64_t toGuildId) {
		return ((HashSet1<GuildInviteEntity*>* (*)(GuildInviteContext*, int64_t))(Il2CppBase() + 0x1B2C490))(this, toGuildId);
	}
	 HashSet1<GuildInviteEntity*>* GetFromGuildEntities(int64_t fromGuildId) {
		return ((HashSet1<GuildInviteEntity*>* (*)(GuildInviteContext*, int64_t))(Il2CppBase() + 0x1B2C550))(this, fromGuildId);
	}
	template <typename R = GuildInviteEntity*> R get_Item(int64_t id) {
		return ((R (*)(GuildInviteContext*, int64_t))(Il2CppBase() + 0x1B2C610))(this, id);
	}
	template <typename R = GuildInviteEntity*> R CreateEntityWithId(int64_t id) {
		return ((R (*)(GuildInviteContext*, int64_t))(Il2CppBase() + 0x1B2C64C))(this, id);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(GuildInviteContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1B2C7C4))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(GuildInviteContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1B2C8CC))(this, reader, entity);
	}

};

