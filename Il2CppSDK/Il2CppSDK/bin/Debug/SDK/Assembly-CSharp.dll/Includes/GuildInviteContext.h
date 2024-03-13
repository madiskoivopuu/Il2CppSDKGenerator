#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class GuildInviteContext : public BaseReplicatedContext1<GuildInviteEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInviteContext"));
	}

	template <typename T = Il2CppString*> static T& Id() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& IncomePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OutcomePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& IncomeGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OutcomeGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(GuildInviteContext*))(Il2CppBase() + 0x1B2AF20))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(GuildInviteContext*))(Il2CppBase() + 0x1B2AF28))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(GuildInviteContext*))(Il2CppBase() + 0x1B2AF30))(this);
	}
	template <typename T = GuildInviteEntity*> T GetEntityWithId(int64_t id) {
		return ((T (*)(GuildInviteContext*, int64_t))(Il2CppBase() + 0x1B2C2F4))(this, id);
	}
	template <typename T = HashSet1GuildInviteEntity*>*> T GetToPlayerEntities(int64_t toPlayerId) {
		return ((T (*)(GuildInviteContext*, int64_t))(Il2CppBase() + 0x1B2C3D0))(this, toPlayerId);
	}
	template <typename T = HashSet1GuildInviteEntity*>*> T GetFromPlayerEntities(int64_t fromPlayerId) {
		return ((T (*)(GuildInviteContext*, int64_t))(Il2CppBase() + 0x1B27F9C))(this, fromPlayerId);
	}
	template <typename T = HashSet1GuildInviteEntity*>*> T GetToGuildEntities(int64_t toGuildId) {
		return ((T (*)(GuildInviteContext*, int64_t))(Il2CppBase() + 0x1B2C490))(this, toGuildId);
	}
	template <typename T = HashSet1GuildInviteEntity*>*> T GetFromGuildEntities(int64_t fromGuildId) {
		return ((T (*)(GuildInviteContext*, int64_t))(Il2CppBase() + 0x1B2C550))(this, fromGuildId);
	}
	template <typename T = GuildInviteEntity*> T get_Item(int64_t id) {
		return ((T (*)(GuildInviteContext*, int64_t))(Il2CppBase() + 0x1B2C610))(this, id);
	}
	template <typename T = GuildInviteEntity*> T CreateEntityWithId(int64_t id) {
		return ((T (*)(GuildInviteContext*, int64_t))(Il2CppBase() + 0x1B2C64C))(this, id);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(GuildInviteContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1B2C7C4))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(GuildInviteContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1B2C8CC))(this, reader, entity);
	}

};

