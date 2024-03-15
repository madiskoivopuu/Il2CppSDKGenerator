#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 
#include "GuildEntity.h" 

class GuildContext : public BaseReplicatedContext1<GuildEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildContext"));
	}

	template <typename R = Il2CppString*> static R& Id() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Leader() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(GuildContext*))(Il2CppBase() + 0x12EB5DC))(this);
	}
	template <typename R = Commands> R get_EntityCommand() {
		return ((R (*)(GuildContext*))(Il2CppBase() + 0x12EB5E4))(this);
	}
	template <typename R = Commands> R get_ComponentCommand() {
		return ((R (*)(GuildContext*))(Il2CppBase() + 0x12EB5EC))(this);
	}
	template <typename R = GuildEntity*> R GetEntityWithId(int64_t id) {
		return ((R (*)(GuildContext*, int64_t))(Il2CppBase() + 0x12E48BC))(this, id);
	}
	template <typename R = GuildEntity*> R get_Item(int64_t id) {
		return ((R (*)(GuildContext*, int64_t))(Il2CppBase() + 0x12EB908))(this, id);
	}
	template <typename R = GuildEntity*> R CreateEntityWithId(int64_t id) {
		return ((R (*)(GuildContext*, int64_t))(Il2CppBase() + 0x12EB944))(this, id);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(GuildContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x12EBABC))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(GuildContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x12EBBC4))(this, reader, entity);
	}
	template <typename R = GuildEntity*> R get_avatarEntity() {
		return ((R (*)(GuildContext*))(Il2CppBase() + 0x12EBCB0))(this);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(GuildContext*))(Il2CppBase() + 0x12EBD8C))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(GuildContext*, bool))(Il2CppBase() + 0x12EBDA8))(this, value);
	}

};

