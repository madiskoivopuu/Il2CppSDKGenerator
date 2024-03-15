#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class LobbyContext : public BaseReplicatedContext1<LobbyEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyContext"));
	}

	template <typename R = Il2CppString*> static R& LobbyId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& OwnerId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(LobbyContext*))(Il2CppBase() + 0x1437DF0))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(LobbyContext*))(Il2CppBase() + 0x1437DF8))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(LobbyContext*))(Il2CppBase() + 0x1437E00))(this);
	}
	template <typename R = LobbyEntity*> R GetEntityWithId(int64_t id) {
		return ((R (*)(LobbyContext*, int64_t))(Il2CppBase() + 0x143855C))(this, id);
	}
	template <typename R = LobbyEntity*> R GetEntityWithOwnerId(int64_t ownerId) {
		return ((R (*)(LobbyContext*, int64_t))(Il2CppBase() + 0x1438638))(this, ownerId);
	}
	template <typename R = LobbyEntity*> R GetEntityWithPlayerId(int64_t playerId) {
		return ((R (*)(LobbyContext*, int64_t))(Il2CppBase() + 0x1438714))(this, playerId);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(LobbyContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1438824))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(LobbyContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x143892C))(this, reader, entity);
	}
	template <typename R = LobbyEntity*> R get_avatarEntity() {
		return ((R (*)(LobbyContext*))(Il2CppBase() + 0x1438B1C))(this);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(LobbyContext*))(Il2CppBase() + 0x1438D90))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(LobbyContext*, bool))(Il2CppBase() + 0x1438DAC))(this, value);
	}

};

