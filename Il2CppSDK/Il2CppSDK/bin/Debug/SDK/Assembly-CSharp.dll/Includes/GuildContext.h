#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class GuildContext : public BaseReplicatedContext1<GuildEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildContext"));
	}

	template <typename T = Il2CppString*> static T& Id() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Leader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(GuildContext*))(Il2CppBase() + 0x12EB5DC))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(GuildContext*))(Il2CppBase() + 0x12EB5E4))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(GuildContext*))(Il2CppBase() + 0x12EB5EC))(this);
	}
	template <typename T = GuildEntity*> T GetEntityWithId(int64_t id) {
		return ((T (*)(GuildContext*, int64_t))(Il2CppBase() + 0x12E48BC))(this, id);
	}
	template <typename T = GuildEntity*> T get_Item(int64_t id) {
		return ((T (*)(GuildContext*, int64_t))(Il2CppBase() + 0x12EB908))(this, id);
	}
	template <typename T = GuildEntity*> T CreateEntityWithId(int64_t id) {
		return ((T (*)(GuildContext*, int64_t))(Il2CppBase() + 0x12EB944))(this, id);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(GuildContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x12EBABC))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(GuildContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x12EBBC4))(this, reader, entity);
	}
	template <typename T = GuildEntity*> T get_avatarEntity() {
		return ((T (*)(GuildContext*))(Il2CppBase() + 0x12EBCB0))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(GuildContext*))(Il2CppBase() + 0x12EBD8C))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(GuildContext*, bool))(Il2CppBase() + 0x12EBDA8))(this, value);
	}

};

